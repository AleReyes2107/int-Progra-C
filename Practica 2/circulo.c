/**
 * @file circulo.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief Calcular area y perimetro de un circulo
 * @version 0.1
 * @date 2023-02-27
 * 
 * @copyright GPL v3
 * 
 */
#include<stdio.h>
#define PI 3.1416

int main(){
    //Declaramos las variables
    float r = 0, a = 0, p = 0;
    
    //Pedimos al usuario el valor del radio
    printf("Introdusca el valor del radio del circulo: \n");
    scanf("%f", &r);

    //Realizamos operaciones
    p = PI * (2 * r);
    a = PI * (r *r);
    
    //Imprimimos variables
    printf("El perimetro del circulo es: %f", p);
    printf("\nEL area del circulo es: %f", a);

    return 0;
}