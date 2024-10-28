#include <stdio.h>

int main (){
    {
        char voca;

        printf("ingresa una letra o un numero");
        scanf("%s",&voca);

        switch (voca)
        {
            case 'a':
            case 'A':
                printf("el que ingreso es una vocal es a");
                break;
            case 'e':
            case 'E':
                printf("el que ingreso es una vocal es e");
                break;
            case 'i':
            case 'I':
                printf("el que ingreso es una vocal es i");
                break;
            case 'o':
            case 'O':
                printf("el que ingreso es una vocal es o");
                break;
            case 'u':
            case 'U':
                printf("el que ingreso es una vocak es u");
                break;
            case '1':
                printf("el que ingreso es un digito es 1");
                break;
            case '2':
                printf("el que ingreso es un digito es 2");
                break;
            case '3':
                printf("el que ingireso es un digito es 3");
                break;
            case '4':
                printf("el que ingreso es un digito es 4");
                break;
            case '5':
                printf("el que ingreso es un digito es 5");
                break;
            case '6':
                printf("el que ingreso es un digito es 6");
                break;
            case '7':
                printf("el que ingreso es un digito es 7");
                break;
            case '8':
                printf("el que ingreso es un digito es un 8");
                break;
            case '9':
                printf("el que ingreso es un digito es un 9");
                break;
            default:
                printf("pasa del digito y tampoco es una vocal");
                break;


        }
    }
}