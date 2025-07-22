/*
Fazer um programa em C que pergunta um valor em metros e imprime o
correspondente em decímetros, centímetros e milímetros
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h> 

int main() {
    setlocale(LC_ALL, "Portuguese");

    float metros, decimetros, centimetros, milimetros;

    printf("Digite um valor em metros: ");
    scanf("%f", &metros);

    decimetros = metros * 10;
    centimetros = metros * 100;
    milimetros = metros * 1000;

    printf("Valor em decímetros: %.2f\n", decimetros);
    printf("Valor em centímetros: %.2f\n", centimetros);
    printf("Valor em milímetros: %.2f\n", milimetros);

    return 0;
}