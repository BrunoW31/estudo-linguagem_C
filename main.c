#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 30

int main(void) {
    float n1, n2, result;
    char op;

    printf("Digite o calculo: ");
    scanf("%f %c %f", &n1, &op, &n2);

    switch(op){
        case '+':
            result = n1 + n2;
            printf("%.2f %c %.2f = %.2f.", n1, op, n2, result);
            break;
        case '-':
            result = n1 - n2;
            printf("%.2f %c %.2f = %.2f.", n1, op, n2, result);
             break;
        case '*':
            result = n1 * n2;
            printf("%.2f %c %.2f = %.2f.", n1, op, n2, result);
             break;
        case '/':
            result = n1 / n2;
            printf("%.2f %c %.2f = %.2f.", n1, op, n2, result);
             break;
        default:
            printf("Digito errado!");
             break;
    }

    return 0;
}
