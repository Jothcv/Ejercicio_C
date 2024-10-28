#include <stdio.h>
int main(){
    {
        float tiempo;
        float distancia;
        float velocidadTotal;
        printf("ingresa el tiempo que reccoriste con el auto \n");
        scanf("%f",&tiempo);
        printf("ingresa la distancia que recorristes: \n");
        scanf("%f",&distancia);
        velocidadTotal=tiempo/distancia;
        printf("la velocidad en la que iva el automovil es: %f \n",velocidadTotal);


    }
}