#include <stdio.h>

int main() {
    char nome[50];

    printf("Digite seu nome: ");
    scanf("%50[^\n]", nome);

    printf("Bom dia %s\n", nome);

    return 0;
}