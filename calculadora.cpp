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
	int um, dois, tres, quatro, cinco, seis, sete, oito, nove, dez;
	int opcoes;
	setlocale(LC_ALL, "");
	
	do {
        float resultado = 0;
        
		printf ("\t\t\t\tSeja bem vindo a calculadora do Marcos!\n\n");
		printf ("\tA definição de insanidade é fazer a mesma coisa repetidamente e esperar resultados diferentes. \n\t\t\t\t\t- Albert Einstein\n");
	
		while (opcoes < 1 || opcoes > 9 ) {
		
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
		printf("\n_______________________________\n\n");
	
		switch (opcoes){							/* Onde a mágica acontece */
			case 1: 
				printf ("\nA operação escolhida foi ADIÇÃO!\n");
				printf ("Insira o primeiro número: ");
				scanf ("%f", &num1);
				printf ("Insira o segundo número: ");
				scanf ("%f", &num2);
				resultado = soma (num1, num2);
				printf ("O resultado da operação é: %0.2f\n", resultado);
				break;
 
			case 2:
				printf ("\nA operação escolhida foi SUBTRAÇÃO!\n");
				printf ("Insira o primeiro número: ");
				scanf ("%f", &num1);
				printf ("Insira o segundo número: ");
				scanf ("%f", &num2);
				resultado = subtracao (num1, num2);
				printf ("O resultado da operação é: %0.2f\n", resultado);
				break;
 
			case 3:
				printf ("\nA operacao escolhida foi MULTIPLICAÇÃO!\n");
				printf ("Insira o primeiro número: ");
				scanf ("%f", &num1);
				printf ("Insira o segundo número: ");
				scanf ("%f", &num2);
				resultado = multiplicacao (num1, num2);
				printf ("O resultado da operação é: %0.2f\n", resultado);
			break;
			
			case 4:
  				printf ("\nA operação escolhida foi DIVISAO!\n");
  				printf ("Insira o primeiro número: ");
  				scanf ("%f", &num1);
  				printf ("Insira o segundo número: ");
  				scanf ("%f", &num2);
  
  			if ( num1 == 0 || num2 == 0) {
      			printf ("Não tem como dividir por zero né champz!!");}
			else {
    			resultado = divisao (num1, num2);
    			printf ("O resultado da operação é: %0.2f\n", resultado);}
  			break;
  			
  			case 5: 
				printf ("\nA operação escolhida foi RESTO DA DIVISÃO!\n");
				printf ("Insira o primeiro número: ");
				scanf ("%f", &num1);
				printf ("Insira o segundo número: ");
				scanf ("%f", &num2);
				resultado = restdiv (num1, num2);
				printf ("O resultado da operação é: %0.2f\n", resultado);
				break;
			
			case 6:
				printf ("\nA operação escolhida foi FATORIAL!\n");
				printf ("Insira o número a ter sua fatorial calculada: ");
				scanf("%f", &numfato);
				resultado = fatorial (numfato);
				printf ("O resultado da operação é: %0.2f\n", resultado);
				break;
		
			case 7:
				printf ("\nA operacao escolhida foi POTENCIAÇÃO!\n");
				printf ("Insira a base: ");
				scanf ("%f", &bas);
				printf ("Insira o expoente: ");
				scanf ("%f", &expo);
				resultado = potencia (bas, expo);
				printf("O resultado da operação é: %.2f\n", resultado);
				break;
			
			case 8:
				printf ("\nA operação escolhida foi PORCENTAGEM!\n");
				printf ("Insira o primeiro valor: ");
				scanf ("%f", &num1);
				printf ("Insira o segundo valor: ");
				scanf ("%f", &num2);
				resultado = porcent (num1, num2);
				printf("O resultado da operação é: %0.2f\n", resultado);
			break;
			
			case 9:
				printf("\n\t\t\t\t\t A opção escolhida foi TABUADA!\n");
				
 				for (um = 1; um <= 10; um++){
 					printf("\n 1 x %d = %d", um, 1 * um);} 
 				printf("\n");	
 				for (dois = 1; dois <= 10; dois++){
 					printf("\n 2 x %d = %d", dois, 2 * dois);} 	
				printf("\n");	 			
 				for (tres = 1; tres <= 10; tres++) {
 					printf("\n 3 x %d = %d", tres, 3 * tres);}
 				printf("\n");	
 				for (quatro = 1; quatro <= 10; quatro++) {
 					printf("\n 4 x %d = %d", quatro, 4 * quatro); }
 				printf("\n");	
 				for (cinco = 1; cinco <= 10; cinco++) {
 					printf("\n 5 x %d = %d", cinco, 5 * cinco);	} 	
				printf("\n");	 				
 				for (seis = 1; seis <= 10; seis++) {
 					printf("\n 6 x %d = %d", seis, 6 * seis); }
 				printf("\n");	
 				for (sete = 1; sete <= 10; sete++) {
 					printf("\n 7 x %d = %d", sete, 7 * sete);}
 				printf("\n");	
 				for (oito = 1; oito <= 10; oito++) {
 					printf("\n 8 x %d = %d", oito, 8 * oito); }
 				printf("\n");	
 				for (nove = 1; nove <= 10; nove++) {
 					printf("\n 9 x %d = %d", nove, 9 * nove); }
 				printf("\n");	
 				for (dez = 1; dez <= 10; dez++) {
 					printf("\n 10 x %d = %d", dez, 10 * dez); }
 				break;	
 				
			default:
				printf ("\n\t\t\tÉ PRA ESCOLHER UM NUMERO ENTRE 1 E 9 CHAMPZ! '-'\n");
			}	
		}
	printf("\n_______________________________\n\n");
    	printf("\nDeseja calcular novamente? Digite s ou n\n");
    	scanf("%s", &opcoes);
    	fflush(stdin);
    	system("cls");
	} while (opcoes == 's' || opcoes == 'S');
	
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
