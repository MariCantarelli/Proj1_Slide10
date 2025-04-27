#include <stdio.h>

// Está é uma função que calcula o fatorial de um número
int fatorial(int n) {
    int r = 1;
    for (int i = n; i >= 1; i--)
        r = r * i;
    return r;
} 

int main() {
    int numero;

    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &numero);

    int resultado = fatorial(numero);

    printf("O fatorial de %d é %d\n", numero, resultado);

    return 0;
}

