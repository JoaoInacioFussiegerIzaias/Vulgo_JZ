#include <stdio.h>

int maiorNumero(int vetor[], int tamanho);
int menorNumero(int vetor[], int tamanho);
    
void main(){
    int tamanho;
    
    printf("Qual vai ser o tamanho do seu vetor: \n");
    scanf("%d", &tamanho);
    int vetor[tamanho];
    printf("Escreva os numeros do vetor\n");
    for(int i = 0;i < tamanho;i++){
        scanf("%d", &vetor[i]);
    }
    printf("maior numero do vetor vai ser: %d\n", maiorNumero(vetor,tamanho));
    printf("maior numero do vetor vai ser: %d", menorNumero(vetor,tamanho));
    
}   
int maiorNumero(int vetor[], int tamanho){
    
    int maior = vetor[0];
    
    for(int i = 1;i < tamanho;i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }
    
    return maior;
}
int menorNumero(int vetor[], int tamanho){
    
    int menor = vetor[0];
    
    for(int i = 1;i < tamanho;i++){
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }
    
    return menor;
}