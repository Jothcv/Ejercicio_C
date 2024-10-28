#include <stdio.h>
int main(){
    FILE *archivo;
    char palabras2[50];
    int rep;
    archivo= fopen("palabras2.txt","w");
    printf("ingresa las veces que quieras repetir la palabra: ");
    scanf("%d",&rep);
    for (int i = 0; i < rep; i++)
    {
        printf("ingresa la palabra %d",i+1);
        scanf("%s", palabras2);
        fprintf(archivo, "%s\n", palabras2);
    }
    fclose(archivo);
    printf("Se han escrito las palabras en el archivo palabra\n");
    return 0;
    
}
