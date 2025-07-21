#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>

void scan_port(const char *ip, int port) {
    struct sockaddr_in target;
    int sock = socket(AF_INET, SOCK_STREAM, 0);
    
    target.sin_family = AF_INET;
    target.sin_port = htons(port);
    inet_pton(AF_INET, ip, &target.sin_addr);
    
    if (connect(sock, (struct sockaddr *)&target, sizeof(target)) == 0) {
        printf("[+] Porta %d aberta\n", port);
        close(sock);
    }
}

int main() {
    char ip[16];
    int start_port, end_port;
    
    printf("IP alvo: ");
    scanf("%15s", ip);
    printf("Porta inicial: ");
    scanf("%d", &start_port);
    printf("Porta final: ");
    scanf("%d", &end_port);
    
    printf("\nIniciando varredura...\n");
    for (int port = start_port; port <= end_port; port++) {
        scan_port(ip, port);
    }
    
    return 0;
}
