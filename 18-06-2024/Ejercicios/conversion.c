#include <stdio.h>
int main(){
    {
        float Quetz;
        float dolares=7.76;
        float totalDolares;

        float euros=0.12;
        float totaleuros;

        float mexico=2.37;
        float totamex;

        float colombia=532.56;
        float totacolom;
        
        printf("ingrese los quetzales: ");
        scanf("%f",&Quetz);
        totalDolares=Quetz/dolares;
        totaleuros=Quetz*euros;
        totamex=Quetz*mexico;
        totacolom=Quetz*colombia;
        printf("el quetzal a dolares es: %.2f \n",totalDolares);
        printf("el quetzal a euros es: %.2f \n",totaleuros);
        printf("el quetzal a pesos mexicanos son: %.2f \n",totamex);
        printf("el quetzal a pesos colombianos serian %.2f \n",totacolom);
        return 0;
    }
        
}