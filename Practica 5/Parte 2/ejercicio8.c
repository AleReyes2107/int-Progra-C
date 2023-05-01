/**
 * @file ejercicio8.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief Calcula la suma de la serie de Leibniz en un numero dado por el usuario
 * @version 0.1
 * @date 2023-04-18
 * 
 * @copyright GPL v3
 * 
 */
#include <stdio.h>
#include <math.h>

#define PI 3.141592f


/**
 * @brief Realiza la serie de Leibniz usando recursividad
 * 
 * @param n Valor inicial de la serie (inicializada en 0)
 * 
 * @param m Valor final de la serie 
 * 
 * @return float 
 */
float serie(int n, int m);

int main(){

    int m = 0;

    printf("Ingrese la cantidad de terminos de la serie: ");
    scanf("%d", &m);

    printf("El valor de la serie es: %f\n", serie(0, m));

    float pie4 = PI / 4.0f;

    printf("Valor de pi/4 es: %f\n", pie4);

    return 0;
}

float serie(int n, int m){
    if (n == m){
        return 0.0f;
    }
    float aux = pow(-1.0f, n)/(2.0f*n+1.0f);
    return aux + serie(n+1, m);
}