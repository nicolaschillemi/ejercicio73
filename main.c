#include <stdio.h>

void main(){

    int a, b, c;

    printf("Ingrese 3 numeros enteros separados por un espacio: ");
    scanf("%i %i %i",&a,&b,&c);

    if(a<b){
        if(a<c){
            if(b<c){
                printf("El orden de menor a mayor es: %i, %i, %i ",a,b,c);
            }
            else printf("El orden de menor a mayor es: %i, %i, %i ",a,c,b);
        }
        else printf("El orden de menor a mayor es: %i, %i, %i ",c,a,b);
    }
    else {
        if(b<c){
            if(a<c){
                printf("El orden de menor a mayor es: %i, %i, %i ",b,a,c);
            }
            else printf("El orden de menor a mayor es: %i, %i, %i ",b,c,a);
        }
        else printf("El orden de menor a mayor es: %i, %i, %i ",c,b,a);
    }

}