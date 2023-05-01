/**
 * @file factorialf.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief Calcular el factorial de un numero con la sentencia For
 * @version 0.1
 * @date 2023-03-07
 * 
 * @copyright GPL v3
 * 
 */

#include <stdio.h>

int main (){

    int n = 0, sum = 0, i = 0;
    printf("Proporcione un numero para calcular su factorial: ");
    scanf("%i", &n);

    sum = n;

    for ( i = n - 1; i >= 1; i--)
    {
        sum = sum * i;
    }
    
    printf("%i! es %i", n , sum);
    
    return 0;
}