#include <stdio.h>

int main()
{

    float peso, alt, imc;

    printf("Digite o seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &alt);

    imc = peso/(alt * alt);

    printf("\nIMC: %.1f", imc);

}
