#include <stdio.h>
int main(){
    {
        char num1;
        printf("ingrese una letra ");
        scanf("%s",&num1);
        switch(num1)
        {
            case 'a':
            case 'A':
                printf("la letra es a");
                break;
            case 'e':
            case 'E':
                printf("la letra es e");
                break;
            case 'i':
            case 'I':
                printf("la letra es i");
                break;
            case 'o':
            case 'O':
                printf("la letra es o");
                break;
            case 'u':
            case 'U':
                printf("la letra es u");
                break;

            default:
                printf("la letra ingresada no es una vocal");
            return 0;
        }
    }
}