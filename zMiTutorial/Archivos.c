#include <stdio.h>
int main(){
    
    FILE *archivo

    archivo=fopen("datos.txt","w");

    fprintf(archivo,"Este es un ejemplo waza ")
    fclose(archivo);

    archivo =fopen("datos.txt","r")
    return 0;
}