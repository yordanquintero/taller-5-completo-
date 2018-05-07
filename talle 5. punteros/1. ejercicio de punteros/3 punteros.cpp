#include <stdlib.h>
#include <stdio.h>


int main(){
int numeros[10],*pnumeros;
for(int i=0;i<10;i++){
printf("%d. ingrese un numero: ",i+1);
scanf("%d",&numeros[i]);
}
pnumeros=numeros;//posicion de memoria comienza numeros

for(int i=0;i<10;i++){
    if(*pnumeros%2==0){
    printf("el numero %d es par\n",*pnumeros);
    printf("posicion: %p\n",pnumeros);
    }
pnumeros++;


}

    return 0;
}

