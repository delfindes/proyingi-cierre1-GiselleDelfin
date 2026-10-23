#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, suma;

    printf("Ingresa el primer numero: ");
    scanf("%d", &num1);

    printf("Ingresa el segundo numero: ");
    scanf("%d", &num2);

    suma = num1 + num2;

    printf("La suma es: %d\n", suma);

    system("pause");
    return 0;
}
