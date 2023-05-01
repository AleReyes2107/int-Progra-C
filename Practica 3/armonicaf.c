/**
 * @file armonicaf.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief Mostrar la serie armanica en n terminos y su suma con la sentencia For
 * @version 0.1
 * @date 2023-03-07
 * 
 * @copyright GPL v3
 * 
 */

#include <stdio.h>
int main(){

    int n =0, i=1;
    float sum = 0;

    printf("Termino de la sucesion armonica: ");
    scanf("%i", &n);

    printf("La serie es: ");

    for(i = 1; i <=n; i++){
        sum = (1/(float)i) + sum;
        printf ("1/%i + ", i);
    }

    printf("\nLa suma de la serie armonica de %i terminos es: %.3f", n, sum);

    return 0;
}