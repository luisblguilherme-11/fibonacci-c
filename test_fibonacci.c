#include <stdio.h>
#include <assert.h>

int fibonacci(int n);

int main()
{

    assert(fibonacci(0) == 0);
    assert(fibonacci(1) == 1);
    assert(fibonacci(6) == 8);
    assert(fibonacci(9) == 34);

    printf("Todos os testes passaram!\n");

    printf("\nFeito por Luís Guilherme ( https://github.com/luisblguilherme-11 ) ");

    return 0;
}
