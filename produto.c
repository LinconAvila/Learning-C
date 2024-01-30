#include <stdio.h>

int main() {
    int p = 0;
    int q = 0;
    float custo = 0.0;
    printf("Digite o codigo do produto: ");
    scanf("%d", &p);
    printf("Digite a quantidade do produto: ");
    scanf("%d", &q);
    if(p == 1) {
        custo = 1.10;
    } else if(p == 2) {
        custo = 2.30;
    } else if(p == 3) {
        custo = 4.70;
    }
    float total = q * custo;
    printf("O custo total é: %.2f\n", total);

    return 0;
}
