#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Nodo{
    int valor;
    struct Nodo* sig;
    struct Nodo* ant;
}Nodo;
Nodo* inicio = NULL;
Nodo* final = NULL;
Nodo* L=NULL;
//FUNCION PARA GENERAR UN NÚMERO RAMDOM
int generateRamdomNumber(){
     return rand()%100;
}
//FUNCION CREAR NODO
Nodo* createNodo(){
    Nodo* n = (Nodo*)malloc(sizeof(Nodo));
     if(n==NULL){
        printf("Error de memoria :(");
        exit(0);
    }

    return n;
}
//FUNCION CREAR LISTA
Nodo* crearLista(){
    return NULL;
}

void insert(Nodo* n){
    n->sig = L;
    L=n;   
}
void insertI(int x){
    Nodo* nuevo =  createNodo();
    nuevo->valor = x;
    nuevo->sig = L;
    nuevo->ant = NULL;
}
void llenar(int x){
    Nodo* nuevo =  NULL;
    for(int i=0; i < x; i++){
        nuevo = createNodo();
        nuevo->valor = generateRamdomNumber();
        nuevo->sig = NULL;
        nuevo->ant = NULL;
        insert(nuevo);
    } 
}
void show(){
    Nodo* otroL = L;
    while(otroL!=NULL){
        printf("%d\n",otroL->valor);
        otroL = otroL->sig;
    }
}
int main(){
    time_t t;
    srand((unsigned)time(&t));
    L=crearLista();
    llenar(10);
    show();
    insertI(20);
    show();
    return 0;
}