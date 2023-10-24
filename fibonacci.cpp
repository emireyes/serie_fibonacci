#include <stdio.h>

void generateFibonacci(long long n, long long current, long long prev, long long currentTerm) {
    if (currentTerm <= n) {
        if (prev >= 0) {
            printf("Termino %lld: %lld\n", currentTerm, prev);
        }
        generateFibonacci(n, current + prev, current, currentTerm + 1);
    }
}

int main() {
    long long n;

    printf("Ingresa el numero de terminos de la serie de Fibonacci que deseas calcular: ");
    scanf("%lld", &n);

    printf("Serie de Fibonacci positiva hasta %lld terminos: \n");

    if (n < 0) {
        printf("No se admiten numeros negativos en la serie de Fibonacci.\n");
        return 1;
    }

    generateFibonacci(n, 1, 0, 1);

    return 0;
}

