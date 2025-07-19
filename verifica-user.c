#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char id[30];
    char recb[30];

    // Roda no terminal para verificar se é root
    system("id -u > teste.txt");

    // abre o aqruivo
    FILE *arqv = fopen("teste.txt", "r");

    // verifica se o arquivo é valido e abre cooretamente
    if(arqv){
        // Lê o que esta dentro do arquivo
        fgets(recb, 30, arqv);

        printf("%s\n", recb);
        fclose(arqv); // fecha o arquivo
    }else{
        printf("Erro ao abrir arquivo! ");
    }



    return 0;
}
