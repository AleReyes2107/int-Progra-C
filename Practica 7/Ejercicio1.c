/**
 * @file Ejercicio1.c
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
    int num1, num2, sum;  
    int *ptr1, *ptr2;  // Declaración de los punteros a las variables

    // Asigna la dirección de memoria 
    ptr1 = &num1;  
    ptr2 = &num2;  

    printf("Ingrese el primer numero: ");  
    scanf("%d", ptr1);  

    printf("Ingrese el segundo numero: ");  
    scanf("%d", ptr2);  

    sum = *ptr1 + *ptr2;  // Suma los valores de los punteros

    printf("La suma de %d y %d es %d\n", *ptr1, *ptr2, sum);  

    return 0;  
}
