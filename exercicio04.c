
#include <stdio.h>

int main() {
    double fahrenheit, celsius;
    printf("Digite o valor em graus Fahrenheit: ");
    scanf("%lf", &fahrenheit);
    celsius = (fahrenheit - 32.0) * (5.0 / 9.0);
    printf("O valor em graus Celsius é: %.2f\n", celsius);
    return 0;
}
