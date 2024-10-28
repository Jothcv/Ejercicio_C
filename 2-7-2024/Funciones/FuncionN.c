#include <stdio.h>
void SUMA(int a,int b);
int RESTA(int a,int b);
void MULTI(int a,int b);
void DIV(int a,int b);


int main(){
    {
        int num1,num2,total;
        printf("ingresa un numero: ");
        scanf("%d",&num1);
        printf("ingresa otro numero ");
        scanf("%d",&num2);
        SUMA(num1,num2);
        total=RESTA(num1,num2);
        printf("la resta es: %d \n",total);
        MULTI(num1,num2);
        DIV(num1,num2);
        
        
        return 0;
    }
}

void SUMA(int a,int b){
    
        int suma;
        suma=a+b;
        printf("la suma es: %d \n",suma);
}

int RESTA(int a,int b){
    int resta;
    resta=a-b;
    return resta;
}

void MULTI(int a,int b){
    int multi;
    multi=a*b;
    printf("la multi es: %d \n",multi);
}

void DIV(int a,int b){
    int div;
    div=a/b;
    printf("la divicion es: %d \n",div);
}




