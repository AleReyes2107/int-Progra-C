/**
 * @file sucesion.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief Calcular el enesimo termino de la sucesion de Fibonacci
 * @version 0.1
 * @date 2023-02-27
 * 
 * @copyright GPL v3
 * 
 */
#include <stdio.h>
#include <math.h>

int main(){
    //Declaramos las variables
     int n = 0, op = 0;

    //Pedimos al usuario el dato
    printf("SUCESION DE FIBONACCI\n");
    printf("Introdusca el termino deseado de la sucesion: ");
    scanf("%i", &n);

    //Realizamos la operacion
    op = (1/sqrt(5)*((pow((1+sqrt(5))/2,n))-(pow((1-sqrt(5))/2,n))));

    //imprimimos el resultado
    printf("El termino %i de la sucesion es: %i", n, op);
  
}