#include <stdio.h>
int main(){
        int segundo;
        int minutos;
        int horas;
        int dias;
        int semanas;
        float conver1;
        int num1,num2,num3,num4;
        float conver2;
        float conver3;
        float conver4;
        float segundo2;

        printf("ingrsa los segundos: ");
        scanf("%d",&segundo);
        conver1=segundo/604800;
        num1=segundo%604800;

        conver2=num1/86400;
        num2=num1%86400;

        conver3=num2/3600;
        num3=num2%3600;

        conver4=num3/60;
        num4=num3%60;

        segundo2=num4;

        printf(" se tardo estos semanas: %.0f \n",conver1);
        printf(" se tardo estos dias: %.0f \n",conver2);
        printf(" se tardo estos horas: %.0f \n",conver3);
        printf(" se tardo estos minutos: %.0f \n",conver4);
        printf(" se tardo estos segundos : %.0f \n",segundo2);


}