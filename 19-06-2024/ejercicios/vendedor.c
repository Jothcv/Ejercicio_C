#include <stdio.h>
int main(){
    {
        int venta1;
        int venta2;
        int venta3;
        int sueldBase=5000;
        int suma;
        int porce;
        printf("ingresa tu primera venta: \n");
        scanf("%d",&venta1);
        printf("ingresa tu segunda venta: \n");
        scanf("%d",&venta2);
        printf("ingresa tu tercera venta: \n");
        scanf("%d",&venta3);
        suma=venta1+venta2+venta3;
        porce=(suma*0.10)+sueldBase;
        printf("total por comisiones serian: %d",porce);
        
    }
}