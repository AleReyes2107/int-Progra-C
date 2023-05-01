/**
 * @file ejercicio6.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief Crea un arreglo de 10000 elementos entre 1 y 100000 y lo ordena de mayor a menor usando el algoritmo de la burbuja
 * @version 0.1
 * @date 2023-04-18
 * 
 * @copyright GPL v3
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10000


/**
 * @brief Llena el arreglo con valores aleatorio usando recursividad
 * 
 * @param arr El arreglo que se va a modificar
 * 
 * @param tam tamanio del arreglo
 * 
 * @param pos Posicion en el arreglo
 */
void aleatorio(int arr[], int tam, int pos);

/**
 * @brief Imprime un arreglo
 * 
 * @param arr Arreglo a imprimir
 * 
 * @param tam Tamanio del arreglo
 */
void imparr(int arr[], int tam);

/**
 * @brief Algortirmo de la burbuja para ordenar un arreglo de forma descendente
 * 
 * @param arr Arreglo a ordenar
 * 
 * @param tam Tamanio del arreglo
 * 
 * @param pos Posicion en el arreglo
 */
void burbuja(int arr[], int tam, int pos);

int main() {
    int arreglo[TAM];

    srand(time(NULL)); 

    aleatorio(arreglo, TAM, 0);

    printf("Arreglo generado aleatoriamente: \n");

    imparr(arreglo, TAM);
    
    burbuja(arreglo, TAM, 0);

    printf("\n\n\nArreglo ordenado descendente: \n");

    imparr(arreglo, TAM);
    
    return 0;
}

void aleatorio(int arr[], int tam, int pos) {
    if (pos == tam) {
        return;
    }
    arr[pos] = rand() % 100000 + 1;
    aleatorio(arr, tam, pos + 1);
}

void imparr(int arr[], int tam) {
    int i;
    for (i = 0; i < tam; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void burbuja(int arr[], int tam, int pos) {
    if (tam == 1 || pos == tam - 1) {
        return;
    }
    int i, temp;
    for (i = 0; i < tam - pos - 1; i++) {
        if (arr[i] < arr[i+1]) {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    burbuja(arr, tam, pos + 1);
}