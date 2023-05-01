/**
 * @file ejercicio4.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief Calcula la cantidad de digitos de un numero 
 * @version 0.1
 * @date 2023-04-18
 * 
 * @copyright GPL v3
 * 
 */
#include <stdio.h>

/**
 * @brief Cuenta la cantidad de digitos usando recursividad
 * 
 * @param num numero dado por el usuario
 * 
 * @return Si el numero es menor a 10, regresa que tiene un digito  
 */
int dig(int num);

int main() {
    int num;

    printf("Ingresa un numero: ");
    scanf("%d", &num);

    printf("El numero %i tiene %i digitos\n", num, dig(num));

    return 0;
}

int dig(int num) {
    if (num < 10) {
        return 1;
    }
    return 1 + dig(num / 10);
}