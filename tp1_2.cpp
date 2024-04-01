#include <stdio.h>

//a)
float punto_a(float *p_numero);
//b)
void punto_b(float *p_numero);
//d)
void Invertir(float *a, float *b);
//e)
void orden(float *p_menor, float *p_mayor);
//void punto_c(int *p_variable);

int main()
{
    float *p_numero ,numero, *p_a, a, *p_b, b, *p_mayor, mayor, *p_menor, menor;
    p_numero = &numero;
    p_a = &a;
    p_b = &b;
    p_mayor = &mayor;
    p_menor = &menor;
    //int edad, *p_edad;
    // edad = 28;
    // p_edad = &edad;
    //a)
    puts("Ingrese un numero para calcular su potencia cuadrada:");
    scanf("%f", &numero);
    printf("El resultado es: %.2f", punto_a(p_numero));
    //b)
    puts("\nIngrese un numero para calcular su potencia cuadrada:");
    scanf("%f", &numero);
    punto_b(p_numero);
    //f)
    puts("Ingrese un primer valor:");
    scanf("%f", &a);
    puts("Ingrese un segundo valor:");
    scanf("%f", &b);
    Invertir(p_a, p_b);
    puts("Ingrese el primer numero");
    scanf("%f", &mayor);
    puts("Ingrese el segundo numero");
    scanf("%f", &menor);
    orden(p_menor, p_mayor);
    return 0;
}

float punto_a(float *p_numero){
    float resultado;
    //c)
    //printf("La direccion de la variable recibida es: %p\nEl contenido de la variable recibida es: %.2f", p_numero, *p_numero);
    resultado = (*p_numero) * (*p_numero);
    return resultado;
}
void punto_b(float *p_numero){
    float resultado;
    resultado = (*p_numero) * (*p_numero);
    printf("El resultado es: %.2f", resultado);
    printf("\nLa direccion de la variable recibida es: %p\nEl contenido de la variable recibida es: %.2f\n", p_numero, *p_numero);
}
void Invertir(float *a, float *b){
    float auxiliar;
    auxiliar = *a;
    *a = *b;
    *b = auxiliar;
    printf("El primer valor es: %.2f, el segundo valor es %.2f\n", *a, *b);
}
void orden(float *p_menor, float *p_mayor){
    float auxiliar;
    if (*p_menor > *p_mayor)
    {
        auxiliar = *p_menor;
        *p_menor = *p_mayor;
        *p_mayor = auxiliar;
    }
    printf("El menor es: %.2f y el mayor es %.2f", *p_menor, *p_mayor);
}