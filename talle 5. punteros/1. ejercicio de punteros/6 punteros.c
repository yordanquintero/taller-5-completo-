#include <stdlib.h>
#include <stdio.h>
void pedirdatos();
void buscar(int *pnum,int num);

int num,vec[100],*pnum=vec;
int dato,i=0;
char band='F';

int main(){

pedirdatos();
buscar(pnum,num);




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
void buscar(int *pnum,int num){
    printf("ingrese el numero que desa buscar: ");
    scanf("%d",&dato);
    //busqueda secuelcial
while((band=='F')&&(i<num)){
        if(*(pnum+i)==dato){
            band='V';
        }
i++;

    }
if(band=='F'){
    printf("---------------------------------------\n");
    printf("el numero %d no ha sido encontrado\n",dato);
    printf("---------------------------------------\n");


}else{
    printf("---------------------------------------\n");
    printf("el numero %d ha sido encotrado en la posicion %d\n",dato,i);
    printf("---------------------------------------\n");

}


}


