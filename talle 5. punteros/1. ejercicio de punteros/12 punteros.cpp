#include <stdlib.h>
#include <stdio.h>

struct ciclista {
int horas;
int minutos;
int segundos;
}etapa[3],*petapa=etapa;


void ingresaretapa();
void calculartiempo(ciclista *petapa);

int horast=0,minutost=0,segundost=0;

int main(){

ingresaretapa();
calculartiempo(petapa);

    return 0;
}


void ingresaretapa(){
for(int i=0;i<3;i++){
    fflush(stdin);
    printf("----------------\n");
    printf("etapa #%d\n",i+1);
    printf("ingrese las horas: ");
    scanf("%d",&(petapa+i)->horas);
    printf("ingrese los minutos: ");
    scanf("%d",&(petapa+i)->minutos);
    printf("ingrese los segundos: ");
    scanf("%d",&(petapa+i)->segundos);
}
}
void calculartiempo(ciclista *petapa){
    for(int i=0;i<3;i++){

    horast=horast+(petapa+i)->horas;
    minutost=minutost+(petapa+i)->minutos;

    if(minutost>=60){//si minutos es mayoe a 60 entonces paso una hora
        minutost=minutost-60;//y se le resta 60 en los minutos
        horast++;//y aumentamos la hora en 1
    }
segundost=segundost+(petapa+i)->segundos;
if(segundost>=60){
    segundost=segundost-60;
    minutost++;
        }
    }
//mostrar el total del tiempo
printf("------------------\n");
printf("el tiempo total es: \n");
printf("hora: %d\n",horast);
printf("minutos: %d\n",minutost);
printf("segundos: %d\n",segundost);




}
