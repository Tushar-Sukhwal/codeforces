//Server Side code
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

int main() {
    int server_socket, client_socket;
    char buffer[1024];
    struct sockaddr_in server_address, client_address;

    // Create a TCP socket
    server_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (server_socket < 0) {
        perror("Error in socket creation");
        exit(EXIT_FAILURE);
    }

    // Initialize server address
    memset(&server_address, 0, sizeof(server_address));
    server_address.sin_family = AF_INET;
    server_address.sin_addr.s_addr = INADDR_ANY;
    server_address.sin_port = htons(12345);

    // Bind the socket to the specified address and port
    if (bind(server_socket, (struct sockaddr *) &server_address, sizeof(server_address)) < 0) {
        perror("Error in binding");
        exit(EXIT_FAILURE);
    }

    // Listen for incoming connections
    listen(server_socket, 5);
    printf("Server is listening...\n");

    while (1) {
        // Accept incoming connections
        socklen_t client_length = sizeof(client_address);
        client_socket = accept(server_socket, (struct sockaddr *) &client_address, &client_length);
        if (client_socket < 0) {
            perror("Error in accepting");
            exit(EXIT_FAILURE);
        }

        while (1) {
            // Receive data from the client
            memset(buffer, 0, sizeof(buffer));
            recv(client_socket, buffer, sizeof(buffer), 0);
            printf("Received: %s\n", buffer);

            // Check if the client wants to exit
            if (strncmp(buffer, "exit", 4) == 0) {
                printf("Client requested to exit. Closing connection.\n");
                break;
            }

            // Parse the received message to extract operands and operator
            char operator;
            double operand1, operand2;
            int count = sscanf(buffer, "%lf%c%lf", &operand1, &operator, &operand2);
            if (count != 3) {
                perror("Invalid expression format");
                continue;
            }

            // Perform the calculation
            double result;
            switch(operator) {
                case '+':
                    result = operand1 + operand2;
                    break;
                case '-':
                    result = operand1 - operand2;
                    break;
                case '*':
                    result = operand1 * operand2;
                    break;
                case '/':
                    if (operand2 != 0)
                        result = operand1 / operand2;
                    else {
                        perror("Division by zero");
                        exit(EXIT_FAILURE);
                    }
                    break;
                default:
                    perror("Invalid operator");
                    exit(EXIT_FAILURE);
            }

            // Convert the result to a string
            sprintf(buffer, "%lf", result);

            // Send the result back to the client
            send(client_socket, buffer, strlen(buffer), 0);
        }

        // Close the client connection
        close(client_socket);
    }

    // Close the server socket (will never reach here in this example)
    close(server_socket);

    return 0;
}