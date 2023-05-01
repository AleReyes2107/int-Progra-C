/**
 * @file ejercicio3.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief Genera un arreglo de 20 elementos entre 50 y 500 para luego ordenarlo de mayor a menor
 * @version 0.1
 * @date 2023-04-18
 * 
 * @copyright GPL v3
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * @brief Llena con valores aleatorios un arreglo usando recursividad
 * 
 * @param arr El arreglo a llenar
 * 
 * @param tam El tamaño del arreglo
 * 
 * @param pos La posición actual en la que se está llenando el arreglo
 */
void aleatorio(int arr[], int tam, int pos);

/**
 * @brief Metodo de la burbuja para ordenar el arreglo
 * 
 * @param arr El arreglo a ordenar
 * 
 * @param tam El tamaño del arreglo
 */
void burbuja(int arr[], int tam);

/**
 * @brief Imprime los valores de un arreglo usando recursividad
 * 
 * @param arr Arreglo a imprimir
 * 
 * @param tam Tamanio del arreglo 
 */
void imparr(int arr[], int tam);

int main() {
    int arreglo[20];

    srand(time(NULL)); 

    aleatorio(arreglo, 20, 0);

    printf("Arreglo generado: \n");

    imparr(arreglo, 20);

    burbuja(arreglo, 20);

    int max = arreglo[0], min = arreglo[19];

    printf("\nEl valor maximo es: %d\n", max);

    printf("El valor minimo es: %d\n", min);
    
    return 0;
}


void aleatorio(int arr[], int tam, int pos){
    if (pos == tam) {
        return;
    }
    arr[pos] = rand() % 451 + 50; 
    aleatorio(arr, tam, pos + 1);
}



void burbuja(int arr[], int tam) {
    int i, j, temp;
    for (i = 0; i < tam - 1; i++) {
        for (j = 0; j < tam - i - 1; j++) {
            if (arr[j] < arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}



void imparr(int arr[], int tam) {
    if (tam == 0) {
        printf("\n");
        return;
    }
    printf("%d ", arr[0]);
    imparr(arr+1, tam-1);
}

