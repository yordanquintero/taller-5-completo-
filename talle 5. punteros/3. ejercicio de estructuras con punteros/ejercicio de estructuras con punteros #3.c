#include <stdlib.h>
#include <stdio.h>


struct empleado{
char nombre[20];
float salario;
}emple[100],*pemple=emple;


void ingresar_empleados();
void imprimir();


float mayor=0;
float menor=999999;
int posmayor,posmenor;
int empleadon;


int main(){
  ingresar_empleados(emple);
imprimir(emple);
    return 0;
}
//ingresando usuarios
void ingresar_empleados(){
     int numempleados;
   printf("ingrese el numero de empleados: ");
   scanf("%d",&numempleados);
    for(int i=0;i<numempleados;i++){
            printf("---------------------------------------------\n");
            printf("EMPLEADO #%d\n",i+1);
            printf("%d.ingrese su nombre: ",i+1);
            fflush(stdin);
            fgets((pemple+i)->nombre,20,stdin);
            printf("%d.digite su salario: ",i+1);
            scanf("%f",&(pemple+i)->salario);
            //sacar el mayor salario
            if((pemple+i)->salario>mayor){
                mayor=(pemple+i)->salario;
                posmayor=i;
            }
            //sacando el menor salario
             if((pemple+i)->salario<menor){
                menor=(pemple+i)->salario;
                posmenor=i;
            }
    }
}
//imprimiendo el menor y el mayor salario
void imprimir(){
       printf("---------------------------------------------\n");
            printf("el empleado con mayor salario es:\n");
            printf("nombre: %s",(pemple+posmayor)->nombre);
            printf("salario: %f",(pemple+posmayor)->salario);
  printf("\n---------------------------------------------\n");
            printf("el empleado con menor salario es:\n");
            printf("nombre: %s",(pemple+posmenor)->nombre);
            printf("salario: %f",(pemple+posmenor)->salario);
    printf("\n---------------------------------------------\n");
}



