#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char nome[20];
    int idade = 0;
    float peso = 0;
    
    printf("Digite seu nome: ");
    scanf("%s", &nome);
    char letra = nome[0];

    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Voce se chama %s, tem %d anos e pesa %.2f kilos. \n", nome, idade, peso);
    printf("A primeira letra do seu nome eh %c.\n", letra);

    system("pause");
    return 0;
}