#include <arpa/inet.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>

int solve(int a, int b, char ch) {
  if (ch == '+') return a + b;
  if (ch == '-') return a - b;
  if (ch == '*') return a * b;
  if (ch == '/') return a / b;
}

int main() {
  int sock = socket(AF_INET, SOCK_STREAM, 0);
  if (sock < 0) {
    perror("error");
    exit(0);
  }

  struct sockaddr_in server;
  server.sin_addr.s_addr = INADDR_ANY;
  server.sin_family = AF_INET;
  server.sin_port = htons(9001);

  bind(sock, (struct sockaddr*)&server, sizeof(server));

  listen(sock, 1);

  while (1) {
    socklen_t server_len = sizeof(server);
    int client = accept(sock, (struct sockaddr*)&server, &server_len);

    while (1) {
      char input[1000] = {0};

      recv(client, input, sizeof(input), 0);

      int a, b;
      char ch;

      sscanf(input, " %d %c %d", &a, &ch, &b);

      int ans = solve(a, b, ch);

      char recv[1000] = {0};

      sprintf(recv, "%d", ans);

      send(client, recv, sizeof(recv), 0);
    }
  }
}