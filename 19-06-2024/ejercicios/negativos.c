#include <stdio.h>
#include <math.h>
int main(){
    {
        float num1;
        float num2;
        float VALOR1;
        float VALOR2;
        float sumato;
        
        printf("inngresa tu numero en negativo: ");
        scanf("%f",&num1);
        printf("inngresa otro numero en negativo: ");
        scanf("%f",&num2);

        VALOR1=fabs(num1);
        printf("el valor absoluto es: %f \n",VALOR1);
        VALOR2=fabs(num2);
        printf("el valor absoluto es:  %f \n",VALOR2);
        sumato=VALOR1+VALOR2;
        printf("la sumatoria de los numero absolutos es: %f \n",sumato);

        return 0;

    }
}