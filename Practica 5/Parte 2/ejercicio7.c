/**
 * @file ejercicio7.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief Genera la serie de Hailstone a partir de un numero dado por el usuario
 * @version 0.1
 * @date 2023-04-18
 * 
 * @copyright GPL v3
 * 
 */
#include <stdio.h>


/**
 * @brief Imprime la serie de Hailstone a partir del numero dado usando recursividad
 * 
 * @param n Numero donde inicia la serie
 */
void hailstone(int n);

int main(){
    int n;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    hailstone(n);

    return 0;
}

void hailstone(int n){
    printf("%d ", n);
    if(n == 1)
        return;
    else if(n % 2 == 0)
        hailstone(n/2);
    else
        hailstone(3*n+1);
}
