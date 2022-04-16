/*
 * funciones.c
 *
 *  Created on: 16 abr. 2022
 *      Author: Nacho
 */


#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float km (float km){
	float x;
	printf("\nIngreso de Kilometros\n\nIngrese cantidad de Kilometros:> ");
	scanf("%.2f", &x);

	return x;
}

float precioAero(float price){
	float precio;

	printf("\n\nIngrese precio de vuelo Aerolineas: ");
	scanf("%.2f", &precio);

	return precio;
}

float precioLatam(float price){

	float precio;

	printf("\nIngrese precio de vuelo Latam: ");
	fflush(stdin);
	scanf("%.2f", &precio);

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

	resta = y - z;

	return resta;
}

float resultados(float debitoY, float creditoY, float btcY, float pxkmY, float debitoZ, float creditoZ, float btcZ, float pxkmZ, float diferencia){

	printf("\n     Resultados     \nLatam:\na) Precio con tarjeta de débito: %.2f\nb) Precio con tarjeta de crédito: %.2f\nc) Precio pagando con Bitcoin: %.2f\nd) Precio unitario: %.2f\n\nAerolineas:\na) Precio con tarjeta de débito: %.2f\nb) Precio con tarjeta de crédito: %.2f\nc) Precio pagando con Bitcoin: %.2f\nd) Precio unitario: %.2f\n\nLa diferencia de precio es: $%.2f", &debitoY, &creditoY, &btcY, &pxkmY, &debitoZ, &creditoZ, &btcZ, &pxkmZ, &diferencia);

	return 0;
}
