/**
 * @file ejercicio2.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief Genera un arreglo aleatorio de 20 elementos entre 10 y 100
 * @version 0.1
 * @date 2023-04-15
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
 * @param arr Arreglo sobre el cual se va a modificar sus valores
 *
 * @param tam Tamanio del arreglo
 * 
 * @param pos Posicion del arreglo 
 *
 * @return No devuelve ningun valor, solo lo modifica
 */
void aleatorio(int arr[], int tam, int pos);

/**
 * @brief Imprime los elementos de un arreglo usando recursividad
 * 
 * @param arr Arreglo a imprimir
 * 
 * @param tam Tamanio del arreglo
 * 
 * @param pos Posición en el arreglo 
 *
 * @return Cada que se ejecuta imprime los valores del arreglo
 */
void imparr(int arr[], int tam, int pos);



int main() {
    int arreglo[20];

    srand(time(NULL)); 

    aleatorio(arreglo, 20, 0);

    printf("Arreglo generado: \n");

    imparr(arreglo, 20, 0);

    printf("\n");

    return 0;
}



void aleatorio(int arr[], int tam, int pos){
    if (pos == tam) {
        return;
    }
    arr[pos] = rand() % 91 + 10; 
    aleatorio(arr, tam, pos + 1);
}

void imparr(int arr[], int tam, int pos) {
    if (pos >= tam) { 
        return;
    }
    printf("%d ", arr[pos]); 
    imparr(arr, tam, pos+1);
}