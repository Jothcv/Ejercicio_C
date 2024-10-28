
#include <stdio.h>
int main(){
    {
        int num1,num2,num3,num4,num5;
        printf("ingresa un numero ");
        scanf("%d",&num1);
        printf("ingresa otro numero ");
        scanf("%d",&num2);
        printf("ingresa otro numero ");
        scanf("%d",&num3);
        printf("ingresa otro numero ");
        scanf("%d",&num4);
        printf("ingresa otro numero ");
        scanf("%d",&num5);        

        if(num1>num2 && num2>num3 && num3>num4 && num4>num5)
        {
            printf("los numeros ingresados estan ordenados descendentemente");
        }
        else if (num1<num2 && num2<num3 && num3<num4 && num4<num5)
        {
            printf("los numeros ingresados estan ordeanados asendentemente");
        }
        else
        {
            printf("los numeros ingresados estan desordenados");
        }
        
    }
}