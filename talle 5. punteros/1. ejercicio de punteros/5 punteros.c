#include <stdio.h>
#include <stdlib.h>

void pedirdatos();
void ordenarnumeros(int *pnum,int num);
void imprimir(int *pnum,int num);

int vec[100];
int num,*pnum;
int aux;
int *pnum=vec;
int main(){

pedirdatos();
ordenarnumeros(pnum,num);
imprimir(pnum,num);


    return 0;
}
void pedirdatos(){
printf("ingrese el numero del arreglo: ");
scanf("%d",&num);

for(int i=0;i<num;i++){
    printf("%d. ingrese un numero: ",i+1);
    scanf("%d",&*(pnum+i));
}
}
//odenar con metodo burbuja
void ordenarnumeros(int *pnum,int num){

for(int i=0;i<num;i++){
    for(int j=0;j<num-1;j++){
        if(*(pnum+j)>*(pnum+j+1)){
            aux=*(pnum+j);
            *(pnum+j)=*(pnum+j+1);
            *(pnum+j+1)=aux;
        }
    }
}
}

void imprimir(int *pnum,int num){
printf("arreglo ordenado\n");


for(int i=0;i<num;i++){
 printf("%d\n",*(pnum+i));

}

}




