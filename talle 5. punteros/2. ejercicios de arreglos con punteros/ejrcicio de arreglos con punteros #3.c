#include <stdio.h>
#include <stdlib.h>

int potencia(int, int);

int main(){
	int vector1[4], vector2[4], vector3[4], vector4[4];
	int *pvector1 = vector1, *pvector2 = vector2, *pvector3 = vector3, *pvector4 = vector4;
	int i;

	//Llenar vector usuario
	for(i = 0; i < 4; i++){
		printf("Ingrese un valor: ");
		scanf("%d", &(*(pvector1 + i)));
	}

	//Llenar vector cuadrado
	for(i = 0; i < 4; i++){
		*(pvector2 + i) = potencia(*(pvector1 + i), 2);
	}
w
	//Llenar vector cubo
	for(i = 0; i < 4; i++){
		*(pvector3 + i) = potencia(*(pvector1 + i), 3);
	}

	//Llenar vector cuarta
	for(i = 0; i < 4; i++){
		*(pvector4 + i) = potencia(*(pvector1 + i), 4);
	}

	//Mostrar Vector
	for(i = 0; i < 4; i++){
		printf("%d\t", *(pvector1 + i));
		printf("%d\t", *(pvector2 + i));
		printf("%d\t", *(pvector3 + i));
		printf("%d\t", *(pvector4 + i));
		printf("\n");
	}

	return 0;
}

int potencia(int base, int exponente){
	int i, potencia = 1;
	for(i = 0; i < exponente; i++){
		potencia =potencia*base;
	}
	return potencia;
}
