#include <stdio.h>
int main(){
    {
        char num1;
        printf("ingresa un numero para la fecha");
        scanf("%s",&num1);
        switch (num1)
        {
        case '1':
            printf("tu mes es enero tu mes tiene 31 dias ");
            break;
        case '2':
            printf("tu mes es febrero tu mes tiene 28 dias");
            break;
        case '3':
            printf("tu mes es marzo tu mes tiene 31 dias");
            break;
        case '4':
            printf("tu mes es abrirl tu mes tiene 30");
            break;
        case '5':
            printf("tu mes es mayo tu mes tiene 31 dias");
            break;
        case '6':
            printf("tu mes es junio tu mes tiene 30 dias");
            break;
        case '7':
            printf("tu mes es julio tu mes tiene 31 dias");
            break;
        case '8':
            printf("tu mes es agosto tu mes tiene 31 dias");
            break;
        case '9':
            printf("tu mes es septiembre tu mes tiene 30 dias");
            break;
        case '10':
            printf("tu mes es octubre tu mes tiene 31 dias");
            break;
        case '11':
            printf("tu mes es noviembre tu mes tiene 30 dias");
            break;
        case '12':
            printf("tu mes es diciebre tu mes tiene 31 dias");
            break;
        default:
            printf("el numero ingresado no le se puede identificar con un numero del mess");
            break;        
        }

    }
}