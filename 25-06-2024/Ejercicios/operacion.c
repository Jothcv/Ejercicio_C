#include <stdio.h>
#include <math.h>
int main(){
    {
        float a;
        float b;
        float c;
        float xpos;
        float xmen;
        float solu1;
        float solu2;
        float solu3;
        float solu4;
        float solu5;
        float solu6;
        float solu7;
    
        printf("ingresa un numero ");
        scanf("%f",&a);
        printf("ingres un numero ");
        scanf("%f",&b);
        printf("ingresa otro numero ");
        scanf("%f",&c);

        solu1=-4*a*c;

        solu2=b*b;
        solu3=solu1+solu2;
        solu4=sqrt(solu3);
        solu5=-b+solu4;
        solu6=-b-solu4;
        solu7=2*a;
        xpos=solu5/solu7;
        xmen=solu6/solu7;

        if (c==10)
        {
            printf("los datos que ingreso no son permitidos");
        }
        else
        {
        printf("%.2f \n",xpos);
        printf("%.2f",xmen);
        }
        


        

        /*esta es otra forma
        pero esto se puede hacer con un espacio*/
        

}
}