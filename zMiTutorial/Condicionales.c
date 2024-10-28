#include <stdio.h>
int main(){
    
    int x=10;

    //if else
    

    //elif
    if (x>0)
    {
        printf("tu numero es positivo ");
    }
    else if (x==0)
    {
        printf("tu nuero es 0");
    }
    else{
        printf("tu numero es negativo");
    }


    switch (x)
    {
    case 10:
        printf("x es dies");
        break;
    default:
        printf("x no es dies");
        break;
    }
    
    return 0;
}