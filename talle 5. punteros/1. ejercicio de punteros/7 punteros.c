#include <stdlib.h>
#include <stdio.h>
int contarvocal(char *s);
char nombre[40];


int main(){
    printf("ingrese su nombre: ");
    gets(nombre);
    printf("el numero de vocales es: %i",contarvocal(nombre));
return 0;
}


int contarvocal(char *s){
    int cont=0;

while(*s){
    switch(*s){
    case 'a':cont++;
    break;
    case 'e':cont++;
    break;
     case 'i':cont++;
    break;
     case 'o':cont++;
    break;
     case 'u':cont++;
    break;

    }
s++;
}
return cont;
}






