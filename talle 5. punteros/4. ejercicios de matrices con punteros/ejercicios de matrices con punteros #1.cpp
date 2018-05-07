#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    //Creamos 2 matrices de 3x3 para calcular su suma
    int matriz[3], matrizz[3], matrizzz[3];
    int *Pmatriz = matriz, *Pmatrizz = matrizz, *Pmatrizzz = matrizzz;


    //Llenando vector 1
    for(i=0; i<3; i++){
        printf("ingrese un numero: ");
        scanf("%d",&*(Pmatriz+i));
        printf("ingrese un numero: ");
         scanf("%d",&*(Pmatrizz+i));
        printf("ingrese un numero: ");
         scanf("%d",&*(Pmatrizzz+i));
    }

    //Mostrando matriz sumada
    printf("Mostrando Matriz \n");
    for(i=0; i<3; i++){
        printf("%d \t", *(Pmatriz+i));
        printf("%d \t", *(Pmatrizz+i));
        printf("%d \t", *(Pmatrizzz+i));
        printf("\n");
    }


int resultado1=0,resultado2,resultado3;
    //Sumando Matrices

        for(i=0; i<3; i++){
       resultado1+=*(Pmatriz+i)+*(Pmatrizz+i)+*(Pmatrizzz+i);
        }


        printf("la suma de todas las posiciones es: %d\n", resultado1);



    system("pause");
    return 0;
}
