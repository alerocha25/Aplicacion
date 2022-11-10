//Programa que me pueda determinar el analísis de un circuito CD de 3 resistencias, ya sea en serie o paralelo esto elegido por el usuario.
#include <stdlib.h>
#include <stdio.h>
int main(){
	int opcion;
	int R1, R2, R3, R4;
	int R10, R20, R30, R40;
	int tipo_circuito;
	float voltaje;
	
printf ( " ****************************************************\n " );
printf ( " APLICACION PARA CALCULAR CIRCUITOS SERIES O PARALELO\n " );
printf ( " ****************************************************\n " );

	
	
	do {
		printf("Analizador de Circuitos Virtual\n");
		printf("Menu de opciones\n");
		printf("1. Ingresar los valores de las resistencias\n");
		printf("2. Ingresal el valor de la tensión\n");
		printf("3. Llevar a cabo el analisis\n");
		printf("4. SALIR\n");
		printf("Elija la opcion deseada: \n");
		scanf("%d", &opcion);
		switch(opcion) {
			case 1:
				printf("Seleccione el tipo de circuito\n 1)Resistencias en paralelo\n 2)Resistencias en serie\n");
				scanf("%d", &tipo_circuito);
			switch(tipo_circuito) {
				case 2:
					tipo_circuito=tipo_circuito;
					printf("Digite el valor de R1 (Ohms): ");
					scanf("%d", &R1);
					printf("Digite el valor de R2 (Ohms): ");
					scanf("%d", &R2);
					printf("Digite el valor de R3 (Ohms): ");
					scanf("%d", &R3);
					printf("Digite el valor de R4 (Ohms): ");
					scanf("%d", &R4);
					break;
				case 1:
					tipo_circuito=tipo_circuito;
					printf("Digite el valor de R10 (Ohms): ");
					scanf("%d", &R10);
					printf("Digite el valor de R20 (Ohms): ");
					scanf("%d", &R20);
					printf("Digite el valor de R30 (Ohms): ");
					scanf("%d", &R30);
					printf("Digite el valor de R40 (Ohms): ");
					scanf("%d", &R40);
					break;
				defaul:
					printf("Opcion invalida");
				}
				break;
			case 2:
				printf("Digite el valor de la fuente de voltaje (Volts): ");
				scanf("%f", &voltaje);
				break;
			case 3:
				int RT_serie;
				float RT_paraleloA;
				float RT_paraleloB;
				float I_serie, I_paralelo;
				float P_serie, P_paralelo;
				RT_serie=R1+R2+R3+R4;
				if(tipo_circuito==2){
				//Usamos Circuito en Serie
				printf("************************************************\n");
				printf("La resistencia total en serie (Ohms): %d\n", RT_serie);
				printf("La fuente de voltaje (Volts): %5.2f\n", voltaje);
				I_serie=voltaje/RT_serie;
				printf("La corriente total en serie (Ampers): %5.2f\n", I_serie);
				P_serie=(voltaje)*(I_serie);
				printf("La potencia total en serie (Watts): %5.2f\n", P_serie);
				printf("************************************************\n");
				}else{
				//USamos Circuito en Paralelo
				RT_paraleloA=(1/R10)+(1/R20)+(1/R30)+(1/R40);
				RT_paraleloB=1/RT_paraleloA;
				printf("************************************************\n");
				printf("La resistencia total en paralelo (Ohms): %5.2f\n", RT_paraleloB);
				printf("La fuente de voltaje en paralelo (Volts): %5.2f\n", voltaje);
				I_paralelo=voltaje/RT_paraleloB;
				printf("La corriente toal en paralelo (Ampers): %5.2f\n", I_paralelo);
				P_paralelo=(voltaje)*(I_paralelo);
				printf("La potencia total en paralelo (Watts): %5.2f\n", P_paralelo);
				printf("************************************************\n");
				}
				break;
			case 4:
				break;
				default:
					printf("Opcion invalida");
			}	
		}
		while(opcion!=4);
		system("pause");
		return 0;
	} 

