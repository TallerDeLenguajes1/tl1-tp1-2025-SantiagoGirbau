#include "stdlib.h"
#include "stdio.h"

int cuadrado(int a);
void cuadradoProc(int *dirX);
void mostrar(int *dirMostrar);
void Invertir(int *dirA,int *dirB);
void orden(int *a,int *b);

int main(){
    
    // Apartado a)
    int x;
    printf("Escriba un número:\n");
    scanf("%i",&x);
    int y = x;
    printf("El cuadrado con función = %i \n", cuadrado(x));

    // Apartado b), paso el valor por referencia utilizando un puntero uso el mismo valor que para a).
    int *puntero=&y;
    cuadradoProc(puntero);
    printf("El cuadrado con procedimiento = %i \n", *puntero);
    
    // Apartado c), leo otro valor y muestro su valor y su dir de memoria. Paso la variable directamente como su dir de memoria.
    printf("Escriba un valor para mandar y ver su dirección y contenido:\n ");
    scanf("%i", &y);
    mostrar(&y);


    // Apartado d)
    int a, b;
    
    printf("Escriba un valor de A: ");
    scanf("%i", &a);
    printf("\nEscriba un valor de B: ");
    scanf("%i", &b);
    printf("Antes de invertir: A= ");
    mostrar(&a);
    printf("y B= ");
    mostrar(&b);
    Invertir(&a, &b);
    printf("Luego de invertir: A= ");
    mostrar(&a);
    printf("y B= ");
    mostrar(&b);

    //Apartado e)
    printf("\nAhora vamos a ordenar:\n");
    printf("Escriba un valor de A: ");
    scanf("%i", &a);
    printf("\nEscriba un valor de B: ");
    scanf("%i", &b);
    orden(&a,&b);
    printf("\nEl mayor es: A= ");
    mostrar(&a);
    printf("y el menor es B= ");
    mostrar(&b);

    scanf("%i", &y); //Para que no se cierre la consola
    
}



int cuadrado(int a){
    int cuadrado = a*a;
    return cuadrado;
}

void cuadradoProc(int *dirX){
    *dirX=(*dirX)*(*dirX);
}

void mostrar(int *dirMostrar){

    printf("Valor: %i \n", *dirMostrar);
    printf("Su dirección de memoria es %i\n", dirMostrar);

}

void Invertir(int *dirA, int *dirB){
    int aux;
    aux= *dirA;
    *dirA= *dirB;
    *dirB=aux;
}

void orden(int *a,int *b){
    if(*a<*b){
        Invertir(&(*a), &(*b)); //Reutilizo la función de invertir :)
    }
}