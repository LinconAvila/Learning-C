#include <stdio.h>

#define text "Entrada e saida de dados."

int main(){
    printf("%s\n", text);

    int idade = 0;
    float altura = 0.0;
    char nome[50] = "";

    printf("Digite a idade:");
    scanf("%d,&idade");

    printf("Digite a altura: ");
    scanf("%f",&altura);
}