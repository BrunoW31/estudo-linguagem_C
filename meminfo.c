#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define URL "/proc/meminfo"
#define TAM 100

int main() 
{
    FILE *arqv;
    char ler[TAM];
    const char MemTotal[] = "MemTotal"; // Apenas a chave, pois o valor pode variar
    // Abre o arquivo
    arqv = fopen(URL, "r");  
    // verifica se o arquivo abriu normalmente
    if ( arqv == NULL) 
    {
        printf("Arquivo nao encontrado\n");
        return 1;
    }
    // faz a leitura do arquivo
    while (fgets(ler, TAM, arqv)) 
    {
       // verifica se a linha começa com "MemTotal:"
       if (strncmp(ler, MemTotal, strlen(MemTotal)) == 0)
       {
    printf("Linha encontrada: %s", ler);
       }
       // fecha o aqruivo
       fclose(arqv);
    }
    


    return 0;
}
