#include <stdio.h>
#include <stdlib.h>

// Curso C Progressivo: www.cprogessivo.net
// O melhor curso de C! Online e gratuito !
// Artigos, apostilas, tutoriais e vídeo-aulas sobre
// a linguagem de programação C !

//Faça um programa em C que mostra quantos bytes ocupam cada uma das variáveis: char, int, float e double.
int main()
{
    /*printf("Char: %d bytes\n", sizeof(char));
    printf("Int: %d bytes\n", sizeof(int));
    printf("Float: %d bytes\n", sizeof(float));
    printf("Double: %d bytes\n", sizeof(double));*/

    char teste[6];

    printf("Digite seu nome: ");
    scanf("%s", teste);

    printf("string: %s.\n", teste);


    return 0;
}
