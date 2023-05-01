/**
 * @file fibonaccif.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief Serie de Fibonacci con sentencia For
 * @version 0.1
 * @date 2023-03-07
 * 
 * @copyright GPL v3
 * 
 */
#include <stdio.h>

int main(){

    int ter = 0,sum = 0,v1 = 0;
    int i = 1, v2 = 1;

    printf("Proporcione un numero: ");
    scanf("%i", &ter);

    printf("La sucesion de Fibonacci hasta el termino %i es:", ter);

    for ( i = 1; i <= ter; i++)
    {
        printf("%d  ", v2);
        sum = v1 + v2;
        v1 = v2;
        v2 = sum;
    }
    return 0;
}