#include <stdio.h>
int main(){
    {
        int MES;
        printf("ingresa el numero perteneciente de un mes: ");
        scanf("%d",&MES);
        if (MES==1)
            {
                printf("tu mes es enero tu mes tiene 31 dias ");
            }
        else if (MES==2)
            {
                printf("tu mes es febrero tu mes tiene 28 dias");
            }
        else if (MES==3)
            {
                printf("tu mes es marzo tu mes tiene 31 dias");
            }
        else if (MES==4)
            {
                printf("tu mes es abrirl tu mes tiene 30");
            }
        else if (MES==5)
            {
                printf("tu mes es mayo tu mes tiene 31 dias");
            }
        else if (MES==6)
            {
                printf("tu mes es junio tu mes tiene 30 dias");
            }
        else if (MES==7)
            {
                printf("tu mes es julio tu mes tiene 31 dias");
            }
        else if (MES==8)
            {
                printf("tu mes es agosto tu mes tiene 31 dias");
            }
        else if (MES==9)
            {
                printf("tu mes es septiembre tu mes tiene 30 dias");
            }
        else if (MES==10)
            {
                printf("tu mes es octubre tu mes tiene 31 dias");
            }
        else if (MES==11)
            {
                printf("tu mes es noviembre tu mes tiene 30 dias");
            }
        else if (MES==12)
            {
                printf("tu mes es diciebre tu mes tiene 31 dias");
            }
        else
            {
                printf("el numero ingresado no le se puede identificar con un numero del mess");
            }       
        
        return 0;
    }
}