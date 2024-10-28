#include <stdio.h>
int main(){
    {
        int salario;
        int dias;
        int horas;
        float totaHoras;
        float totalDias;
        printf("ingrese su salario ");
        scanf("%d",&salario);

        printf("ingrese cuantas horas trabaja al dia ");
        scanf("%d",&horas);

        printf("cuantos dias trabaja: ");
        scanf("%d",&dias);

        totaHoras=salario/dias;
        totalDias=totaHoras/horas;
        printf("lo que usted gana por hora es %.2f \n",totalDias);
        return 0;
    }
}