#include <stdio.h>
#include <stdlib.h>
int main(){
    const char *archivoMP3="C:/Users/JONATHAN/Desktop/cancion.mp3";
    char command[256];
    snprintf(command,sizeof(command), "start \"\" \"%s\"",archivoMP3);
    int result=system(command);
    if (result==-1){}
    {
        printf("Eroro 4i2j4");
    }
    printf("archivo abierto bien");
}
