#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, soma, sub, mult, divi;

    printf("Calculadora 0.5\n");
    printf("Entre os 2 numeros a serem processados: ");
    scanf("%i%i", &num1, &num2);

    soma       = num1 + num2;
    sub        = num1 - num2;
    mult       = num1 * num2;
    divi       = num1 / num2;

    printf( "A soma e: %i\n", soma );
    printf( "A subtracao e: %i\n", sub );
    printf( "A multiplicacao e: %i \n", mult );
    printf( "A divisao e: %i \n", divi );

    return 0;
}
