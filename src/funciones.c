/*
 * funciones.c
 *
 *  Created on: 16 abr. 2022
 *      Author: Nacho
 */


#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float km (void){
	float x;
	printf("\nIngreso de Kilometros\n\nIngrese cantidad de Kilometros:> ");
	scanf("%f", &x);

	return x;
}

float precioAero(void){
	float precio;

	printf("\n\nIngrese precio de vuelo Aerolineas: ");
	scanf("%f", &precio);

	return precio;
}

float precioLatam(void){

	float precio;

	printf("\nIngrese precio de vuelo Latam: ");
	fflush(stdin);
	scanf("%f", &precio);

	return precio;
}

float debito(float precioIngresado){
	float descuento;
	float precioDebito;

	descuento = 0.90;
	precioDebito = precioIngresado * descuento;

	return precioDebito;
}

float credito(float precioIngresado){
	float interes;
	float precioCredito;

	interes = 1.25;
	precioCredito = precioIngresado * interes;

	return precioCredito;
}

float conversor(float precioIngresado){
	float btc = 4606954.55;
	float conversor;

	conversor = precioIngresado / btc;

	return conversor;
}

float precioxkm(float precioIngresado, float kmIngresado){
	float pxkm;

	pxkm = precioIngresado / kmIngresado;

	return pxkm;
}

float resta(float y, float z){
	int resta;

	if( y > z){
		resta = y - z;
	}
	else{
		resta = z - y;
	}


	return resta;
}
