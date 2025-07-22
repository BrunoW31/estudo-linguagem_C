#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[80];
    
    printf("Digite uma string: ");
    scanf("%80[^\n]s", str);
    
    printf("voce digitou: %s\n", str);




    return 0;
}