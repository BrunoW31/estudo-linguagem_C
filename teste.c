#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#define TAM 100

int main()
{
    char url[] = "/etc/default/zramswap";
    FILE *arqv = fopen(url, "r");
    char ler[TAM];
    int i = 0;

    if(arqv){
        for( i=0; i<=21; i++ ){
        fgets(ler, TAM, arqv);
        printf("%s", ler);
        }
        fclose(arqv);
    }else{
        printf("Erro ao abrir arquivo!");
    }
    return 0;
}
