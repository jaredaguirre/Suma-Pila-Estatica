#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "C:\Users\54112\Desktop\Ejercicios en C\estatica\pila.h"

//Para este ejercicio el entorno de prueba debe contar con TAM_INFO = 32 bytes

/*Cargar la pila indicada con enteros*/
void cargarPila(tPila *p)
{
    int temp;
    while(!pilaLlena(p, sizeof(int)))
    {
        puts("Ingresar elemento entero: \n");
        scanf("%d", &temp);
        ponerEnPila(p, &temp, sizeof(int));
    }
}

/*Suma las pilas 1 y 2, y el resultado lo coloca en una pila 3*/
void sumarPilas(tPila * p1, tPila *p2, tPila *p3)
{
    int a, b, c;
    while(!pilaVacia(p1) && !pilaVacia(p2))
    {
        sacarDePila(p1, &a, sizeof(int));
        sacarDePila(p2, &b, sizeof(int));

        c = a + b;
        ponerEnPila(p3, &c, sizeof(int));
    }
}

/*Muestra el contenido de la Pila*/
void mostrarPila(tPila* p)
{
    int a;
    puts("Mostrando la pila...\n");
    while(!pilaVacia(p))
    {
        sacarDePila(p, &a, sizeof(int));
        printf("%d ", a);
    }
}
