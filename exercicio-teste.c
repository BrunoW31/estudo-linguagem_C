#include <stdio.h>
#include <string.h>

int main() {
    char texto[100];
    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);// faz leitura do teclado
    
    texto[strcspn(texto, "\n")] = '\0'; // remove o \n

    return 0;
}
