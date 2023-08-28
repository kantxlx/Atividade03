#include<stdio.h>

main(){
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18){
        printf("Você já e maior de idade!");}
    else {
        printf("Você ainda e de menor!");
     }
}