#include <stdio.h>
#include <stdlib.h>
int main(){
    const char *archivo1 = "file:///C:/Users/JONATHAN/Desktop/ExamenPdfm.pdf";
    char command[256];
    snprintf(command,sizeof(command),"start \"\" \"%s\"",archivo1);
    int result=system(command);
    if (result==-1)
    {
        printf("error no se pudo completar ");
    }
    else{
        printf("el archivo se ejecuto con exito");
    }
}
