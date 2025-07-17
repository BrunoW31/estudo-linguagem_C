#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, result;
    char op;

    //printf("\nComandos\n1. +\n2. -\n3. *\n4. /\n");

    /*
    DESCRIÇÃO - LINHA POR LINHA
    printf("Entre com um numero: ");
    scanf(" %f", &num1);
    printf("Entre com o operador: ");
    scanf(" %c", &op);
    printf("Digite o segundo numero: ");
    scanf(" %f", &num2);
*/

    // OPERAÇÃO EM UMA SÓ LINHA
    printf(" Entre com o calculo: ");
    scanf(" %f%c%f", &num1,&op,&num2);

    switch(op){
        case '+':
            result = num1 + num2;
            printf(" Resposta da soma de %.2f + %.2f = %.2f", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf(" Resposta da subtracao de %.2f + %.2f = %.2f", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf(" Resposrta da multiplicacao de %.2f + %.2f = %.2f", num1, num2, result);
            break;
        case '/':
            result = num1 / num2;
            printf(" Resposta da divisao de %.2f + %.2f = %.2f", num1, num2, result);
            break;
        default:
            printf("Comando errado, comece novamente!!");
    }
    return 0;

    /*
    TESTE COM OP = NUMERO

    switch(op){
        case 1:
            result = num1 + num2;
            printf(" Resposta da soma de %.2f + %.2f = %.2f", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf(" Resposta da subtracao de %.2f + %.2f = %.2f", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf(" Resposrta da multiplicacao de %.2f + %.2f = %.2f", num1, num2, result);
            break;
        case 4:
            result = num1 / num2;
            printf(" Resposta da divisao de %.2f + %.2f = %.2f", num1, num2, result);
            break;
        default:
            printf("Comando errado, comece novamente!!");
    }
    */

}
