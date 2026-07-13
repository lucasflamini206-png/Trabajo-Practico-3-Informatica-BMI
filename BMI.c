#include <stdio.h>

int main() {
    float peso, altura, bmi;

    do {
        printf("Ingrese el peso en kg: ");
        scanf("%f", &peso);
        if (peso <= 0) {
            printf("Error: El peso debe ser un número positivo mayor a cero.\n\n");
        }
    } while (peso <= 0);

    do {
        printf("Ingrese la altura en metros: ");
        scanf("%f", &altura);
        if (altura <= 0) {
            printf("Error: La altura debe ser un número positivo mayor a cero.\n\n");
        }
    } while (altura <= 0);

    bmi = peso / (altura * altura);

    printf("\nSu indice de masa corporal es: %.2f\n\n", bmi);

    printf("    Indice    |  Condicion\n");
    printf("-----------------------------\n");
    printf("    <18.5     |  Bajo peso\n");
    printf(" 18.5 a 24.9  |  Normal\n");
    printf(" 25.0 a 29.9  |  Sobrepeso\n");
    printf("     >=30     |  Obesidad\n");

    return 0;
}