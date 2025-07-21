#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    char teste;
    char teste2;

    // printf("Digite um caractere: ");
    // teste = getc(stdin);
    
    printf("Digite outro caracter:");
    teste2 = getchar();
    
    //printf("Você digitou: %c com getc\n", teste);
    printf("Você digitou: %c com getchar\n", teste2);
    


    return 0;
}