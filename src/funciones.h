/*
 * funciones.h
 *
 *  Created on: 16 abr. 2022
 *      Author: Nacho
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

void menu();

float km(void);

float precioAero(void);

float precioLatam(void);

float debito(float precioIngresado);

float credito(float precioIngresado);

float conversor(float precioIngresado);

float precioxkm(float precioIngresado, float kmIngresado);

float resta(float y, float z);

float resultados(float debitoY, float creditoY, float btcY, float pxkmY, float debitoZ, float creditoZ, float btcZ, float pxkmZ, float diferencia);

#endif /* FUNCIONES_H_ */
