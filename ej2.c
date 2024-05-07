#include <stdio.h>

// Se toma como base el código proporcionado
int factorial(int n) {
    int i = 1;
    while (n > 1) {
        i = i * n;
        n = n - 1;
    }
    return i;
}

// se hacen las modificaciones para calcular el factorial proporcionado
// el factorial solo se puede calcular para números enteros positivos

int main() {
    int num;

    printf("Ingrese el número que desea calcularle el factorial: "); // mensaje que lee el usuario
    scanf("%d", &num);
    int fac = factorial(num);
    printf("%d! = %d\n", num, fac); // impresión del número ya calculado
    
    
    return 0;
}
