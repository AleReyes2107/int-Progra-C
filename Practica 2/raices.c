/**
 * @file circulo.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief Realizar raices con logaritmos
 * @version 0.1
 * @date 2023-02-27
 * @copyright GPL v3
 * 
 */

#include <stdio.h>
#include<math.h>
#define E 2.71828182

int main(){
    //Declaramos las variables
    int rz = 0, num = 0;
    float res;

    //Pedimos datos al usuario 
    printf("Introduzca el grado de la Raiz: ");
    scanf("%i", &rz);
    printf("Introduzca el numero entero al cual calcular la raiz: ");
    scanf("%i", &num);

    //Realizamos la operacion
    res = pow(E , (log(num))/rz) ;

    //Imprimimos resultado
    printf("El resultado es: %f", res);
    return 0;
}