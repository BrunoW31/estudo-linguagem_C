#include <stdio.h>
#include <stdlib.h>

/*
criar uma lista de numeros de 1 a 100.
*/

/*

E qual a diferença do laço DO WHILE para o WHILE ?
Bom, para o WHILE rodar é necessário que a condição seja sempre verdadeira.
Logo, se ela for inicialmente FALSE, o looping while nunca irá rodar.

Já o DO WHILE vai rodar sempre, ao menos uma vez, mesmo que a condição existente no WHILE seja falsa
(se for falsa, vai rodar só uma vez e termina).

*/


int main()
{
    char a;
    // Laço do while..


    do{
        printf("Digite uma letra: ");
        scanf(" %s", &a);

        }while(a != 'c');


        /*
        // apenas laço whille

        while(a != 'c'){
        printf("Digite uma letra: ");
        scanf(" %s", &a);
        }
        */
    return 0;
}
