#include <stdio.h>

main(){
    float altura;
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    if (altura >= 1.8){
        printf("Você e gigante!");}
    else {
        printf("Você ainda e um anão!");
    }
}