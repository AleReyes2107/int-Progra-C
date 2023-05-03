/**
 * @file ejercicio1.c
 * @author Alejandro Reyes Lira (correo: alerey.lira@gmail.com) (Boleta: 2023640272)
 * @brief Contador de tamanio de cadena de texto dada por el usuario
 * @version 0.1
 * @date 2023-04-28
 * 
 * @copyright GPL v3
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * @brief elimina el valor deseado
 * 
 * @param arr arreglo
 * @param size tamanio del arreglo
 * @param 
 */
void eliminar(int *arr, int *size, int *n);

/**
 * @brief Cuenta la cantidad de digitos usando recursividad
 * 
 * @param num numero dado por el usuario
 * 
 * @return Si el numero es menor a 10, regresa que tiene un digito  
 */
void imprimir(int *arr, int *size);

void imprimir(int *arr, int *size);
void eliminar(int *arr, int *size, int *valor);

int main() {
    int arr[8];
    int i, n;
    int size = 8;   
    //Llenamos los valores del arreglo con valores aleatorios
    srand(time(NULL));
    for (i = 0; i < 8; i++) {
      arr[i] = rand() % 20 + 1;
    }   
    //Llamamos a la funcion para que imprima el arreglo aleatorio
    imprimir(arr, &size);   
    //Pedimos al usuario el valor
    printf("Introduzca un numero para eliminar:");
    scanf("%i",&n); 
    //Eliminamos el valor del arreglo
    eliminar(arr, &size, &n);   
    //Imprimimos el arreglo actualizado
    imprimir(arr, &size);   
    return 0;
}

void imprimir(int *arr, int *size){
  int i;  
  printf("Arreglo aleatorio: [");
  for (i = 0; i < *size; i++) {
    printf("%d", arr[i]);
    if (i != *size - 1) {
      printf(", ");
    }
  }
  printf("]\n");
}

void eliminar(int *arr, int *size, int *n){
  int i, j;
  for(i = 0; i < *size; i++){
    if(arr[i] == *n){
      for(j = i; j < *size - 1; j++){
        arr[j] = arr[j+1];
      }
      (*size)--;
      i--;
    }
  }
}
