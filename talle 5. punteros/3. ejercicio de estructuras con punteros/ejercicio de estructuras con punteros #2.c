#include <stdio.h>
#include <stdlib.h>
//punto 2 de ejercicios de estructuras con punteros
struct Estudiante{
	char nombre[30];
	int edad, grado;
	float promedio;
}estu[3],*pestu=estu;

void crearestudiante();
void mejorpromedio();
void mostrar();

int pos=0;

int main(){
crearestudiante();
mejorpromedio();
mostrar();
	return 0;
}
void crearestudiante(){
printf("ingrese los datos de los 3 estudiantes:\n");
for(int i=0;i<3;i++){
    fflush(stdin);
    printf("-----------------------\n");
    printf("estudiante #%d\n",i+1);
    printf("nombre: ");
    fgets((pestu+i)->nombre,30,stdin);
    printf("edad: ");
    scanf("%d",&(pestu+i)->edad);
    printf("grado: ");
    scanf("%d",&(pestu+i)->grado);
    printf("promedio: ");
    scanf("%f",&(pestu+i)->promedio);

}
printf("-----------------------\n");
}
void mejorpromedio(){
float mayor=0;
for (int i=0;i<3;i++){
    if((pestu+i)->promedio>mayor){
        mayor=(pestu+i)->promedio;
        pos=i;
    }
}
}
void mostrar(){
printf("-----------------------\n");
 printf("\nEl estudiante con mejor promedio es\n");
	printf("Estudiante No. %d\n", pos + 1);
	printf("Nombre: %s", (pestu+pos)->nombre);
	printf("Edad: %d\n", (pestu+pos)->edad);
	printf("Grado: %d\n", (pestu+pos)->grado);
	printf("Promedio: %.1f\n",(pestu+pos)->promedio);
printf("-----------------------\n");
}
