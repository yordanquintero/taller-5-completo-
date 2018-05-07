#include <stdlib.h>
#include <stdio.h>



int main(){
int num,*dnum;
printf("ingrese un numero: ");
scanf("%d",&num);
 dnum=&num;//guardando la posicion de memoria
if(*dnum%2==0){
    printf("el numero %d es par\n",*dnum);
    printf("posicion: %p",dnum);
}else{
printf("el numero %d es impar\n",*dnum);
printf("posicion: %p",dnum);

}

    return 0;
}
