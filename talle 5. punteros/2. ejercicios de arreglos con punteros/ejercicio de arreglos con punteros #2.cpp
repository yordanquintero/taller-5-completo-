#include <stdio.h>
#include <stdlib.h>
#include <ctime>
int main()
{
    int i;
    // crear la matriz
    int matriz[3], matrizz[3], matrizzz[3];
    int *Pmatriz = matriz, *Pmatrizz = matrizz, *Pmatrizzz = matrizzz;

    //Llenando vector 1
 printf("creando matriz de 3x3 con ceros y unos\n");
    srand(time(0));
    for(i=0; i<3; i++){
         *(Pmatriz+i) = rand () % 2;
        *(Pmatrizz+i) = rand () % 2;
        *(Pmatrizzz+i) = rand () % 2;

    }

    //mostrando las matrices
       printf("\nMostrando Matriz  #1\n");
    for(i=0; i<3; i++){
        printf("%d \t", *(Pmatriz+i));
        printf("%d \t", *(Pmatrizz+i));
        printf("%d \t", *(Pmatrizzz+i));
        printf("\n");
    }

    return 0;
}
