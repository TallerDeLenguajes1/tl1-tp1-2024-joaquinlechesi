#include <stdio.h>

int main()
{
    int edad, *p_edad;
    edad = 28;
    p_edad = &edad;
    puts("Hola mundo");
    printf("El puntero declara contiene: %d", p_edad);
    printf("\nLa direccion de memoria almacenada por el puntero es: %p", p_edad);
    printf("\nLa direccion de memoria de la variable es: %p", &edad);
    printf("\nLa direccion de memoria del puntero es: %p", &p_edad);
    printf("\nEl tamanio de memoria utilizado por la variable es: %zu", sizeof(int));
    return 0;
}
