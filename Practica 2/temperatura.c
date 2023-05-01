/**
 * @file temperatura.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief Convertir grados Fahrenheit a grados Centigrados
 * @date 2023-02-27
 * 
 * @copyright GPL v3
 * 
 */

#include <stdio.h>

int main(){
    //Declaramos las variables
    float gc, gf , res ;
    int claf = 0;

    //Realizamos un menu
    printf("Si desea convertir grados Centigrados a Grados Fahrenheit, presione 1\n");
    printf("Si desea convertir grados Fahrenheit a Grados Centigrados, presione 2\n");
    scanf("%i", &claf);

    //Creamos una sentencia if else para realizar 2 casos
    if (claf == 1)
    {
        printf("GRADOS CENTIGRADOS A GRADOS FARENHEIT\n");
        printf("Introduzca el valor de grados Centigrados: ");
        scanf("%f", &gc);

        //Realizamos la operacion  de conversion
        res = (gc * 1.8) + 32;

        //Imprimimos resultado
        printf("\nEl resultado es: %.5f grados Fahrenheit", res);

    } if (claf == 2)
    {
        printf("GRADOS FARENHEIT A GRADOS CENTIGRADOS\n");
        printf("Introduzca el valor de grados Fahrenheit: ");
        scanf("%f", &gf);

        //Realizamos la operacion  de conversion2

        res = (gf - 32)/1.8 ;

        //Imprimimos resultado
        printf("\nEl resultado es: %.5f grados Fahrenheit", res);
        
    } else{
        printf("\nReinicie el codigo");
    }

    return 0 ;
}