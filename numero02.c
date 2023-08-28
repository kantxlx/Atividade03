#include <stdio.h>

main(){
    int salario;
    printf("Digite o seu salario: ");
    scanf("%d", &salario);

    if (salario > 1320){
        printf("Você recebe mais que um salario minimo!");}
    else {
        printf("Você ainda não recebe mais que um salario minimo!");
    }
}