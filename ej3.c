#include <stdio.h>
// se define la matriz máxima 
#define tam_max 10


int main() {
    int n;
    printf("Ingrese el tamaño de la matriz que desea generar aleatoriamente 1 mínimo y 10 máximo: ");
    scanf("%d", &n);
    if (n < 1 || n > 10) {
        printf("El tamaño seleccionado no es válido. Se utilizará el valor por defecto 7.\n");   // valor predeterminado en caso de elegir un valor fuera de rango
        n = 7;
    }
}