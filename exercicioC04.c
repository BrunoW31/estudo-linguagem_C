#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[30];
    char endereco[30];
    char telefone[20];
    int idade;    
}Pessoa;

int main(){
    Pessoa *pessoa;
    pessoa = (Pessoa *)malloc(sizeof(Pessoa));

    printf("Digite seu nome: ");
    fgets(pessoa->nome, sizeof(pessoa->nome), stdin);
    printf("Digite o endereco: ");
    pessoa->nome[strcspn(pessoa->nome, "\n")] = '\0';
    fgets(pessoa->endereco, sizeof(pessoa->endereco), stdin);
    printf("Digite o telefone: ");
    pessoa->endereco[strcspn(pessoa->endereco, "\n")] = '\0';
    fgets(pessoa->telefone, sizeof(pessoa->telefone), stdin);
    printf("Digite a idade: ");
    scanf(" %d", &pessoa->idade);

    system("clear");
    printf("Seu nome e %s, tem %d anos, mora na %s, seu telefone e %s\n", pessoa->nome, pessoa->idade, pessoa->endereco, pessoa->telefone);

    return 0;
}
