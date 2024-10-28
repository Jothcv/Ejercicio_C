#include <stdio.h>
int main(){
    {
        float metros;
        float pulgadas=39.37;
        float pies=3.28;
        float totalk;
        float totalpulgadas;
        float totalpie;
        printf("ingrese tus metros y te lo mostrare en kilometros, pulgadas, pies\n");
        scanf("%f",&metros);
        totalk=metros/1000;
        totalpulgadas=metros*pulgadas;
        totalpie=metros*pies;
         printf("m a kilometros son %.10f \n",totalk);
         printf("m a pulgadas son %.1f \n",totalpulgadas);
         printf("m a pies son %.1f \n",totalpie);
        return 0;
    }
}