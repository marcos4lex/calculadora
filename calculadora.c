#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "functions.h"

float resultado = 0, num1, num2, bas, expo;
int numfato;
int opcoes;
char fazerNovamente;

// Menu da calculadora
int main(){		
	setlocale(LC_ALL, "");
	
	do {
		system("clear");
		barra();
		printf ("Seja bem vindo a calculadora do Marcos!");
		barra();
		
		printf ("\n1 - Adição (+)\n");
		printf ("2 - Subtração (-)\n");
		printf ("3 - Multiplicação (*)\n");
		printf ("4 - Divisão (/)\n");
		printf ("5 - Resto da divisão (%%)\n");
		printf ("6 - Fatorial (!)\n");
		printf ("7 - Potenciação (^)\n");
		printf ("8 - Porcentagem (%%)\n");
		printf ("9 - TABUADA DE 1 A 10");
		printf ("\nEscolha a operação a ser realizada: ");
		scanf  ("%d", &opcoes);
		barra();
	
		switch (opcoes){							
			case 1: 
				printf ("\nA operação escolhida foi ADIÇÃO!\n\n");
				printf ("Insira o primeiro número: ");
				scanf ("%f", &num1);
				printf ("Insira o segundo número: ");
				scanf ("%f", &num2);
				resultado = soma (num1, num2);
				printf ("O resultado da soma é: %0.2f. <--\n", resultado);
				break;
 
			case 2:
				printf ("\nA operação escolhida foi SUBTRAÇÃO!\n\n");
				printf ("Insira o primeiro número: ");
				scanf ("%f", &num1);
				printf ("Insira o segundo número: ");
				scanf ("%f", &num2);
				resultado = subtracao (num1, num2);
				printf ("O resultado da subtração é: %0.2f. <--\n", resultado);
				break;
 
			case 3:
				printf ("\nA operacao escolhida foi MULTIPLICAÇÃO!\n\n");
				printf ("Insira o primeiro número: ");
				scanf ("%f", &num1);
				printf ("Insira o segundo número: ");
				scanf ("%f", &num2);
				resultado = multiplicacao (num1, num2);
				printf ("O resultado da multiplicação é: %0.2f. <--\n", resultado);
				break;
			
			case 4:
  				printf ("\nA operação escolhida foi DIVISAO!\n\n");
  				printf ("Insira o primeiro número: ");
  				scanf ("%f", &num1);
  				printf ("Insira o segundo número: ");
  				scanf ("%f", &num2);
	
  				if ( num1 == 0 || num2 == 0) {
   	   				printf ("Não tem como dividir por zero né champz!!");}
				else {
    				resultado = divisao (num1, num2);
    				printf ("O resultado da divisão é: %0.2f. <--\n", resultado);}
  				break;
  			
  			case 5: 
				printf ("\nA operação escolhida foi RESTO DA DIVISÃO!\n\n");
				printf ("Insira o primeiro número: ");
				scanf ("%f", &num1);
				printf ("Insira o segundo número: ");
				scanf ("%f", &num2);
				resultado = restdiv (num1, num2);
				printf ("O resto da divisão é: %0.2f. <--\n", resultado);
				break;

			case 6:
				printf ("\nA operação escolhida foi FATORIAL!\n\n");
				printf ("Insira o número a ter sua fatorial calculada: ");
				scanf("%d", &numfato);
				resultado = fatorial (numfato);
				printf ("O valor do fatorial de %d é %0.0f. <--\n", numfato, resultado);
				break;
		
			case 7:
				printf ("\nA operacao escolhida foi POTENCIAÇÃO!\n\n");
				printf ("Insira a base: ");
				scanf ("%f", &bas);
				printf ("Insira o expoente: ");
				scanf ("%f", &expo);
				resultado = potencia (bas, expo);
				printf("O resultado da operação é: %.2f. <--\n", resultado);
				break;
			
			case 8:
				printf ("\nA operação escolhida foi PORCENTAGEM!\n\n");
				printf ("Primeiro insira o valor: ");
				scanf ("%f", &num1);
				printf ("Agora a porcentagem: ");
				scanf ("%f", &num2);
				resultado = porcent (num1, num2);
				printf("%0.0f%% de %0.0f é: %0.0f. <--\n", num2, num1, resultado);
				break;
			
			case 9:
				tabuada();
			default:
				printf ("\n\t\t\tÉ PRA ESCOLHER UM NUMERO ENTRE 1 E 9 CHAMPZ! '-'\n");
			}
		barra();
    	printf("\nDeseja calcular novamente? Digite s ou n\n");
    	scanf("%s", &fazerNovamente);
    	fflush(stdin);
    	system("clear");
	}	while (fazerNovamente == 's' || fazerNovamente == 'S');
	return(0);
}