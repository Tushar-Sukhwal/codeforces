#include <arpa/inet.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>

int main() {
  int sock = socket(AF_INET, SOCK_STREAM, 0);
  if (sock < 0) {
    perror("error");
    exit(0);
  }

  struct sockaddr_in server;
  server.sin_addr.s_addr = inet_addr("127.0.0.1");
  server.sin_family = AF_INET;
  server.sin_port = htons(9001);

  socklen_t server_len = sizeof(server);
  connect(sock, (struct sockaddr*)&server, server_len);

  while (1) {
    char input[1000] = {0};

    scanf(" %[^\n]", input);

    send(sock, input, sizeof(input), 0);

    char rec[1000] = {0};

    recv(sock, rec, sizeof(rec), 0);

    printf("%s\n", rec);
  }
}