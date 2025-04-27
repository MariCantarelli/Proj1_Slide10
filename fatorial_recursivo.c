#include <stdio.h>

int fatorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * fatorial(n - 1);
}

int main() {
    int numero;

    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &numero);

    int resultado = fatorial(numero);

    printf("O fatorial de %d é %d\n", numero, resultado);

    return 0;
}