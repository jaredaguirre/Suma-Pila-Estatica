#include <stdio.h>
#include <stdlib.h>
#include "C:\Users\54112\Desktop\Ejercicios en C\estatica\pila.h"

/*Suma de dos numeros cuyos digitos estan almacenados dento de pilas. El resultado se deposita en
otra pila*/
int main()
{
    tPila pila1, pila2, pila3;

    /*Creamos las tres pilas*/
    crearPila(&pila1);
    crearPila(&pila2);
    crearPila(&pila3);

    /*Cargamos las dos primeras pilas (las que vamos a sumar entre si)*/
    cargarPila(&pila1);
    cargarPila(&pila2);

    sumarPilas(&pila1, &pila2, &pila3);

    mostrarPila(&pila3);
    return 0;
}
