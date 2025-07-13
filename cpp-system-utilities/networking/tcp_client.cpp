#include <iostream>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>

int main() {
    int sock = 0;
    struct sockaddr_in serv_addr;
    char* hello = (char*)"Hello from client";
    char buffer[1024] = {0};

    sock = socket(AF_INET, SOCK_STREAM, 0);
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(8080);

    inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr);
    connect(sock, (struct sockaddr*)&serv_addr, sizeof(serv_addr));

    send(sock, hello, strlen(hello), 0);
    read(sock, buffer, 1024);
    std::cout << "Server: " << buffer << std::endl;

    close(sock);
    return 0;
}
