#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int soma (int soma1, int soma2);
int subtracao (int sub1, int sub2);
int multiplicacao (int mult1, int mult2);
int divisao (int div1, int div2);
int restdiv (int restdiv1, int restdiv2);
int fatorial (int numfat);
int potencia (int base, int expoente);
int porcent (int porc1, int porc2);

int main(){										/* Área destinada ao Menu da calculadora */
	int opcoes, num1, num2, numfato, bas, expo, resultado; 
	setlocale(LC_ALL, "");
	
	printf ("\t\t\t\tSeja bem vindo a calculadora do Marcos!\n\n");
	printf ("\tA definição de insanidade é fazer a mesma coisa repetidamente e esperar resultados diferentes. \n\t\t\t\t\t- Albert Einstein\n");
	
	printf ("\n1 - Adição (+)\n");
	printf ("2 - Subtração (-)\n");
	printf ("3 - Multiplicação (*)\n");
	printf ("4 - Divisão (/)\n");
	printf ("5 - Resto da divisão (%%)\n");
	printf ("6 - Fatoral (!)\n");
	printf ("7 - Potenciação (^)\n");
	printf ("8 - Porcentagem (%%)");
	printf ("\nEscolha a operação a ser realizada:\n");
	scanf  ("%d", &opcoes);
	
	switch (opcoes){								/* Onde a mágica acontece */
		case 1: 
			printf ("A operação escolhida foi ADIÇÃO!\n");
			printf ("Insira o primeiro número:\n");
			scanf ("%d", &num1);
			printf ("Insira o segundo número:\n");
			scanf ("%d", &num2);
			resultado = soma (num1, num2);
			printf ("O resultado da operação é: %d\n", resultado);
			break;
 
		case 2:
			printf ("A operação escolhida foi SUBTRAÇÃO!\n");
			printf ("Insira o primeiro número:\n");
			scanf ("%d", &num1);
			printf ("Insira o segundo número:\n");
			scanf ("%d", &num2);
			resultado = subtracao (num1, num2);
			printf ("O resultado da operação é: %d\n", resultado);
			break;
 
		case 3:
			printf ("A operacao escolhida foi MULTIPLICAÇÃO!\n");
			printf ("Insira o primeiro número:\n");
			scanf ("%d", &num1);
			printf ("Insira o segundo número:\n");
			scanf ("%d", &num2);
			resultado = multiplicacao (num1, num2);
			printf ("O resultado da operação é: %d\n", resultado);
			break;
 
		case 4:
			printf ("A operação escolhida foi DIVISAO!\n");
			printf ("Insira o primeiro número:\n");
			scanf ("%d", &num1);
			printf ("Insira o segundo número:\n");
			scanf ("%d", &num2);
			resultado = divisao (num1, num2);
			printf ("O resultado da operação é: %d\n", resultado);
			break;
		
		case 5: 
			printf ("A operação escolhida foi RESTO DA DIVISÃO!\n");
			printf ("Insira o primeiro número:\n");
			scanf ("%d", &num1);
			printf ("Insira o segundo número:\n");
			scanf ("%d", &num2);
			resultado = restdiv (num1, num2);
			printf ("O resultado da operação é: %d\n", resultado);
			break;
 
		case 6:
			printf ("A operação escolhida foi FATORIAL!\n");
			printf ("Insira o número a ter sua fatorial calculada:\n");
			scanf("%d", &numfato);
			resultado = fatorial (numfato);
			printf ("O resultado da operação é: %d\n", resultado);
			break;
 
		case 7:
			printf ("A operacao escolhida foi POTENCIAÇÃO!\n");
			printf ("Insira a base:\n");
			scanf ("%d", &bas);
			printf ("Insira o expoente:\n");
			scanf ("%d", &expo);
			resultado = potencia (bas, expo);
			printf("O resultado da operação é: %d\n", resultado);
			break;
			
		case 8:
			printf ("A operação escolhida foi PORCENTAGEM!\n");
			printf ("Insira o primeiro valor:\n");
			scanf ("%d", &bas);
			printf ("Insira o segundo valor:\n");
			scanf ("%d", &expo);
			resultado = porcent (num1, num2);
			printf("O resultado da operação é: %d\n", resultado);
			break;
 
		default:
			printf ("É PRA ESCOLHER UM NUMERO ENTRE 1 E 8 CHAMPZ! :/\n");
	}
}

int soma (int soma1, int soma2) {							/* Área destinada a soma */
	int resultado;
	resultado = soma1 + soma2;
	return (resultado); 
}
int subtracao (int sub1, int sub2){							/* Área destinada a subtração */
	int resultado;
	resultado = sub1 - sub2;
	return (resultado);
}
int multiplicacao (int mult1, int mult2){						/* Área destinada a multiplicação */
	int resultado;
	resultado = mult1 * mult2;
	return (resultado);
}
int divisao (int div1, int div2){							/* Área destinada a divisão */
	int resultado;
	if (div1==0 && div2==0) {
	printf ("Não tem como dividir por zero né champz!!");
	} else {
		resultado = div1 / div2; }
		return (resultado);
}
int restdiv (int restdiv1, int restdiv2){						/* Área destinada a Resto da Divisão */
	int resultado;
	resultado = restdiv1 % restdiv2;
	return (resultado);
}
int fatorial (int numfat){								/* Área destinada a Fatorial */
	int resultado, fat;
	resultado = 1;
	for (fat=1;fat<=numfat;fat++)
	return (resultado);
}
int potencia (int base, int expoente){							/* Área destinada a Potenciação */
	int resultado;
	if (expoente == 0)
	return 1;
	else if (expoente == 1)
	return base;
	return resultado = base * potencia (base, expoente-1);
}
int porcent (int porc1, int porc2){							/* Área destinada a Porcentagem */
	int resultado;
	resultado = (porc1 * porc2) / 100;
	return (resultado);
}
