#include <stdio.h>
int main() {
    int num1, num2;

    printf("ingresa el primer numero: ");
    scanf("%d", &num1);
    printf("ingresa otro numero ");
    scanf("%d", &num2);

    int menor;
    if(menor=num1<num2)
        {
        printf("for");
    for (int i=menor;i<=num2;i+=2) 
        {
        printf("%d", i);
        }
        }
    return 0;
}
