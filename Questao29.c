#include <stdio.h>

int main() {
    int n, i;

    scanf ("%d", &n);
    int digitos [n];
    long long numero = 0;

    for (i = 0; i < n; i++) {
        scanf("%d", &digitos[i]);
    }

    for (i = 0; i < n; i++) {
        numero = numero * 10 + digitos[i];
    }
     printg("%lld\n", numero );
     return 0;
 }