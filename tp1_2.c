#include "stdlib.h"
#include "stdio.h"

int cuadrado(int a);
void cuadradoProc(int *dirX);
void mostrar(int *dirMostrar);

int main(){
    int x;

    printf("Escriba un número:\n");
    scanf("%i",&x);

    int y = x;
    printf("El cuadrado con función = %i \n", cuadrado(x));

    int *puntero=&y;
    cuadradoProc(puntero);
    printf("El cuadrado con procedimiento = %i \n", *puntero);
    
    mostrar(&y);
    
    scanf("%i", &y);
}

int cuadrado(int a){
    int cuadrado = a*a;
    return cuadrado;
}

void cuadradoProc(int *dirX){
    *dirX=(*dirX)*(*dirX);
}

void mostrar(int *dirMostrar){

    printf("Esta función recibió el valor: %i \n", *dirMostrar);
    printf("Su dirección de memoria es %i", dirMostrar);

}