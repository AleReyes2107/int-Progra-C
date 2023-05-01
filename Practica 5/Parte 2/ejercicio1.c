/**
 * @file ejercicio1.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief Suma de 3 en 3 hasta un numero n dado por el usuario
 * @version 0.1
 * @date 2023-04-15
 * 
 * @copyright GPL v3
 * 
 */

#include <stdio.h>


/**
 * @brief Suma 3 en 3 e imprime esta hasta que la suma sea mayor al numero n usando recursividad
 *
 * @param n Valor del usuario, valor final
 * 
 * @param con Contiene la suma
 *
 * @return Cada que se ejecuta imprime los valores actualizados de la suma
 */
void sum(int n, int con);

int main() {
    int n;

    printf("Ingrese un numero entero: ");
    scanf("%d", &n);
    
    //Para que empiece de 1 y empiece a sumar de este
    sum(n, 1);

    return 0;
}

void sum(int n, int con) {
    if (con > n) {

        return;

    }

    printf("%d, ", con);

    sum(n, con + 3);
}