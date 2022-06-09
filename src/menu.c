/*
 * menu.c
 *
 *  Created on: 16 abr. 2022
 *      Author: Nacho
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

void menu(){
	setbuf(stdout,NULL);
	int opcion;
	float x;
	float y = 0;
	float z = 0;
	float debitoAero;
	float creditoAero;
	float btcAero;
	float pxkmAero;
	float diferencia;
	float debitoLatam;
	float creditoLatam;
	float btcLatam;
	float pxkmLatam;

	do{
		fflush(stdin);
		printf("\n\n     MEN�    \n\n1) Ingresar kilometros.\n2) Ingresar precios de vuelos.\n3) Calculo de costos.\n4) Resultados.\n5) Carga forzada.\n\n6) Salir.\n\nOpcion ingresada:>");
		scanf("%d", &opcion);

		switch(opcion){
			case 1:
				x = km();
				while( x < 0){
					printf("Error. Ingrese valor mayor a 0.");
					x = km();
				}
				break;

			case 2:
					y = precioAero();
					while(y <= 0){
						printf("Error. Ingrese valor mayor a 0");
						y = precioAero();
					}
					z = precioLatam();
					while(z <= 0){
						printf("Error. Ingrese valor mayor a 0.");
						z = precioLatam();
					}
					break;

			case 3:
				if( x == 0 || y == 0 || z == 0){
					printf("\n\nDeben ingresarse los datos de KM y precio de vuelos.\n\n");
					menu();
				}
				else{
					fflush(stdin);
					debitoAero = debito(y);
					creditoAero = credito(y);
					btcAero = conversor(y);
					pxkmAero = precioxkm(y, x);
					debitoLatam = debito(z);
					creditoLatam = credito(z);
					btcLatam = conversor(z);
					pxkmLatam = precioxkm(z, x);
					diferencia = resta(y, z);
					printf("\n\nCalculo de costos listo!\n\n");
				}
				break;

			case 4:
				if( x == 0 || y == 0 || z == 0){
					printf("\n\nDeben ingresarse los datos de KM y precio de vuelos.\n\n");
					menu();
				}
				else{
					fflush(stdin);
					printf("*Aerolineas:\n");
					printf("a) Precio con tarjeta de debito: $%.2f\n", debitoAero);
					printf("b) Precio con tarjeta de credito: $%.2f\n", creditoAero);
					printf("c) Precio pagando con Bitcoin: $%.6f\n", btcAero);
					printf("d) Precio unitario: $%.2f\n", pxkmAero);
					printf("\n*Latam:\n");
					printf("a) Precio con tarjeta de debito: $%.2f\n", debitoLatam);
					printf("b) Precio con tarjeta de credito: $%.2f\n", creditoLatam);
					printf("c) Precio pagando con Bitcoin: $%.6f\n", btcLatam);
					printf("d) Precio unitario: $%.2f\n\nAerolineas:\n", pxkmLatam);
					printf("\n\nLa diferencia de precio es: $%.2f\n\n", diferencia);				}
				break;

			case 5:
				fflush(stdin);
				printf("\n***Carga forzada de datos***\n");
				x = 7090;
				z = 162965;
				y = 159339;

				debitoAero = debito(y);
				creditoAero = credito(y);
				btcAero = conversor(y);
				pxkmAero = precioxkm(y, x);
				debitoLatam = debito(z);
				creditoLatam = credito(z);
				btcLatam = conversor(z);
				pxkmLatam = precioxkm(z, x);
				diferencia = resta(y, z);

				printf("\n\n*Aerolineas:\n");
				printf("a) Precio con tarjeta de d�bito: %.2f\n", debitoAero);
				printf("b) Precio con tarjeta de cr�dito: %.2f\n", creditoAero);
				printf("c) Precio pagando con Bitcoin: %.6f\n", btcAero);
				printf("d) Precio unitario: %.2f\n", pxkmAero);
				printf("\n*Latam:\n");
				printf("a) Precio con tarjeta de d�bito: %.2f\n", debitoLatam);
				printf("b) Precio con tarjeta de cr�dito: %.2f\n", creditoLatam);
				printf("c) Precio pagando con Bitcoin: %.6f\n", btcLatam);
				printf("d) Precio unitario: %.2f\n", pxkmLatam);
				printf("\n\nLa diferencia de precio es: $%.2f\n\n", diferencia);

				break;
		}

	}
	while(opcion != 6);
}
