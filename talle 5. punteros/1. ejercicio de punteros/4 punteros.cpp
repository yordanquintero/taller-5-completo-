#include <stdlib.h>
#include <stdio.h>

int main(){
int numero,vec[100],*pnumero,menor=999999;
printf("ingrese el tamaño del vector: ");
scanf("%d",&numero);
for(int i=0;i<numero;i++){
    printf("%d. ingrese un numero: ",i+1);
    scanf("%d",&vec[i]);
}
pnumero=vec;

for(int i=0;i<numero;i++){
    if(*pnumero<menor){
        menor=*pnumero;
    }
    pnumero++;
}
printf("el menor elemento es: %d\n",menor);
printf("posicion: %p",pnumero);


    return 0;
}
