#include <stdio.h>
int main(){
    {
        float precioCosto;
        float margenGanancia;
        float precioNeto;
        printf("ingrese el costo del producto ");
        scanf("%f",&precioCosto);
        printf("ingrese el margen ");
        scanf("%f",&margenGanancia);
        precioNeto=precioCosto*(100+margenGanancia)/100;
        printf("el precio neto del producto es %f \n",precioNeto);
        return 0;
    }
}