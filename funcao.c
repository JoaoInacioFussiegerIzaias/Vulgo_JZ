#include <stdio.h>

void main(){
    float media(float nota1, float nota2);
    float mediaPonderada(float nota1, float nota2);
    float nota1, nota2;
    
    printf("Escreva suas notas (media 10)\n");
    scanf("%f %f", &nota1, &nota2);

    printf("A media das suas notas serão %.2f\n", media(nota1,nota2));
    printf("A media ponderada das suas notas serão %.2f\n", mediaPonderada(nota1,nota2));
    

}   
float media(float nota1, float nota2){
    
    float calculoMedia = (nota1 + nota2) / 2;
    
    return (calculoMedia);
}
float mediaPonderada(float nota1, float nota2){
    
    float calculoMediaPonderada = (nota1 + nota2*2) / 3;
    
    return (calculoMediaPonderada);
}
