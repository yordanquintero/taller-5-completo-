#include <stdlib.h>
#include <stdio.h>
int contarvocalA(char *s);
int contarvocalE(char *s);
int contarvocalI(char *s);
int contarvocalO(char *s);
int contarvocalU(char *s);
char nombre[40];


int main(){
    printf("ingrese su nombre: ");
    gets(nombre);
    printf("cantidad de voclaes\n");
    printf(" A: %i\n",contarvocalA(nombre));
    printf(" E: %i\n",contarvocalE(nombre));
    printf(" I: %i\n",contarvocalI(nombre));
    printf(" O: %i\n",contarvocalO(nombre));
    printf(" U: %i\n",contarvocalU(nombre));
return 0;
}


int contarvocalA(char *s){
    int cont=0;
while(*s){
    switch(*s){
    case 'a':cont++;
    break;
    }
s++;
}
return cont;
}

int contarvocalE(char *s){
    int cont=0;
while(*s){
    switch(*s){
    case 'e':cont++;
    break;
    }
s++;
}
return cont;
}

int contarvocalI(char *s){
    int cont=0;
while(*s){
    switch(*s){
     case 'i':cont++;
    break;
    }
s++;
}
return cont;
}

int contarvocalO(char *s){
    int cont=0;
while(*s){
    switch(*s){
     case 'o':cont++;
    break;
    }
s++;
}
return cont;
}

int contarvocalU(char *s){
    int cont=0;
while(*s){
    switch(*s){
     case 'u':cont++;
    break;
    }
s++;
}
return cont;
}

