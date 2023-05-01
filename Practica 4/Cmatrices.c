/**
 * @file Cmatrices.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief Pide dos matrices 3x3 y opera entre ellas
 * @version 0.1
 * @date 2023-03-07
 * 
 * @copyright GPL v3
 * 
 */
#include<stdio.h>

int main()
{
    int A[3][3], B[3][3], MSUM[3][3], MRES[3][3], MMLT[3][3];
    int i = 0, j = 0, k = 0;

    printf("Valores matriz A (3x3): \n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            int aux1 = i +1;
            int aux2 = j +1;
            printf("Posicion [%i,%i] = ",aux1,aux2);
            scanf("%i", &A[i][j]);
        }
    } 
    
    printf("\nValores matriz B (3x3): \n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            int aux1 = i +1;
            int aux2 = j +1;
            printf("Posicion [%i,%i] = ",aux1,aux2);
            scanf("%i", &B[i][j]);
        }
    } 

    printf("\nLa suma de la matriz A y la matriz B es:  \n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            MSUM[i][j] = A[i][j] + B[i][j];
            printf("%i ", MSUM[i][j]);
        }
        printf("\n");
    } 

    printf("\nLa resta de la matriz A y la matriz B es:  \n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            MRES[i][j] = A[i][j] - B[i][j];
            printf("%i ", MRES[i][j]);
        }
        printf("\n");
    } 

        printf("\nEl producto de la matriz A y la matriz B es:  \n");
        for (i=0; i<3; i++)
        {
            for (j=0; j<3; j++)
            {
                MMLT[i][j] = 0;
                for (k=0; k<3; k++)
                {
                    MMLT[i][j] = MMLT[i][j]+A[i][k]*B[k][j];
                }
                printf("%i ", MMLT[i][j]);
            }
            printf("\n");
        }
    return 0;
}