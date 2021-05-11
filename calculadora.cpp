#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int num1, num2, soma, sub, mult, divi, resto;
    setlocale(LC_ALL,"");
	
	
    printf("\t\tCalculadora 0.6\n\n");
    printf("Entre com o primeiro número a ser processado: ");
    scanf("%d", &num1);	
    printf("Entre com o segundo número a ser processado: ");
    scanf("%d", &num2);

    soma    = num1 + num2;
    sub     = num1 - num2;
    mult    = num1 * num2;
    divi    = num1 / num2;
    resto   = num1 % num2;

    printf("A soma é: %d\n", soma );
    printf("A subtracao é: %d\n", sub );
    printf("A multiplicação é: %d \n", mult );
    printf("A divisao é: %d \n", divi );
    printf("O resto da divisão é: %d \n", resto);

    return 0;
}
