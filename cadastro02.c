/*
* Programa: Cadastro de Usuários
* Nome: Bruno Simonato
* Data: 18/07/2025
*/
/*
* Sistema de cadastro de pessoas
* nome, idade, cpf, email, senha;
*/
// Cabeçaclho
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>



int main() {
    // Variaveis
    char nome[100];
    int idade;
    char cpf[20];
    char email[30];
    char senha[20];
    char url[] = "cadastro.txt";
    int cp = 0;
    // Abrir arquivos
    FILE *arquivo = fopen(url, "a");
    // Verificar Resposta do Arquivo.
    if(arquivo == NULL){
        printf("Erro ao abrir arquivo.\n");
    }

    printf("Sistema de Cadastro.\n\n");
    printf("Digite seu nome: ");
    fgets(nome, 100, stdin);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu CPF: ");
    scanf("%s", cpf);
    printf("Digite seu email: ");
    scanf("%s", email);
    printf("Cadastre uma senha: ");
    scanf("%s", senha);

    fprintf(arquivo, "Sistema de cadastro!\n");
    fprintf(arquivo, "Nome: %s", nome);
    fprintf(arquivo, "Idade: %d\n", idade);
    fprintf(arquivo, "CPF: %s\n", cpf);
    fprintf(arquivo, "Email: %s\n", email);
    fprintf(arquivo, "Senha: %s\n\n", senha);


    fclose(arquivo);

    return 0;

}


