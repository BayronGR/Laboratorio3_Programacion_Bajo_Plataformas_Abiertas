#include <stdio.h>

// se establece que los valores ingresados tienen que ser naturales
int factorial(int n) {
    int resultado = 1;
    
    /*
     A continuación se crea la lógica detrás del factorial
     Donde la función factorial toma el número n dado por el usuario
     y lo que hace es devolver el producto de los números enteros
     que van desde 1 hasta n, lo que se traduce como factorial
    */
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int num;

    printf("Ingrese el número que desea calcularle el factorial: "); // mensaje que lee el usuario
    scanf("%d", &num);
    int fac = factorial(num);
    printf("%d! = %d\n", num, fac); // impresión del número ya calculado
    
    return 0;
}
