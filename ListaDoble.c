#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Nodo{
    int valor;
    Nodo* sig;
    Nodo* ant;
}Nodo;
Nodo* inicio = NULL;
Nodo* final = NULL;
//FUNCION PARA GENERAR UN NÚMERO RAMDOM
int generateRamdomNumber(){
     return rand()%100;
}
//FUNCION CREAR NODO
Nodo* createNodo(){
    Nodo* n = (Nodo*)malloc(sizeof(Nodo));
    return n;
}
void insertI(int x){
    Nodo* n = createNodo();
    n->valor = x;
    n->sig = NULL;
    n->ant = NULL;
    
}
int main(){
    time_t t;
    srand((unsigned)time(&t));
    while (1){
        printf("1-insertar al inicio\n");
        printf("2-insertar al final\n");
        printf("3-eliminar en i\n");
    }

    return 0;
}