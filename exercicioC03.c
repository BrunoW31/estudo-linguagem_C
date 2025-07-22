
#include <stdio.h>
#include <string.h>

void imprimeNormal(const char *str) {
    if (*str == '\0') return;
    putchar(*str);
    imprimeNormal(str + 1);
}

void imprimeInvertido(const char *str) {
    if (*str == '\0') return;
    imprimeInvertido(str + 1);
    putchar(*str);
}

int main() {
    char texto[100];
    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);


    texto[strcspn(texto, "\n")] = '\0'; // remove o \n
    
    printf("Normal: ");
    imprimeNormal(texto);
    printf("\nInvertido: ");
    imprimeInvertido(texto);
    printf("\n");
    return 0;
}
