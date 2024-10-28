#include <stdio.h>
int main(){
    {
        float nota1;
        float nota2;
        float nota3;
        float notaExamen;
        float notaTrabajo;
        float promedio;
        float porce55;
        float porce30;
        float porce15;
        float NotaFinal;
        
        printf("ingresa tu primera nota: \n");
        scanf("%f",&nota1);
        printf("ingresa tu segunda nota \n");
        scanf("%f",&nota2);
        printf("ingresa tu tercera nota \n");
        scanf("%f",&nota3);
        promedio=(nota1+nota2+nota3)/3;
        porce55=promedio*0.55;
        printf("le sacamos el 55 porciento a tu promedio entonces tu promedio sera: %f",porce55);
        printf("\n");

        printf("cuantos sacaste en el examen final? ");
        scanf("%f",&notaExamen);
        porce30=notaExamen*0.30;
        printf("lo que scaste en el examen le sacamos el 30 el valor del examen sera: %f",porce30);
       

        printf("cuanto sacaste en el trabajo final ");
        scanf("%f",&notaTrabajo);
        porce15=notaTrabajo*0.15;
        printf("lo que usted saco en su trabajo final con el porcentaje del 0.15 es: %f",porce15);
        printf("\n");

        NotaFinal=(porce55+porce30+porce15);
        printf("la nota final es: %.2f",NotaFinal);


        
    }
}