#include <stdio.h>

int main(){

    int a = 0;
    int b = 0;
    printf("Digite o angulo a: ");
    scanf("%i",&a);
    printf("Digite o angulo b: ");
    scanf("%i",&b);
    int soma = a + b;
    if(soma > 360){
        soma = soma - 360;
    }
    printf("A soma dos angulos eh %i",soma);







return 0;
}
