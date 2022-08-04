#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 10\n\n");
    int tam=5;
    int numero[tam];

    for(int i=0; i<tam; i++){
        printf("\n Digite os numeros: ");
        scanf("%d", &numero[i]);
    }
    int min=numero[0];
    int posicaoMin=0;

    for(int j=0; j<tam; j++){
        min=numero[j];
        posicaoMin=j;
        for(int i=j; i<tam; i++){
           if(min>numero[i]){
           min=numero[i];
           posicaoMin=i;
           }
        }
        if(posicaoMin!=j){
        numero[j]=numero[j] + numero[posicaoMin];
        numero[posicaoMin]= numero[j] - numero[posicaoMin];
        numero[j]=numero[j] - numero[posicaoMin];
        }
    }
    for(int i=0; i<tam; i++){
        printf("%d ", numero[i]);
    }
    return 0;
}
