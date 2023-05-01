/**
 * @file datos.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief 
 * @version 0.1
 * @date 2023-02-21
 * 
 * @copyright GPL v3
 * 
 */
#include<stdio.h>

int main(){
    //Declaramos las variables
    int edad = 0, fechaN = 0;   //Enteras
    float estatura = 0.0;       //Real
    char nombre[50];            //Cadena de caracteres

    //Pedimmos datos 
    printf("Ingresa tu nombre: ");  
    scanf("%s", &nombre);

    printf("Ingresa tu edad: ");
    scanf("%d", &edad);

    printf("Ingresa tu estatura: ");
    scanf("%f", &estatura);
    
    //Realizamos la operacion para saber el anio cuando nacio el usuario
    fechaN = 2023 - edad;
    
    //Imprimimos los datos
    printf("Nombre: %s", nombre);

    printf("\nFecha de nacimiento: %d", fechaN); 
    
    printf("\nEdad: %d", edad);
    
    printf("\nEstatura: %fm", estatura);

    return 0;
}