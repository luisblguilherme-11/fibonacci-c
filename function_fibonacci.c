#ifndef FUNCTION_FIBONACCI_C
#define FUNCTION_FIBONACCI_C

// Retorna o n-esimo numero da sequencia de Fibonacci
// F(0) = 0, F(1) = 1, F(n) = F(n-1) + F(n-2)
long long fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    long long anterior = 0, atual = 1;
    for (int i = 2; i <= n; i++) {
        long long proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }
    return atual;
}

#endif
