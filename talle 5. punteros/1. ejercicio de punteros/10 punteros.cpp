#include <stdlib.h>
#include <stdio.h>

//crear matriz traspuesta

void llenarmatriz();
void mostrar();
void traspuesta();
int columna1[3],*pcolumna1=columna1,columna2[3],*pcolumna2=columna2,columna3[3],*pcolumna3=columna3;

int main(){

llenarmatriz();
mostrar();
traspuesta();

    return 0;
}


void llenarmatriz(){
//primera columna
printf("llene la matriz\n\n");
printf("llene  la primer columna\n");
for(int i=0;i<3;i++){
printf("ingrese un numero: ");
scanf("%d",(pcolumna1+i));
}
//segunda columna
printf("\nllene  la segunda columna\n");
for(int i=0;i<3;i++){
printf("ingrese un numero: ");
scanf("%d",(pcolumna2+i));
}
//tercera columna
printf("\nllene  la tercera  columna\n");
for(int i=0;i<3;i++){
printf("ingrese un numero: ");
scanf("%d",(pcolumna3+i));
}
}

void mostrar(){
    printf("mostrando la moatriz\n");
    for(int i=0;i<3;i++){
printf("%d \t",*(pcolumna1+i));
printf("%d \t",*(pcolumna2+i));
printf("%d \t",*(pcolumna3+i));
printf("\n");
    }
}

void traspuesta(){
printf("Matriz traspuesta: \n");
    //Generando Matriz traspuesta
    for(int i=0; i<3; i++){
    printf("%d \t", *(pcolumna1+i));
    }
    printf("\n");
    for(int i=0; i<3; i++){
    printf("%d \t", *(columna2+i));
    }
    printf("\n");
    for(int i=0; i<3; i++){
    printf("%d \t", *(columna3+i));
    }
    printf("\n");






}
