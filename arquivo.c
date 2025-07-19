#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arq;
    char url[] = "char.txt";
    char st;

    printf("Digite seu nome completo: ");
    scanf("%s", st);

    arq = fopen(url, "a");
    if (arq == NULL){
        printf("Erro, arquivo nao aberto.\n");
    }

    fprintf("")

    fclose(arq);

    return 0;
}
