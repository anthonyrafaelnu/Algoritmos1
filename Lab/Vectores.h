#pragma once

#include <iostream>
using namespace std;


/*
	Ejercicios:

		Ejercicio 1:
		Implementar la función "crearVectorDeEnteros".
		Se debe crear en main un vector dinámico para que entren 10 elementos llamando a
		la función "crearVectorDeEnteros".

		Ejercicio 2:
		Implementar la función imprimirVectorDeEnteros para imprimir todos los elementos
		de un vector de enteros por consola.

		Ejercicio 3:
		Implementar la función "imprimirPalabra".
		Crear en main un string "Hola mundo" e imprimirlo por consola utilizando la
		función "imprimirPalabra".

		Ejercicio 4:
		Determinar qué hace "misterio1".

		Ejercicio 5:
		Determinar qué hace "misterio2".
*/

/*
	PRE: -
	POS: Se debe devolver un vector de largo n, y el valor de cada posición corresponda
		 a la posición del vector.

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
		 salto de línea al final
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