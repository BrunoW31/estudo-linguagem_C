#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1 = 10;
    int n2 = 10;
    char c1 = 'va';
    char c2 = 'hb';

    printf("Valor de n1: %d, endereço: %d\n", n1, &n1);
    printf("Valor de n2: %d, endereço: %d\n", n2, &n2);
    printf("Valor de c1: %c, endereço: %d\n", c1, &c1);
    printf("Valor de c2: %c, endereço: %d\n", c2, &c2);

    n1 = 190;
    n2 = 1090;
    c1 = 'cb';
    c2 = 'jg';

    printf("Valor de n1: %d, endereço: %d\n", n1, &n1);
    printf("Valor de n2: %d, endereço: %d\n", n2, &n2);
    printf("Valor de c1: %c, endereço: %d\n", c1, &c1);
    printf("Valor de c2: %c, endereço: %d\n", c2, &c2);

    return 0;
}
