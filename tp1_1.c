#include "stdio.h"
#include "stdlib.h"

int main()
{
    int Var1=1;
    int *puntero=&Var1;
    printf("\nHola mundo!!!\n\n");
    printf("\nEl contenido del puntero es %d", *puntero);
    printf("\nLa dirección de memoria almacenada por el puntero es: %d", puntero);
    printf("\nLa dirección de memoria de la variable es: %d", &Var1);
    printf("\nEl tamaño de memoria utilizado por la variable es: %d", sizeof(Var1));
    return 0;
}
