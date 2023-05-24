/**
 * @file Ejercicio7.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief 
 * @version 0.1
 * @date 2023-05-24
 * 
 * @copyright GPL v3
 * 
 */

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int *ptr;

    printf("Ingrese la cantidad de numeros que desea sumar: ");
    scanf("%d", &n);

    int arr[n];

    
    for (i = 0; i < n; i++) {
        printf("Ingrese el numero %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    ptr = arr;  

    
    for (i = 0; i < n; i++) {
        sum += *(ptr+i);
    }

    printf("La suma de los numeros ingresados es: %d\n", sum);

    return 0;
}
