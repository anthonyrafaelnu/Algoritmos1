#pragma once

#include <iostream>
using namespace std;

/*
	Ejercicios:

		Ejercicio 1:
		Implementar la funci�n "imprimirMarizDeBooleanos".
		Se debe imprimir por consola todos los elementos de la matriz de booleanos.

		Ejercicio 2:
		Implementar la funci�n "imprimirMatrizDeChars".
		Se debe imprimir por consola todos los elementos de la matriz de chars.

		Ejercicio 3:
		Implementar la funci�n "esDiagonalPrincipal".
		dada una matriz de booleanos, retorne true si y solo si la diagonal 
		principal tiene valores verdaderos y el resto de la matriz valores falsos.

		Ejercicio 4:
		Implementar la funci�n esCuadradoMagico para que determine si una matriz 
		cuadrada es un cuadrado m�gico.
		Nota: Es un cuadrado m�gico si la suma de cada fila, de cada columna y de cada
		diagonal es la misma.
		
*/

/*
	PRE: -
	POS: Imprime todos los elementos de la matriz de booleanos
*/
void imprimirMatrizDeBooleanos(bool** matriz, int filas, int columnas);

/*
	PRE: -
	POS: Imprime todos los elementos de la matriz de chars
*/
void imprimirMatrizDeChars(char** matriz, int filas, int columnas);

/*
	PRE: -
	POS: Retorna true si y solo si la diagonal principal tiene valores 
		 verdaderos y el resto de la matriz valores falsos.
*/
bool esDiagonalPrincipal(bool** matriz, int filas, int columnas);

/*
	PRE: -
	POS: Retorna true si y solo si la matriz es un cuadrado m�gico.

	Ejemplo:

		1 2 3
		4 5 6
		7 8 9
		No es un cuadrado m�gico.

		8 1 6
		3 5 7
		4 9 2
		Es un cuadrado m�gico.
*/
bool esCuadradoMagico(int** matriz, int filas, int columnas);

int mainMatrices();