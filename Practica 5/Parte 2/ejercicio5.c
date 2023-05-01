/**
 * @file ejercicio5.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief Suma los digitos de un numero dado por el usuario
 * @version 0.1
 * @date 2023-04-18
 * 
 * @copyright GPL v3
 * 
 */
#include <stdio.h>

/**
 * @brief Suma los digitos de un numero dado usando recursividad
 * 
 * @param num Numero dado por el usuario
 * 
 * @return int si el numero es 0 regresa 0 o saca el modulo del numero y lo suma a la division entera entre 10
 */
int suma(int num);

int main() {

    int num;

    printf("Ingrese un numero entero: ");
    scanf("%i", &num);
    
    printf("La suma de los digitos de %d es %d\n", num, suma(num));
    return 0;
}

int suma(int num) {
    if (num == 0) {
        return 0;
    } else {
        return (num % 10) + suma(num / 10);
    }
}