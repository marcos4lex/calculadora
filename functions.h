int um, dois, tres, quatro, cinco, seis, sete, oito, nove, dez;
float resultado = 0;

void tabuada(){
    barra();
	printf("A opção escolhida foi TABUADA!");
	barra();
 	for (um = 1; um <= 10; um++) {
		printf("\n 1 x %d = %d", um, 1 * um);
        pulaL();
    } 
 		
 	for (dois = 1; dois <= 10; dois++) {
 		printf("\n 2 x %d = %d", dois, 2 * dois); 
        pulaL();
    } 	

 	for (tres = 1; tres <= 10; tres++) {
 	    printf("\n 3 x %d = %d", tres, 3 * tres); 
        pulaL();
    }

 	for (quatro = 1; quatro <= 10; quatro++) {
 		printf("\n 4 x %d = %d", quatro, 4 * quatro); 
        pulaL();
    }

 	for (cinco = 1; cinco <= 10; cinco++) {
 		printf("\n 5 x %d = %d", cinco, 5 * cinco);	
        pulaL(); 
    } 	
		
 	for (seis = 1; seis <= 10; seis++) {
 		printf("\n 6 x %d = %d", seis, 6 * seis); 
        pulaL();
    }
 		
 	for (sete = 1; sete <= 10; sete++) {
 		printf("\n 7 x %d = %d", sete, 7 * sete); 
        pulaL();
    }

 	for (oito = 1; oito <= 10; oito++) {
 		printf("\n 8 x %d = %d", oito, 8 * oito);
        pulaL();
    }

 	for (nove = 1; nove <= 10; nove++) {
 		printf("\n 9 x %d = %d", nove, 9 * nove);
        pulaL();
    }
 		
 	for (dez = 1; dez <= 10; dez++) {
 	    printf("\n 10 x %d = %d", dez, 10 * dez); 
        pulaL();
    }			
}

// Área onde é feito os cálculos
float soma (float soma1, float soma2) {
	resultado = soma1 + soma2;
	return resultado; 
}

float subtracao (float sub1, float sub2){
	resultado = sub1 - sub2;
	return resultado;
}

float multiplicacao (float mult1, float mult2){
	resultado = mult1 * mult2;
	return resultado;
}

float divisao (float div1, float div2){
	resultado = div1 / div2; 
	return (resultado);
}

int restdiv (int restdiv1, int restdiv2){
	int resultado;
	resultado = restdiv1 % restdiv2;
	return (resultado);
}

int fatorial (int numfat){
	int fat = 1;
	int cont;
	for (cont=numfat; cont>1; cont--){
		fat = fat * cont;
		resultado = fat;
	}
	
}

float potencia (float base, int expoente){
	if (expoente == 0)
	return 1;
	else if (expoente == 1)
	return base;
	return resultado = base * potencia (base, expoente-1);
}

float porcent (float porc1, float porc2){
	resultado = (porc1 * porc2) / 100;
	return (resultado);
}

// Pequenas funções auxiliares
void barra(){
	printf("\n_______________________________________\n\n");
}
void pulaL(){
	printf("\n");
}