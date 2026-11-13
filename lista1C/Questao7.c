
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, hipotenusa;

    printf("Digite o primeiro cateto: ");
    scanf("%lf", &a);

    printf("Digite o segundo cateto: ");
    scanf("%lf", &b);

    hipotenusa = sqrt(a * a + b * b);

    printf("Hipotenusa: %.2f\n", hipotenusa);

    return 0;
}
