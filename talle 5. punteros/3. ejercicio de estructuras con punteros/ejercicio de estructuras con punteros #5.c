#include <stdlib.h>
#include <stdio.h>

struct promedio{
float nota1,nota2,nota3;
};


struct alumno{
char nombre[20];
char sexo[10];
int edad;
struct promedio prom;
}alumno[100],*palumno=alumno;


int cont,cont2;
int cantalumnos;
float mayor=0,menor=999999;
float promedio2[50];
void pedirdatos();
void mostrardatos();

int main(){
pedirdatos();
mostrardatos();
    return 0;

}
//pidiendole los datos de n estudiantes
void pedirdatos(){
printf("ingrese la cantidad de alumnos: ");
scanf("%d",&cantalumnos);
for(int i=0;i<cantalumnos;i++){
printf("-------------------------------\n");
printf("ALUMNO #%d\n",i+1);
fflush(stdin);
printf("ingrese el nombre: ");
fgets((palumno+i)->nombre,20,stdin);
printf("ingrese la edad: ");
scanf("%d",&(palumno+i)->edad);
fflush(stdin);
printf("ingrese el sexo: ");
fgets((palumno+i)->sexo,10,stdin);
printf("\nNOTAS DEL ALUMNO\n");
printf("ingrese la nota 1: ");
scanf("%f",&(palumno+i)->prom.nota1);
printf("ingrese la nota 2: ");
scanf("%f",&(palumno+i)->prom.nota2);
printf("ingrese la nota 3: ");
scanf("%f",&(palumno+i)->prom.nota3);
//sacando el promedio
promedio2[i]=((palumno+i)->prom.nota1+(palumno+i)->prom.nota2+(palumno+i)->prom.nota3)/3;
//determinando el mayor promedio
    if(promedio2[i]>mayor){
        mayor=promedio2[i];
        cont=i;
    }
//determinando el menor promedio
    if(promedio2[i]<menor){
        menor=promedio2[i];
        cont2=i;
    }
}
}

//imprimiendo los datos del alumno
void mostrardatos(){
printf("\n\n-------------------------------\n");

printf("EL ALUMNO CON MAYOR PROMEDIO ES\n");
 printf("nombre: %s",(palumno+cont)->nombre);
 printf("edad: %d\n",(palumno+cont)->edad);
 printf("sexo: %s\n",(palumno+cont)->sexo);
 printf("promedio: %.1f",mayor);
printf("\n-------------------------------\n");

printf("EL ALUMNO CON MENOR PROMEDIO ES\n");
 printf("nombre: %s",(palumno+cont2)->nombre);
 printf("edad: %d\n",(palumno+cont2)->edad);
 printf("sexo: %s\n",(palumno+cont2)->sexo);
 printf("promedio: %.1f",menor);
printf("\n-------------------------------\n");
}
