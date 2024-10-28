//ejercicio 5
#include <stdio.h>
int main(){
    {
        int arreglo[3];
        int arreglo2[3];
        int suma=0;
        int suma2=0;
        for(int i=0;i<3;i++){
            printf("ingresa el valor %d ",i);
            scanf("%d",&arreglo[i]);
            suma+=arreglo[i];
        }
        printf("vamos a llenar el otro arreglo \n");
        for(int j=0;j<3;j++){
            printf("ingresa el valor %d ",j);
            scanf("%d",&arreglo2[j]);
            suma2+=arreglo2[j];
        }
        printf("la suma del primero es: : %d \n",suma);
        printf("la suma del segundo es: %d \n",suma2);
        if (suma<suma2)
        {
            printf("el amyor es el segundo %d",suma2);
        }
        else if (suma>suma2)
        {
            printf("el mayor es el primero es: %d",suma);
        }
        else{
            printf("los dos son iguales los dos son:  %d ",suma);
        }
    }
}
