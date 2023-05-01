/**
 * @file burbuja.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief Crea un arreglo con elementos aleatorio y lo ordena en orden descendente con el metodo de la burbuja
 * @version 0.1
 * @date 2023-03-07
 * 
 * @copyright GPL v3
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void burbuja(int arr[], int n);

int main()
{
    int n = 0, i = 0;
    printf("**** Numeros aleatorios ***");
    printf("\nCantidad de valores: ");
    scanf("%i", &n);
    int arr[n];
    srand(time(NULL));

    for (i=0; i < n; i++)
    {
        arr[i] = rand() % 251 + 50;
    }

    printf("\nArreglocon numeros aleatorios: [");
    for (i=0; i<n; i++)
    {
        printf(" %i ", arr[i]);
    }
    printf("]");

    burbuja(arr, n);
    printf("\nArreglo ordenado de mayor a menor: [");
    for (i=0; i<n; i++)
    {
        printf(" %i ", arr[i]);
    }
    printf("]");
    return 0;
}

/**
 * @brief Aplica el algoritmo de la burbuja en un arreglo de tamanio n
 * 
 * @param arr Arreglo  
 * @param n entradas del arreglo
 */
void burbuja(int arr[], int n)
{
    int i = 0, j = 0, cont = 0;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] < arr[j+1])
            {
                cont = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = cont;
            }
        }   
    }
}