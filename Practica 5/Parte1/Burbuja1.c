/**
 * @file Burbuja1.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief Crea un arreglo con elementos aleatorio y lo ordena en orden descendente con el metodo de la burbuja
 * @version 0.1
 * @date 2023-04-18
 * 
 * @copyright GPL v3
 * 
 */
#include <stdio.h>
#include "funciones.h"

int main()
{
    int n = 0, i = 0;
    printf("**** Numeros aleatorios ***");
    printf("\nCantidad de valores: ");
    scanf("%i", &n);
    int arr[n];
    aleatorios(arr, n);
    printf("\nArreglo con numeros aleatorios: ");
    imprimir(arr, n);

    burbuja(arr, n);
    printf("\nArreglo ordenado de mayor a menor: ");
    imprimir(arr, n);
    return 0;
}

