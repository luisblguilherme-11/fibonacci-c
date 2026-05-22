#include <stdio.h>
#include "function_fibonacci.c"

int main() {
    printf("Testando Fibonacci:\n");

    printf("F(0) = %lld\n", fibonacci(0));   // Esperado: 0
    printf("F(1) = %lld\n", fibonacci(1));   // Esperado: 1
    printf("F(6) = %lld\n", fibonacci(6));   // Esperado: 8
    printf("F(9) = %lld\n", fibonacci(9));   // Esperado: 34

    printf("Criado por Luís Guiherme");
    return 0;
}
