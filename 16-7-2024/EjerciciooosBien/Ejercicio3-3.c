#include <stdio.h>
int main(){
    FILE *archivo;
    char palabras2[50];
    int rep;
    archivo=fopen("palabras2.txt","r");
    printf("ingresa el numero de veces a repetir");
    scanf("%d",&rep);
    for (int i = 0; i < rep; i++)
    {
        fgets(palabras2,sizeof(palabras2)/sizeof(char),archivo);
        printf("\nel caracter leido es %s\n",palabras2);
    }
    fclose(archivo);
    printf("Se han escrito las palabras en el archivo palabra\n");
}