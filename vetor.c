#include <stdio.h>

int main() {
    int valores[10];
    int i, maiorValor;

    printf("Digite 10 valores:\n");
    for (i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    maiorValor = valores[0];

    for (i = 1; i < 10; i++) {
        if (valores[i] > maiorValor) {
            maiorValor = valores[i];
        }
    }

    printf("\nO maior valor digitado é: %d\n", maiorValor);

    return 0;
}
