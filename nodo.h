#include <stdio.h>

typedef int DATO;
typedef struct _Nodo Nodo;

struct _Nodo{
    DATO dato;
    Nodo* sig;
};
