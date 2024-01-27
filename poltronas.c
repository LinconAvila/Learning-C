#include <stdio.h>

int main(){

    int assentos[40] = {1};
    int len = sizeof(assentos)/sizeof(assentos[0]);
    printf("%lu",len);
    int poltrona;
    int ocupada;

    for(int i = 0;i<len;i++){
        int ocupada = 0;
        printf("Escolha a sua poltrona (0 para encerrar): ");
        scanf("%i",&poltrona);
        if(poltrona == 0){
            break;
        }
        else{
            for(int j = 0;j<len;j++){
                if(assentos[j] == poltrona){
                    printf("Poltrona ocupada, escolha outra: \n");
                    ocupada = 1;
                    break;
                }
            }
        }
        if(ocupada == 0){
            assentos[i] = poltrona;
            printf("Reserva efetuda com sucesso!\n");
        }
        else{
            i--;
        }
    }


return 0;
}
