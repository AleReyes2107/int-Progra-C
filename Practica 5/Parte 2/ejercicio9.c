/**
 * @file ejercicio9.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief Crea la sucesion de Fibonaccia a partir de dos numeros dados por el usuario
 * @version 0.1
 * @date 2023-04-18
 * 
 * @copyright GPL v3
 * 
 */
#include <stdio.h>


/**
 * @brief Crea la sucesion de fibonacci e imprime termino por termino usando recursividad
 * 
 * @param a Primer termino de la sucesion
 * 
 * @param b Segundo termino de la sucesion
 * 
 * @param termino Cantidad de terminos que tendra la sucesion
 */
int fibonacci(int a, int b, int termino);

int main() {
    int num1, num2, termino;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    printf("Ingrese el termino hasta donde quiere generar la serie: ");
    scanf("%d", &termino);

    printf("Serie de Fibonacci: %d %d ", num1, num2);

    fibonacci(num1, num2, termino - 2);

    return 0;
}

int fibonacci(int a, int b, int termino) {
    if (termino <= 0) {
        return 0;
    }

    int c = a + b;

    printf("%d ", c);

    fibonacci(b, c, termino - 1);
}