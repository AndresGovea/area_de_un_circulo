// area de un cuadrado.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

void main(void)
{
	int lado;
    int area;
    printf("lado:");
    scanf_s("%i", &lado);
    area = lado * lado;
    printf("El área del cuadrado es: %i", area);
}
 