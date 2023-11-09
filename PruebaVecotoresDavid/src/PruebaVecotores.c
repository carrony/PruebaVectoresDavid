/*
 ============================================================================
 Name        : PruebaVecotores.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "vectores.h"
#define MAX 30

int main(void) {
	int numeros[MAX];
	int num;

	int busca, posicion;

	do{
		printf("¿Cuantos elementos quieres (1-30): ?");
		fflush(stdout);
		scanf("%d",&num);
	}while(num<=0 || num>MAX);

	printf("Introduce los datos: ");
	pedirVector(num, numeros);


	printf("\nLos datos introducidos son: ");
	mostrarVector(num, numeros);

	printf("\nLos datos introducidos en forma de array son: ");
	mostrarVectorCorchete(num,numeros);

	printf("\nIntroduce un número a buscar: ");
	fflush(stdout);
	scanf("%d", &busca);

	posicion= posicionPrimerElemento(num,numeros,busca);
	if (posicion ==-1) {
		printf("Elemento %d NO encontrado",busca);
	} else {
		printf("Elemento %d encontrado en la casilla %d", busca, posicion);
	}



	return EXIT_SUCCESS;
}
