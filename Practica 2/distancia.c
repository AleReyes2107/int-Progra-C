/**
 * @file distancia.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief Calcular distancia entre dos puntos
 * @version 0.1
 * @date 2023-02-27
 * 
 * @copyright GPL v3
 * 
 */

#include <stdio.h>
#include <math.h>

int main(){
    //Deffinimos las variables
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0, rx = 0, ry = 0;
    float dist = 0;

    //Pedimos datos al usuario
    printf("Valor del primer punto en eje x: ");
    scanf("%i", &x1);
    printf("Valor del primer punto en eje y: ");
    scanf("%i", &y1);
    printf("Valor del segundo punto en eje x: ");
    scanf("%i", &x2);
    printf("Valor de segundo punto en eje x: ");
    scanf("%i", &y2);

    //Realizamos las operaciones
    rx = pow((x2 - x1),2 );
    ry = pow((y2 - y1),2 );
    dist = sqrt(rx + ry);

    //Imprimimos los resultados
    printf("La distancia entre el punto (%i,%i) ", x1, y1);
    printf("y el punto (%i,%i) ", x2, y2);
    printf("es: %f", dist);

    return 0;
}