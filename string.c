#include <stdio.h>
#include <stdlib.h>
#define NUM 100

int main(void) {
    FILE *arq;
    char  url[] = "teste.txt";
    char str[100];

    printf("Digite seu nome completo: ");
    fgets(str, 100, stdin); // Melhor fotma para receber strings
    /* Vimos que a função scanf() pega tudo até aparecer o primeiro espaço em branco, e pára antes dele.
    Já a gets() não, ela pega tudo até aparecer uma new line \n, inclusive nada. Ou seja, se você der um ENTER,
    a gets() vai armazenar esse enter na string. */

    arq = fopen(url, "w");
    if (arq == NULL) {
        printf("Erro ao abrir aqruivo.\n");
    }
    fprintf(arq, "Seu nome completo e: %s.\n\n", str);
    fclose(arq);


    return 0;
}
