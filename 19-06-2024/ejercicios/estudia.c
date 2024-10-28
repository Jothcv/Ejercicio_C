#include <stdio.h>
int main(){
    {
        float hombres;
        float mujeres;
        float estduiantesH;
        float suma;
        float estduiantesF;

        printf("dime cuantos hombres hay en la clase? ");
        scanf("%f",&hombres);
        printf("dime cuantas mujeres hay en una clase? ");
        scanf("%f",&mujeres);
        //suma
        suma=hombres+mujeres;
        estduiantesH=(hombres*100)/suma;

        estduiantesF=(mujeres*100)/suma;

        printf("el porcentaje que representa los hombre es: %f",estduiantesH);
        printf("\n");
        printf("el porcentaje que representa los mujeres es: %f",estduiantesF);
        




        //canidad de hombre *100/cantidad total



        
    }
}