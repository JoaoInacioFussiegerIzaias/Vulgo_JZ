#include <stdio.h>

float media(float *a, float *b);
float mediaPonderada(float *a, float *b);
    
void main(){
    
    float nota1, nota2;
    
    printf("Escreva suas notas (media 10)\n");
    scanf("%f %f", &nota1, &nota2);
    printf("A media das suas notas serão %.2f\n", media(&nota1,&nota2));
    printf("A media ponderada das suas notas serão %.2f\n", mediaPonderada(&nota1,&nota2));
    
}   
float media(float *a, float *b){
    
    float calculoMedia = (*a + *b) / 2;
    
    return calculoMedia;
}
float mediaPonderada(float *a, float *b){
    
    float calculoMediaPonderada = (*a + *b*2) / 3;
    
    return calculoMediaPonderada;
}
