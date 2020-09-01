#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char inicialNombre;
    float edad;
    char sexo;
    float acumuladorEdad;
    float promedioEdad;
    int edadMasGrande;
    int edadMasChica;
    char inicialMasGrande;
    char inicialMasChica;

    acumuladorEdad=0;


    for (i=0; i<4; i++)
    {

        printf("\nIngrese la inicial del nombre por favor: ");
        fflush(stdin);
        scanf(" %c", &inicialNombre);

        printf("\nIngrese la edad por favor: ");
        scanf(" %f", &edad);

        printf("\nIngrese sexo por favor ('f' o 'm') : ");
        fflush(stdin);
        scanf(" %c", &sexo);

        acumuladorEdad= acumuladorEdad+edad;

        if(i==0|| edad>edadMasGrande)
        {
            edadMasGrande= edad;
            inicialMasGrande= inicialNombre;
        }

       if(i==1 || edad<edadMasChica)
        {
            edadMasChica= edad;
            inicialMasChica= inicialNombre;
        }


    }

    promedioEdad= acumuladorEdad/i;

    printf("\nLa suma de las edades es: %.0f ", acumuladorEdad);
    printf("\nEl promedio de las edades: %.2f" , promedioEdad);
    printf("\nLa inicial de la edad mas grande es: %c ", inicialMasGrande);
    printf("\nLa inicial de la edad mas chica es: %c ",  inicialMasChica);

    return 0;
}
