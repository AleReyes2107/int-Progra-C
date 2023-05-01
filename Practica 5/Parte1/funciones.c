/**
 * @file funciones.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief Libreria de funciones donde se realizan las operaciones
 * @version 0.1
 * @date 2023-04-18
 * 
 * @copyright GPL v3
 * 
 */
#include "funciones.h"

//Burbuja
void aleatorios(int arr[], int n)
{
    srand(time(NULL));
    int i;
    for (i=0; i < n; i++)
    {
        arr[i] = rand() % 251 + 50;
    }
}


void imprimir(int arr[], int n)
{
    int i;
    printf("[");
    for (i=0; i<n; i++)
    {
        printf(" %i ", arr[i]);
    }
    printf("]");
}

void burbuja(int arr[], int n)
{
    int i = 0, j = 0, cont = 0;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] < arr[j+1])
            {
                cont = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = cont;
            }
        }   
    }
}


//Ecuaciones
float determinante(float A[][3]) {
    float det = 0.0;

    det = (A[0][0] * A[1][1] * A[2][2] + A[1][0] * A[2][1] * A[0][2] + A[2][0] * A[0][1] * A[1][2]) -
        (A[2][0] * A[1][1] * A[0][2] + A[0][0] * A[2][1] * A[1][2] + A[1][0] * A[0][1] * A[2][2]);

    return det;
}

void transpuesta(float A[][3], float MTRS[][3]) {
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            MTRS[j][i] = A[i][j];
        }
    }
}


void adjunta(float A[][3], float MADJ[][3]) {
    float MTRS[3][3];
    transpuesta(A, MTRS);

    MADJ[0][0] = ((+1) * (MTRS[1][1] * MTRS[2][2] - MTRS[2][1] * MTRS[1][2]));  
    MADJ[1][0] = ((-1) * (MTRS[0][1] * MTRS[2][2] - MTRS[2][1] * MTRS[0][2]));
    MADJ[2][0] = ((+1) * (MTRS[0][1] * MTRS[1][2] - MTRS[1][1] * MTRS[0][2]));
    MADJ[0][1] = ((-1) * (MTRS[1][0] * MTRS[2][2] - MTRS[2][0] * MTRS[1][2]));
    MADJ[1][1] = ((+1) * (MTRS[0][0] * MTRS[2][2] - MTRS[2][0] * MTRS[0][2]));
    MADJ[2][1] = ((-1) * (MTRS[0][0] * MTRS[1][2] - MTRS[1][0] * MTRS[0][2]));
    MADJ[0][2] = ((+1) * (MTRS[1][0] * MTRS[2][1] - MTRS[2][0] * MTRS[1][1]));
    MADJ[1][2] = ((-1) * (MTRS[0][0] * MTRS[2][1] - MTRS[2][0] * MTRS[0][1]));
    MADJ[2][2] = ((+1) * (MTRS[0][0] * MTRS[1][1] - MTRS[1][0] * MTRS[0][1]));
}


void inversa(float A[][3], float MINV[][3]) {
    float det = determinante(A);
    float MADJ[3][3], MTRS[3][3];

    
        transpuesta(A, MTRS);
        adjunta(A, MADJ);

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                MINV[i][j] = ((1.0 / det) * MADJ[i][j]);
            }
        }
}

void resultado(float MINV[][3], float B[][1], float MRES[][1]) {
    int i, j;

    for (i = 0; i < 3; i++) {
        MRES[i][0] = 0;
        for (j = 0; j < 3; j++) {
            MRES[i][0] += MINV[i][j] * B[j][0];
        }
    }
}

//Matrices

void suma(int A[][3], int B[][3], int MSUM[][3]){
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            MSUM[i][j] = A[i][j] + B[i][j];
        }
    }
}

void resta(int A[][3], int B[][3], int MRES[][3]){
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            MRES[i][j] = A[i][j] - B[i][j];
        }
    }
}

void multiplicacion(int A[][3], int B[][3], int MMLT[][3]){
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            MMLT[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                MMLT[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}


void imprarr(int matriz[][3], int tamano) {
    int i, j;
    for (i = 0; i < tamano; i++) {
        for (j = 0; j < tamano; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
