#include <stdlib.h>
#include <stdio.h>

//estructura
struct persona_discapacitada{
char nombre[20];
char discapacidad='v';
}personas[30],personaconD[30],personasinD[30],*ppersonas=personas,*ppersonasconD=personaconD,*ppersonassinD=personasinD;

int numpe;
void llenar_personas();
void imprimir();
void copiar(char cadena1[],char cadena2[]);


int main(){
llenar_personas();
imprimir();
    return 0;
}

//llenar las personas
void llenar_personas(){
printf("ingrese el numero de personas: ");
scanf("%d",&numpe);
for(int i=0;i<numpe;i++){
fflush(stdin);
printf("-------------------------------\n");
printf("PERSONA #%d\n",i+1);
printf("nombre: ");
fgets((ppersonas+i)->nombre,30,stdin);
printf("discapacidad(f/v): ");
scanf("%s",&(ppersonas+i)->discapacidad);
fflush(stdin);

//sacando personas discapacitadas
if((ppersonas+i)->discapacidad=='v'){
    copiar((personaconD+i)->nombre,(ppersonas+i)->nombre);

}
//sacando personas sin discapacidad
if((ppersonas+i)->discapacidad=='f'){
    copiar((ppersonassinD+i)->nombre,(ppersonas+i)->nombre);

}
}
}
//imprimir las peronas
void imprimir(){
printf("-------------------------------\n");
printf("PERSONAS CON DISCAPACIDAD\n");
for(int i=0;i<numpe;i++){
    printf("%s",(ppersonasconD+i)->nombre);
}
printf("-------------------------------\n");
printf("PERSONAS SIN DISCAPACIDAD\n");
for(int i=0;i<numpe;i++){
    printf("%s",(ppersonassinD+i)->nombre);
}

printf("-------------------------------\n");
}
void copiar(char cadena1[],char cadena2[]){
int contador=0;
for(int i=0;i<30;i++){
    if(cadena1[i]=='\n'){
        break;
    }
    contador++;
}
for(int i=0;i<contador;i++){
    cadena1[i]=cadena2[i];
}
}
