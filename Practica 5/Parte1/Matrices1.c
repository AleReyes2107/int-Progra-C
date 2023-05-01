/**
 * @file Matrices1.c.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief Pide dos matrices 3x3 y opera entre ellas
 * @version 0.1
 * @date 2023-04-18
 * 
 * @copyright GPL v3
 * 
 */
#include <stdio.h>
#include "funciones.h"

int main()
{
    int A[3][3], B[3][3], MSUM[3][3], MRES[3][3], MMLT[3][3];
    int i = 0, j = 0, k = 0;

    printf("Valores matriz A (3x3): \n");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            int aux1 = i +1;
            int aux2 = j +1;
            printf("Posicion [%i,%i] = ",aux1,aux2);
            scanf("%i", &A[i][j]);
        }
    } 
    
    printf("\nValores matriz B (3x3): \n");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            int aux1 = i +1;
            int aux2 = j +1;
            printf("Posicion [%i,%i] = ",aux1,aux2);
            scanf("%i", &B[i][j]);
        }
    } 

    suma(A, B, MSUM);
    printf("Suma de las matrices: \n");
    imprarr(MSUM, 3);

    resta(A, B, MRES);
    printf("Resta de las matrices: \n");
    imprarr(MRES, 3);

    multiplicacion(A, B, MMLT);
    printf("Multiplicacion de las matrices: \n");
    imprarr(MMLT, 3);

    return 0;
}
