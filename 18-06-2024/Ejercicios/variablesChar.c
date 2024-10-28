#include <stdio.h>
int main(){
    {
        char a[5];
        char texto[]="Hola";
        int b;
        int c;
        float d;
        double e;
        b=sizeof(a);
        printf("el numero de bites de la variable a es: %d \n ",b);
        b=sizeof(c);
        printf("el numero de bites de la variable c es: %d \n ",b);
        b=sizeof(d);
        printf("el numero de bites de la variable d es: %d \n ",b);
        b=sizeof(e);
        printf("el numero de bites de la variable c es: %d \n",b);
        printf("el texto principal es: %s",texto);

        return 0;
        
    }
}