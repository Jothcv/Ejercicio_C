#include <stdio.h>
#include <string.h>
int main(){
    {
        char frase1[1000];
        char frase2[1000];
        printf("ingrese una frase: ");
        scanf("%s",frase1);
        printf("ingresa una segunda frase: ");
        scanf("%s",frase2);
        printf("la frase 1 se convirtio a la segunda: ");
        strcpy(frase1,frase2);
        printf("frase 1 es: %s \n ",frase1);
        return 0;
    }
}