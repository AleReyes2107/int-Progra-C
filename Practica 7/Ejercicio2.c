/**
 * @file Ejercicio2.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief 
 * @version 0.1
 * @date 2023-05-20
 * 
 * @copyright GPL v3
 * 
 */

#include <stdio.h>

// Definición de la función suma. Recibe dos punteros a enteros.
void suma(int *num1, int *num2, int *resultado) {
    *resultado = *num1 + *num2;  // Suma los valores apuntados por num1 y num2 y guarda el resultado en la variable apuntada por resultado.
}

int main() {
    int a, b, res;  // Declara las variables a, b, y res.

    printf("Ingrese el primer numero: ");
    scanf("%d", &a);  // Lee el primer número del usuario.

    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);  // Lee el segundo número del usuario.

    suma(&a, &b, &res);  // Llama a la función suma con las direcciones de a, b, y res.

    printf("La suma de %d y %d es %d\n", a, b, res);  // Imprime el resultado.

    return 0;  // Termina la ejecución del programa.
}



