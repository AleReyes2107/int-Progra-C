/**
 * @file triangulo.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief Menu para sacar areas y perimetros de figuras
 * @version 0.1
 * @date 2023-03-07
 * 
 * @copyright GPL v3
 * 
 */

#include <stdio.h>

int main(){

    int filas = 0, n1 = 0, n2 = 0, n3 = 0;

    printf("Proporcione un numero: ");
    scanf("%i", &filas);

    if (filas > 0){

        while (n1 <= filas)
        {
            n2 = 1;

            while (n2 <= n1)
            {
                (n3 % 2 == 0) ? printf("0") : printf("1");
                n2++;
                n3++; 
            }
            printf("\n");
            n1++;
        }
        
    }
    else{
        printf("Numero no valido");
    }

    return 0;
}