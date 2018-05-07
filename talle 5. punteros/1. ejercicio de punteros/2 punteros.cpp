#include <stdlib.h>
#include <stdio.h>
bool esprimo(int n);
int main(){
    int num,*pnum;
    printf("ingrese un numero: ");
    scanf("%d",&num);
      pnum=&num;
    if(esprimo(num)){
        printf("es primo\n");
        printf("posicion: %p",pnum);
    }else{
    printf("no es primo\n");
    printf("posicion: %p",pnum);
    }




    return 0;
}
bool esprimo(int n){
int i,primos=0;
for(i=1;i<=n;i++){
    if(n%i==0){
        primos++;
    }
}
if(primos==2){
    return true;
}else{
    return false;
}

}
