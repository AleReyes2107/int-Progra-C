/**
 * @file Ejercicio6.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief 
 * @version 0.1
 * @date 2023-05-24
 * 
 * @copyright GPL v3
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * @brief Función para ordenar un arreglo de enteros usando el método de burbuja
 * 
 * @param arr Un puntero al primer elemento del arreglo que se va a ordenar
 * @param n El número de elementos en el arreglo
 */
void burbuja(int *arr, int n);

int main() {
    int n;
    int *ptr;

    srand(time(0)); 

    printf("Ingrese la cantidad de numeros que desea generar: ");
    scanf("%d", &n);  

    // Asigna memoria dinámicamente para n enteros
    ptr = (int*) malloc(n * sizeof(int));

    // Comprueba si la memoria se ha asignado correctamente
    if (ptr == NULL) {
        printf("Error de asignación de memoria.\n");
        return 1;  // Retorna un código de error
    }

    
    for (int i = 0; i < n; i++) {
        *(ptr+i) = (rand() % 2001) - 1000;
    }

    burbuja(ptr, n);  

    
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr+i));
    }
    printf("\n");

    free(ptr); 

    return 0;
}

void burbuja(int *arr, int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (*(arr+j) > *(arr+j+1)) {
                // Intercambia arr[j] y arr[j+1]
                int temp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = temp;
            }
        }
    }
}