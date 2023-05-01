/**
 * @file menufig.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief Menu para sacar areas y perimetros de figuras
 * @version 0.1
 * @date 2023-03-07
 * 
 * @copyright GPL v3
 * 
 */
#include <stdio.h>
#define PI 3.1416

int main (){

    int op = 0; 
    int a = 0, b = 0,c = 0, h = 0;
    float area = 0, perimetro = 0;

    do
    {
    printf("\nCALCULADORA DE AREAS Y PERIMETROS\n");
    printf("1. Circulo\n");
    printf("2. Cuadrado\n");
    printf("3. Triangulo\n");
    printf("4. Salir\n");
    printf("Seleccione opcion: ");
    scanf("%i", &op);

    switch (op)
    {
    case 1:
        printf("\nCIRCULO\n");
        printf("Ingrese el valor del radio: ");
        scanf("%i", &a);
        
        area = PI*a*a; 
        perimetro = (2*a)*PI;

        printf("El valor del perimetro es: %.2f", perimetro);
        printf("El valor del area es: %.2f", area);

        break;
        
    case 2: 
        printf("\nCUADRADO\n");
        printf("Ingrese el valor del lado: ");
        scanf("%i", &a);

        area = a*a;
        perimetro = 4*a;

        printf("El valor del perimetro es: %.2f\n", perimetro);
        printf("El valor del area es: %.2f", area);
        break;

    case 3: 
        printf("\nTRIANGULO\n");
        printf("Ingrese el valor del lado 1: ");
        scanf("%i", &a);
        printf("Ingrese el valor de la base: ");
        scanf("%i", &b);
        printf("Ingrese el valor del lado 2: ");
        scanf("%i", &c);
        printf("Ingrese el valor de la altura: ");
        scanf("%i", &h);


        area = (b*h)/2;
        perimetro = a+b+c;

        printf("El valor del perimetro es: %.2f\n", perimetro);
        printf("El valor del area es: %.2f", area);

        break;

    case 4: 
        printf("Hasta pronto :)\n");
        return 0;
        
        break;

    default:
        printf("Opcion no valida :( \n");
    }

    } while (op != 4);
    

}