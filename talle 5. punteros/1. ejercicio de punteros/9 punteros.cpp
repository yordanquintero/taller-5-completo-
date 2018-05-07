#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    //Creamos 2 matrices de 3x3 para calcular su suma
    int matriz[3], matrizz[3], matrizzz[3];
    int *Pmatriz = matriz, *Pmatrizz = matrizz, *Pmatrizzz = matrizzz;
    int vector[3], vectorr[3], vectorrr[3];
    int *Pvector = vector, *Pvectorr = vectorr, *Pvectorrr = vectorrr;

    //Llenando vector 1
    printf("matriz#1\n");
    for(i=0; i<3; i++){
        printf("ingrese un numero: ");
        scanf("%d",&*(Pmatriz+i));
        printf("ingrese un numero: ");
         scanf("%d",&*(Pmatrizz+i));
        printf("ingrese un numero: ");
         scanf("%d",&*(Pmatrizzz+i));
    }
    printf("matriz#2\n");
    //Llenando vector 2
    for(i=0; i<3; i++){
        printf("ingrese un numero: ");
         scanf("%d",&*(Pvector+i));
        printf("ingrese un numero: ");
         scanf("%d",&*(Pvectorr+i));
        printf("ingrese un numero: ");
         scanf("%d",&*(Pvectorrr+i));
    }
    //mostrando las matrices
       printf("\nMostrando Matriz  #1\n");
    for(i=0; i<3; i++){
        printf("%d \t", *(Pmatriz+i));
        printf("%d \t", *(Pmatrizz+i));
        printf("%d \t", *(Pmatrizzz+i));
        printf("\n");
    }
       printf("Mostrando Matriz  #2\n");
    for(i=0; i<3; i++){
        printf("%d \t", *(Pvector+i));
        printf("%d \t", *(Pvectorr+i));
        printf("%d \t", *(Pvectorrr+i));
        printf("\n");
    }

    //Sumando Matrices
    for(i=0; i<3; i++){
        *(Pmatriz+i) += *(Pvector+i);
        *(Pmatrizz+i) += *(Pvectorr+i);
        *(Pmatrizzz+i) += *(Pvectorrr+i);
    }

    //Mostrando matriz sumada
    printf("Mostrando Matrices sumadas: \n");
    for(i=0; i<3; i++){
        printf("%d \t", *(Pmatriz+i));
        printf("%d \t", *(Pmatrizz+i));
        printf("%d \t", *(Pmatrizzz+i));
        printf("\n");
    }

    system("pause");
    return 0;
}
