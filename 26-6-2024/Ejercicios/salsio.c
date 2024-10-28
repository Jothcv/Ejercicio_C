#include <stdio.h>
int main(){
    {
        int menu;
        printf("\n1. volver grados elsios a grados kelvin\n2. volver grados kelvin a grados selsios \n ponga su opccion: ");
        scanf("%d",&menu);
        switch (menu)
        {
            case 1:
                float num1;
                float rel1;
                printf("ingresa para volver celsios a kelvin\n");
                scanf("%f",&num1);
                rel1=num1+273.15;
                printf("los grados celsius a kelvin son: %f",rel1);     
                break;
            case 2:
                float num2;
                float rel2;
                printf("ingrese para volver kelvin a celsius\n");
                scanf("%f",&num2);
                rel2=num1-273.15;
                printf("los grados kelvin a celsius son: %f",rel2);
                break;
            default:
                printf("no se haga el loco ese numero no esta en el menu ");
        }
        return 0;
    }
}