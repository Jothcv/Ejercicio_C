#include <stdio.h>
int main(){
    FILE *fp;
    char caracter[10];
    printf("\nIntroduce caracter: \n");
    scanf("%s",&caracter);
    fp=fopen("caracter.txt","w");
    fputs(caracter,fp);
    fclose(fp);
    printf("\ncaracter guardado en el fichero\n");
    return 0;
}           
