#include <stdlib.h>
#include <stdio.h>
//ejecicio 4 de estructuras con punteros
struct promedio{
float nota1,nota2,nota3;
};
struct alumno{
char nombre[20];
char sexo[10];
int edad;
struct promedio prom;

}alumno,*palumno=&alumno;
float promedio2;
void pedirdatos();
void mostrardatos();

int main(){
pedirdatos();
mostrardatos();
    return 0;
}
//pidiendole los datos al alumno
void pedirdatos(){
printf("ingrese los datos del alumno\n");
printf("ingrese el nombre: ");
fgets((palumno)->nombre,20,stdin);
printf("ingrese la edad: ");
scanf("%d",&(palumno)->edad);
fflush(stdin);
printf("ingrese el sexo: ");
fgets((palumno)->sexo,10,stdin);
printf("--------------------------\n");
printf("NOTAS DEL ALUMNO\n");
printf("ingrese la nota 1: ");
scanf("%f",&(palumno)->prom.nota1);
printf("ingrese la nota 2: ");
scanf("%f",&(palumno)->prom.nota2);
printf("ingrese la nota 3: ");
scanf("%f",&(palumno)->prom.nota3);
printf("--------------------------\n");
promedio2=((palumno)->prom.nota1+(palumno)->prom.nota2+(palumno)->prom.nota3)/3;

}
//imprimiendo los datos del alumno
void mostrardatos(){
printf("DATOS DEL ALUMNO\n");
 printf("nombre: %s",(palumno)->nombre);
 printf("edad: %d\n",(palumno)->edad);
 printf("sexo: %s\n",(palumno)->sexo);
 printf("promedio: %.1f",promedio2);
printf("\n--------------------------\n");
}



