/*
Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
#include <math.h>
#include <string.h>

int main() {
    
    setlocale(LC_ALL, "Portuguese");
    printf("Tabuada de 1 a 9");
    int x = 1;
    for (int i = 0; i <= 9; i++)
    {
        printf("%d x %d = %d \n", x, i, x * i);

    } 
    return 0;
}