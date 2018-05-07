#include <stdio.h>
#include <stdlib.h>

struct alumnos {
char nombre[100];
int edad;
float promedio;
}alumno[3],*palumno=alumno;



void pedirdatos();
void calcularpromedio(alumnos *palumno);
void mostrardatos();
int pos=0;



int main(){


pedirdatos();
calcularpromedio(palumno);
mostrardatos();




    return 0;
}
void pedirdatos(){
for (int i=0;i<3;i++){
    printf("------------------------\n");
    printf("alumno #%d\n",i+1);
   printf("ingrese el nombre del alumno: ");
   fgets((palumno+i)->nombre,30,stdin);
   printf("ingrese la edad del alumno: ");
   scanf("%d",&(palumno+i)->edad);
   printf("ingrese el promedio: ");
   scanf("%f",&(palumno+i)->promedio);
   fflush(stdin);
}
}
void calcularpromedio(alumnos *palumno){
    float mayor=0.0;
    for (int i=0;i<3;i++){
    if((palumno+i)->promedio>mayor){//sacando el mayor
        mayor=(palumno+i)->promedio;
        pos=i;
        }
    }
}
void mostrardatos(){
printf("------------------------\n");
printf("el alumno con mejor promedio es: \n");
printf("------------------------\n");

printf("nombre: %s",(palumno+pos)->nombre);
printf("edad: %d\n",(palumno+pos)->edad);
printf("promedio: %.1f",(palumno+pos)->promedio);
}
