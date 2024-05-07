#include <stdio.h>

int NumeroTriangular(int n) {

    //Fórmula para el número triangular explicada en el reporte = (n^2 + n) / 2
    return ((n * n) + n) / 2;
}

int main() {
    int primeroscien = 100;

    // Se establece el límite para los primeros 100 números triangulares
    for (int i = 1; i <= primeroscien; i++) {
        printf("El numero triangular %d es: %d\n", i, NumeroTriangular(i)); // se imprimen mostrando cual es el número triangular respectivo
    }

    return 0;
}