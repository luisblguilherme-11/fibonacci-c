#include <stdio.h>

int fibonacci(int n);

int main()
{

    int n;

    printf("Digite a posicao: ");
    scanf("%d", &n);

    printf("F(%d) = %d\n", n, fibonacci(n));

    printf("\nFeito por Luís Guilherme ( https://github.com/luisblguilherme-11 ) ");

    return 0;
}
