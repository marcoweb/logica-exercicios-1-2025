#include <stdio.h>

int main() {
    int vetor[10];

    for(int pos = 0; pos < 10; pos++) {
        printf("Digite um número inteiro [%d]:", pos);
        scanf("%d", &vetor[pos]);
    }

    for(int pos = 0; pos < 10; pos++) {
        if((vetor[pos] % 2) == 0) {
            printf("%d\n", vetor[pos]);
        }
    }

    return 0;
}