#include <stdio.h>

main(){
    float peso;
    printf("Digite seu peso: ");
    scanf("%f", &peso);

    if (peso < 60){
        printf("Precisa se alimentar melhor!");}
    else {
        printf("Tudo certo!");
    }
}