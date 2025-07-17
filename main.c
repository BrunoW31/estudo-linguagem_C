/*
    Autor: Bruno W Simonato
    Data: 15/07/2025
    Prrograma: Aprendendo linguagem C

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[30];
    char pai[20];
    char mae[20];
    char esposa[21];
    char filha1[10];
    char filha2[10];
    char filha3[10];
    int idade;

    system("clear");
    printf("\nDigite seu nome: ");
    scanf(" %s", &nome);
    printf("Digite o nome do seu pai: ");
    scanf(" %s", &pai);
    printf("Digite o nome da sua mae: ");
    scanf(" %s", &mae);
    printf("Digite o nome da sua esposa: ");
    scanf(" %s", &esposa);
    printf("Digite o nome da 1a filha: ");
    scanf(" %s", &filha1);
    printf("Digite o nome da filha2: ");
    scanf(" %s", &filha2);
    printf("Digite o nome da filha3: ");
    scanf(" %s", &filha3);
    printf("\nNome: %s ", nome);
    printf("\nNome do pai: %s", pai);

    system("clear");

    printf("Seu nome: %s", nome);
    printf("\nNome da mae: %s", mae);
    printf("\nEsposa: %s", esposa);
    printf("\n1a Filha: %s", filha1);
    printf("\n2a Filha: %s", filha2);
    printf("3a Filha: %s", filha3);

    return 0;
}
