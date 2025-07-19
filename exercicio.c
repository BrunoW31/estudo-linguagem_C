#include <stdio.h>
#include <stdlib.h>
/*  Escreva um programa que peça números decimais ao usuário, até que ele digita 0.
Salve todos os números digitados em um arquivo chamado "dados.txt", que mostra a média desses números no final do arquivo.*/

int main()
{
    float n1, n2, n3, n4, media;
    int para;
    FILE *arqv;
    char url[] = "dados.txt";
    char nome[30];

    arqv = fopen(url, "a");

    do {
        printf("Programa para tirar media do aluno!\n");
        printf("Digite o nome do Aluno: ");
        fgets(nome, 30, stdin);
        fprintf(arqv, "Nome do aluno: %s.\n", nome);
        printf("Digite a nota1: ");
        scanf("%f", &n1);
        fprintf(arqv, "nota 1: %.2f.\n", n1);
        printf("Digite a nota2: ");
        scanf("%f", &n2);
        fprintf(arqv, "nota 2: %.2f.\n", n1);
        printf("Digite a nota3: ");
        scanf("%f", &n3);
        fprintf(arqv, "nota 3: %.2f.\n", n1);
        printf("Digite a nota4: ");
        scanf("%f", &n4);
        fprintf(arqv, "nota 4: %.2f.\n", n1);
        /*                            */
        printf("Deseja continuar: ");
        scanf("%d", &para);

    }while(para != 0);
    fclose(arqv);


    return 0;
}
