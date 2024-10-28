#include <stdio.h>
int main(){
    FILE *archivo;
    char palabra[50];
    archivo=fopen("palabras.txt","r");
    for (int i = 0; i < 5; i++)
    {
        fgets(palabra,sizeof(palabra)/sizeof(char),archivo);
        printf("\nel caracter leido es %s\n",palabra);
    }
    fclose(archivo);
    return 0;
}   
