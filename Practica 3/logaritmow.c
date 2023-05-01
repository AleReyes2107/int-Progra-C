/**
 * @file logaritmof.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief Calcular una raiz con logaritmo natural, dando logaritmo natural con la serie de Maclaurin usando la sentencia While
 * @version 0.1
 * @date 2023-03-07
 * 
 * @copyright GPL v3
 * 
 */

#include<stdio.h>
#include<math.h>
#define E 2.71828182846

int main ()
{
   
    float n = 0, m = 0, i = 0, logNa = 0, suma = 0, res = 0;

    printf("Por favor proporciona el gado de la raiz:  ");
    scanf("%f", &m);
    printf("Introduzca el numero al que se le obtendra la raiz: ");
    scanf("%f", &n);

    while (i <=5000)
    {
        logNa = (1/((2*i)+1))*pow(((n-1)/(n+1)),((2*i)+1));
        suma = logNa + suma;
        i++;
    }
    

    logNa = ((2)*(suma));
    res = pow(E,((1/m)*logNa));

    printf("El resultado de tu raiz es:  %5.3f", res);
    return 0;
}

