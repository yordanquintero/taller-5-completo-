#include <stdlib.h>
#include <stdio.h>

float vect[]={32.583f,11.239f,45.781f,22.237f},*pvec=vect;
void arreglo(float *pvec);

int main(){

arreglo(pvec);

    return 0;
}
void arreglo(float *pvec){
    for(int i=0;i<=3;i++){
        printf("%.3f\n",*(pvec+i));
    }

}
