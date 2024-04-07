#include <stdio.h>

int main(void)
{
    int dividendo, divisor;
    int cociente = 0, residuo = 0;

    printf("Por favor, ingrese el dividendo: ");
    scanf("%d", &dividendo);

    printf("Por favor, ingrese el divisor: ");
    scanf("%d", &divisor);

    if (divisor == 0) {
        printf("Error: El divisor no puede ser cero.\n");
        return 1;
    }

    if (divisor > dividendo) {
        residuo = dividendo;
    } else {
        while (dividendo >= divisor) {
            dividendo -= divisor;
            cociente++;
        }
        residuo = dividendo;
    }

    printf("El cociente es: %d\n", cociente);
    printf("El residuo es: %d\n", residuo);

    return 0;
}

