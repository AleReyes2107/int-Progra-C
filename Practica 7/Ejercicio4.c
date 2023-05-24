/**
 * @file Ejercicio4.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief 
 * @version 0.1
 * @date 2023-05-22
 * 
 * @copyright GPL v3
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, max;
    int *ptr;

    printf("Ingrese la cantidad de numeros que desea almacenar: ");
    scanf("%d", &n);  // Lee la cantidad de números que el usuario quiere ingresar.

    ptr = (int*) malloc(n * sizeof(int));  // Asigna memoria dinámicamente para n enteros.

    // Comprueba si la memoria se ha asignado correctamente.
    if (ptr == NULL) {
        printf("Error de asignación de memoria.\n");
        return 1;  // Retorna un código de error.
    }

    // Solicita al usuario que introduzca n números.
    for (i = 0; i < n; i++) {
        printf("Ingrese el numero %d: ", i+1);
        scanf("%d", ptr+i);
    }

    max = *ptr;  // Inicializa max al primer elemento.
    // Encuentra el número máximo.
    for (i = 1; i < n; i++) {
        if (*(ptr+i) > max) {
            max = *(ptr+i);
        }
    }

    printf("El numero mas grande es: %d\n", max);  // Imprime el número máximo.

    free(ptr);  // Libera la memoria asignada.

    return 0;
}
