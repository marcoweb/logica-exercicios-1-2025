#include <stdio.h>

int main() {
    float notas[3];
    float media, soma = 0;

    for(int pos = 0;pos < 3;pos++) {
        printf("Digite o valor da nota %d : ", pos);
        scanf("%f", &notas[pos]);
    }

    for(int pos = 0; pos < 3;pos++) {
        soma += notas[pos];
        // soma = soma + notas[pos];
    }

    media = soma / 3;

    printf("A média das notas é: %f\n", media);

    if(media >= 7) {
        printf("Aluno Aprovado\n");
    } else if(media >= 5) {
        printf("Aluno em Recuperação\n");
    } else {
        printf("Aluno Reprovado\n");
    }

    return 0;
}