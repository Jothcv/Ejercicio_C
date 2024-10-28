#include <stdio.h>
int main(){
    FILE *fp;
    char leido[10];
    fp=fopen("caracter.txt","r");
    fgets(leido,sizeof(leido)/sizeof(char),fp);
    fclose(fp);
    printf("\nel caracter leido es %c\n",leido);
    return 0;
}   

