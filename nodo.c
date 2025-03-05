
#include "nodo.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

Nodo* crear_nodo(Nodo* N){
    Nodo *nuevo=(Nodo*)malloc(sizeof(Nodo));
    nuevo -> sig = N;
    nuevo -> dato =0;

    return nuevo;
}

bool borrar_nodo(Nodo *n){
    if(n->sig == NULL){
        free (n);
        return true;
    }

    return false;
}

Nodo *asignar_dato(Nodo *n, DATO d){
    if (n != NULL){
        n->dato=d;
    }
    return n;
}

DATO Obtener_dato(Nodo* n){
    if(n == NULL){
        printf("No hay datos \n");
        return -1;
    }
    return n->dato;
}

Nodo *Asignar_referencia(Nodo *n, Nodo *e){
    if(n!=NULL){
        n->sig=e;
    }
    return n;
}

Nodo *obtener_ref(Nodo *c){
    if (c!= NULL){
        return c->sig;
    }
    return NULL;
}