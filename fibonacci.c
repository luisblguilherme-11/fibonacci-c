#include <stdio.h>
#include "function_fibonacci.c"

int main() {
    int n;

    printf("Digite a posicao na sequencia de Fibonacci (>= 0): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: o numero deve ser maior ou igual a zero.\n");
    } else {
        long long resultado = fibonacci(n);
        printf("F(%d) = %lld\n", n, resultado);
    }

    printf("Criado por Luís Guilherme");
    return 0;
}
