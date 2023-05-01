/**
 * @file Ecuaciones1.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief Resuelve un sistema de ecuaciones con sus coeficientes dados por el usuario
 * @version 0.1
 * @date 2023-04-18
 * 
 * @copyright GPL v3
 * 
 */

#include <stdio.h>
#include "funciones.h"

int main() {
    float  A[3][3], B[3][1], X[3][1], MADJ[3][3], MTRS[3][3], MINV[3][3], MRES[3][1];
    float  det = 0.0;
    int i = 0, j = 0;

    //Pedir coeficientes
    printf("Coeficientes de tu sistema de ecuaciones 3x3: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            int aux1 = i + 1;
            int aux2 = j + 1;
            printf("Posicion [%i,%i] = ", aux1, aux2);
            scanf("%f", &A[i][j]);
        }
    }

    //Pedir columna de resultados
    printf("Resultados de tu sistema de ecuaciones : \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 1; j++) {
            int aux1 = i + 1;
            int aux2 = j + 1;
            printf("Posicion [%i,%i] = ", aux1, aux2);
            scanf("%f", &B[i][j]);
        }
    }

    //Calculo de determinante de A
    det = determinante(A);
    printf("Determinante  de A es: %.3f\n", det);

    if (det != 0) {
        //Transpuesta de la matriz A
        transpuesta(A, MTRS);

        //Matriz adjunta de la transpuesta de A
        adjunta(A, MADJ);

        // Calcular la matriz inversa
        inversa(A, MINV);
        
        // Imprimir la matriz inversa
        printf("\nLa matriz inversa es:\n");
        for (int i = 0; i < 3; i++) {    
            for (int j = 0; j < 3; j++){
            printf("%.3f    ", MINV[i][j]);
            }
            printf("\n");
        }

        //Multiplicar la matriz inversa por los resultados de la ecuacion para los valores de x
        resultado(MINV, B, MRES);

        // Imprimir la solución
        printf("Las soluciones son:\n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 1; j++) {
            printf("%.3f ", MRES[i][j]);
            }
        printf("\n");
        }

    return 0;

    }else {
    printf("La matriz A no es invertible, no se puede operar\n");
    }
}