#include <stdio.h>
#include <stdlib.h>

#define URL "../../../.config/i3/config"
#define NUM 213

int main() {

    FILE *arq;
    arq = fopen(URL, "r");

    if(arq == NULL){
        printf("Erro ao abrir arquivo");
        exit (1);
        }
    char ler[NUM];
    int i = 0;

   for (i = 0; i <= NUM; i++){
        fgets(ler, NUM, arq);
        printf("%s\n", ler);
    }

    fclose(arq);
    return 0;
}
