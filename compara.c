#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define URL "list"
#define NUM 50

int main(){
    char nome[20];
    printf("Digite um nome: ");
    scanf("%s", nome);

    FILE *file = fopen(URL, "r");
    if(file == NULL){
        printf("Erro ao Abrir arquivo!");
        return (1);
    }
    int i = 0;
    char teste[NUM];
    int encontrado = 0;

        while(fgets(teste, NUM, file) != NULL){
            // Remove o \n do final da linha lida
            teste[strcspn(teste, "\n")] = '0';
            // compara o nome digitado com o nome do arquivo.
            if(strcmp(teste, nome)){
            encontrado = 1;
            }
        }
        if(encontrado == 1){
            printf("Nome encontrado na lista!\n");
            printf("Nome: %s.\n", nome);
        }else{
            printf("Nome nao encontrado na lista!\n");
            printf("O nome e: %s.\n", nome);
        }

    return 0;
}


