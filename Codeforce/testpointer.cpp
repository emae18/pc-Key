#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int main()
{
    char *apuntador = NULL; //Declaramos un puntero
    //Es recomendable inicializar un puntero en null, para detectar errores f�cilmente
    char letra; //Declaramos una variable primitiva
    apuntador = &letra; //Asignamos al apuntador la direcci�n de memoria de la variable primitiva
    *apuntador = 'x'; //Modificamos la variable a trav�s del apuntador
    cout << letra<<"\n";
    char c;
char *d;

d= &c; // asigno la direccion de c a d
c = 'u'; // asigno el valor u a mi variable c
c--; // desplazo una posicion a c
cout << *d;

    return 0;
}
