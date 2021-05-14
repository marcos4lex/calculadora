#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

float soma(float soma1, float soma2);
float subtracao(float sub1, float sub2);
float multiplicacao(float mult1, float mult2);
float divisao(float div1, float div2);
int restdiv(int restdiv1, int restdiv2);
float fatorial (float numfat);
float potencia(float base, int expoente);
float porcent (float porc1, float porc2);

int main(){									/* Área destinada ao Menu da calculadora */

	float resultado, num1, num2, numfato, bas, expo;
	int opcoes;
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
	
	switch (opcoes){							/* Onde a mágica acontece */
		case 1: 
			printf ("A operação escolhida foi ADIÇÃO!\n");
			printf ("Insira o primeiro número:\n");
			scanf ("%f", &num1);
			printf ("Insira o segundo número:\n");
			scanf ("%f", &num2);
			resultado = soma (num1, num2);
			printf ("O resultado da operação é: %0.2f\n", resultado);
			break;
 
		case 2:
			printf ("A operação escolhida foi SUBTRAÇÃO!\n");
			printf ("Insira o primeiro número:\n");
			scanf ("%f", &num1);
			printf ("Insira o segundo número:\n");
			scanf ("%f", &num2);
			resultado = subtracao (num1, num2);
			printf ("O resultado da operação é: %0.2f\n", resultado);
			break;
 
		case 3:
			printf ("A operacao escolhida foi MULTIPLICAÇÃO!\n");
			printf ("Insira o primeiro número:\n");
			scanf ("%f", &num1);
			printf ("Insira o segundo número:\n");
			scanf ("%f", &num2);
			resultado = multiplicacao (num1, num2);
			printf ("O resultado da operação é: %0.2f\n", resultado);
			break;
			
		case 4:
  			printf ("A operação escolhida foi DIVISAO!\n");
  			printf ("Insira o primeiro número:\n");
  			scanf ("%f", &num1);
  			printf ("Insira o segundo número:\n");
  			scanf ("%f", &num2);
  
  			if ( num1 == 0 || num2 == 0) {
      			printf ("Não tem como dividir por zero né champz!!");}
			else {
    			resultado = divisao (num1, num2);
    			printf ("O resultado da operação é: %0.2f\n", resultado);}
  			break;
  			
  		case 5: 
			printf ("A operação escolhida foi RESTO DA DIVISÃO!\n");
			printf ("Insira o primeiro número:\n");
			scanf ("%f", &num1);
			printf ("Insira o segundo número:\n");
			scanf ("%f", &num2);
			resultado = restdiv (num1, num2);
			printf ("O resultado da operação é: %0.2f\n", resultado);
			break;
			
		case 6:
			printf ("A operação escolhida foi FATORIAL!\n");
			printf ("Insira o número a ter sua fatorial calculada:\n");
			scanf("%f", &numfato);
			resultado = fatorial (numfato);
			printf ("O resultado da operação é: %0.2f\n", resultado);
			break;
		
		case 7:
			printf ("A operacao escolhida foi POTENCIAÇÃO!\n");
			printf ("Insira a base:\n");
			scanf ("%f", &bas);
			printf ("Insira o expoente:\n");
			scanf ("%f", &expo);
			resultado = potencia (bas, expo);
			printf("O resultado da operação é: %.2f\n", resultado);
			break;
			
		case 8:
			printf ("A operação escolhida foi PORCENTAGEM!\n");
			printf ("Insira o primeiro valor:\n");
			scanf ("%f", &num1);
			printf ("Insira o segundo valor:\n");
			scanf ("%f", &num2);
			resultado = porcent (num1, num2);
			printf("O resultado da operação é: %0.2f\n", resultado);
			break;
 
		default:
			printf ("É PRA ESCOLHER UM NUMERO ENTRE 1 E 8 CHAMPZ! :/\n");
	}
}

float soma (float soma1, float soma2) {						/* Área destinada a soma */
	float resultado;
	resultado = soma1 + soma2;
	return resultado; 
}
float subtracao (float sub1, float sub2){						/* Área destinada a subtração */
	float resultado;
	resultado = sub1 - sub2;
	return resultado;
}
float multiplicacao (float mult1, float mult2){					/* Área destinada a multiplicação */
	float resultado;
	resultado = mult1 * mult2;
	return resultado;
}
float divisao (float div1, float div2){						/* Área destinada a divisão */
	float resultado;
	resultado = div1 / div2; 
	return (resultado);
}
int restdiv (int restdiv1, int restdiv2){					/* Área destinada a Resto da Divisão */
	int resultado;
	resultado = restdiv1 % restdiv2;
	return (resultado);
}
float fatorial (float numfat){							/* Área destinada a Fatorial */
	float resultado, fat;
	resultado = 1;
	for (fat=1;fat<=numfat;fat++)
	return (resultado);
}
float potencia (float base, int expoente){						/* Área destinada a Potenciação */
	float resultado;
	if (expoente == 0)
	return 1;
	else if (expoente == 1)
	return base;
	return resultado = base * potencia (base, expoente-1);
}
float porcent (float porc1, float porc2){						/* Área destinada a Porcentagem */
	float resultado;
	resultado = (porc1 * porc2) / 100;
	return (resultado);
}
