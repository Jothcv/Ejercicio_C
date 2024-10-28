#include <stdio.h>
int main() {
    int numNotas = 7;
    int correctas = 0, incorrectas = 0;
    int i = 1;
    
    while (i <= numNotas) 
    {
        double nota;
        printf("Ingrese la nota %d",i);
        scanf("%lf", &nota);
        
        if (nota>5.1) 
        {
            correctas++;
        } else 
        {
            incorrectas++;
        }
        i++;
    }
    
    printf("Notas correctas: %d\n", correctas);
    printf("Notas incorrectas: %d\n", incorrectas);
    
    return 0;
}