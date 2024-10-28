#include <stdio.h>
#include <string.h>

int main(){
    {
        char cadena[20]="hola\n";
        char cadena2[20];
        char cadena3[20]="hola\n";
        int num1;
        int num2=strcmp(cadena,cadena3);
        num1=strlen(cadena);
        printf("la longitud de la cadena es : %d \n",num1);
        strcpy(cadena2,cadena);

        printf("la nueva cadenas: %s \n ",cadena2);

        printf("%s",strcat(cadena,cadena3));
        printf("%s",strncat(cadena,cadena3,5));

        printf("\nnose %d \n",num2);

        return 0;
    }
}