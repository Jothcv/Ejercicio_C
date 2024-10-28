#include <stdio.h>
int main(){
    {
        int arreglo[5];
        for(int i=0;i<5;i++){
            printf("escribir el valor de [%d]:",i);
            scanf("%d",&arreglo[i]);
        }
        for(int j=0;j<5;j++){
            printf("el valor es: %d \n",arreglo[j]);
        }
        return 0;
    }
}
