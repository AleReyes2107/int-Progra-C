/**
 * @file funciones.h
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief Libreria de funciones
 * @version 0.1
 * @date 2023-04-18
 * 
 * @copyright GPL v3
 * 
 */
#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Burbuja

/**
 * @brief Llena un arreglo con valores aleatorios
 * 
 * @param arr El arreglo a llenar
 * @param n Cantidad de elementos del arreglo
 */
void aleatorios(int arr[], int n);

/**
 * @brief Imprime el arreglo
 * 
 * @param arr El arreglo a imprimir
 * @param n Tamanio del arreglo
 */
void imprimir(int arr[], int n);

/**
 * @brief Algoritmo de burbuja que ordena en forma de mayor a menor
 * 
 * @param arr El arreglo a ordenar
 * @param n Tamanio del arreglo
 */
void burbuja(int arr[], int n);

//Ecuaciones
/**
 * @brief Calcula la determinante de la matriz A con Regla de Sarrus
 * 
 * @param A Matriz A
 * @return Regresa el valor del determinante
 */
float determinante(float A[][3]);

/**
 * @brief Crea la transpuesta de la matriz A
 * 
 * @param A Matriz A
 * @param MTRS Arreglo donde se guarda la matriz transpuesta
 */
void transpuesta(float A[][3], float MTRS[][3]);

/**
 * @brief Calcula la Matriz adjunta
 * 
 * @param A Matriz A
 * @param MADJ Arreglo donde se guarda la matriz adjunta
 */
void adjunta(float A[][3], float MADJ[][3]);

/**
 * @brief Calcula la inversa
 * 
 * @param A Matriz A
 * @param MINV Arreglo donde se guarda la matriz inversa
 */
void inversa(float A[][3], float MINV[][3]);

/**
 * @brief Multiplicar la matriz inversa por los resultados de la eciacion para los valores de x
 * 
 * @param MINV Matriz inversa
 * @param B Matriz B o de resultados
 * @param MRES Arreglo donde se guardan los resultados 
 */
void resultado(float MINV[][3], float B[][1], float MRES[][1]);

//Matrices

/**
 * @brief Suma la matriz A y B
 * 
 * @param A Matriz A
 * @param B Matriz B
 * @param MSUM Arreglo donde se guardan los valores de la suma
 */
void suma(int A[][3], int B[][3], int MSUM[][3]);

/**
 * @brief Resta de la matriz A y B
 * 
 * @param A Matriz A
 * @param B Matriz B
 * @param MRES Arreglo donde se guardan los valores de la resta
 */
void resta(int A[][3], int B[][3], int MRES[][3]);

/**
 * @brief 
 * 
 * @param A Matriz A
 * @param B Matriz B
 * @param MMLT Arreglo donde se guardan los valores de la multiplicacion
 */
void multiplicacion(int A[][3], int B[][3], int MMLT[][3]);

/**
 * @brief Imprime las matrices
 * 
 * @param matriz Matriz a imprimir
 * @param tamano Tamanio de la matriz
 */
void imprarr(int matriz[][3], int tamano);

#endif // FUNCIONES_H