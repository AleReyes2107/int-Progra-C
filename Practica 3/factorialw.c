/**
 * @file factorialw.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief Calcular el factorial de un numero con la sentencia While
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
    i = n - 1;
    
    while (i>=1)
    {
        sum = sum * i;
        i--;
    }
    
    
    printf("%i! es %i", n , sum);

}

