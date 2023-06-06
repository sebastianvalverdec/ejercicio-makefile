#include <stdio.h>

int main() {
    int n = 20;
    int fibo[n];
    int i;

    fibo[0] = 0;
    fibo[1] = 1;

    for (i = 2; i < n; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    // Primeros 20 números de la serie Fibonacci
    printf("Los primeros 20 números de la serie Fibonacci son:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", fibo[i]);
    }

    return 0;
}
