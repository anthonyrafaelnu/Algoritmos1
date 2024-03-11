#pragma once

#include <iostream>
using namespace std;


/*
	Ejercicios:

		Ejercicio 1:
		Implementar la funci�n "crearVectorDeEnteros".
		Se debe crear en main un vector din�mico para que entren 10 elementos llamando a
		la funci�n "crearVectorDeEnteros".

		Ejercicio 2:
		Implementar la funci�n imprimirVectorDeEnteros para imprimir todos los elementos
		de un vector de enteros por consola.

		Ejercicio 3:
		Implementar la funci�n "imprimirPalabra".
		Crear en main un string "Hola mundo" e imprimirlo por consola utilizando la
		funci�n "imprimirPalabra".

		Ejercicio 4:
		Determinar qu� hace "misterio1".

		Ejercicio 5:
		Determinar qu� hace "misterio2".
*/

/*
	PRE: -
	POS: Se debe devolver un vector de largo n, y el valor de cada posici�n corresponda
		 a la posici�n del vector.

		 Ejemplo:
		 Entrada = 4
		 Salida = 0123
*/
int* crearVectorDeEnteros(unsigned int n);

/*
	PRE: -
	POS: Imprime todos los elementos del vector de enteros
*/
void imprimirVectorDeEnteros(int* vector, int largo);

/*
	PRE: -
	POS: Se debe imprimir en consola la palabra recibida, haciendo un 
		 salto de l�nea al final
*/
void imprimirPalabra(char* palabra);

/*
	PRE: -
	POS: ??
*/
void misterio1(char* p, char* t);

/*
	PRE: -
	POS: ??
*/
int misterio2(char* p);