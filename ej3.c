#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

    int matriz[tam_max][tam_max];

    srand(time(NULL)); // Se inicializa el comando rand, el cual hace que la matriz se rellene de manera aleatoria

    printf("La matriz generada es:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = rand() % 2; 	// Genera los valores binarios 
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    /*
Se crea el algoritmo que recorre la matriz.
Se analiza cada posición de la matriz y se expande alrededor de dicha posición
Se expande hasta que encuentra un cuadrado más grande o llega al límite
*/

    int limite = 0;
    for (int i = 0; i < n; i++) // valor inicial de la fila
        for (int j = 0; j < n; j++) // valor inicial de la columna
            if (matriz[i][j] == 1) {
                int size = 1;
                while ((i + size) < n && (j + size) < n) {
                    int valid = 1;
                    for (int k = i; k <= i + size; k++)
                        for (int l = j; l <= j + size; l++)
                            if (matriz[k][l] != 1) {
                                valid = 0;
                                break;
                            }
                    if (valid) limite = size + 1;
                    else break;
                    size++;
                }
            }

    printf("El tamaño del cuadrado más grande encontrado en la matriz es: %d\n", limite);

    return 0;
}