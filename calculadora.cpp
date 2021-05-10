#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, soma, sub, mult, divi;

    printf("\t\tCalculadora 0.6\n\n");
    printf("Entre com o primeiro numero a ser processado: ");
    scanf("%d", &num1);	
    printf("Entre com o segundo numero a ser processado: ");
    scanf("%d", &num2);

    soma       = num1 + num2;
    sub        = num1 - num2;
    mult       = num1 * num2;
    divi       = num1 / num2;

    printf( "A soma e: %d\n", soma );
    printf( "A subtracao e: %d\n", sub );
    printf( "A multiplicacao e: %d \n", mult );
    printf( "A divisao e: %d \n", divi );

    return 0;
}
