/**
 * @file Ejercicio3.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief 
 * @version 0.1
 * @date 2023-05-20
 * 
 * @copyright GPL v3
 * 
 */

#include <stdio.h>

int main() {
    int n, i;
    int *ptr;  // Declara un puntero a un entero.

    printf("Ingrese la cantidad de numeros que desea almacenar: ");
    scanf("%d", &n);  // Lee la cantidad de números que el usuario quiere ingresar.

    int arr[n];  // Declara un arreglo de tamaño n.

    // Solicita al usuario que introduzca n números.
    for (i = 0; i < n; i++) {
        printf("Ingrese el numero %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    ptr = arr;  // Asigna la dirección del primer elemento del arreglo al puntero.

    printf("Los numeros que ingresaste son: ");
    // Imprime los números ingresados utilizando el puntero.
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr+i));  // Accede al valor apuntado por el puntero más el desplazamiento.
    }
    printf("\n");

    return 0;
}
