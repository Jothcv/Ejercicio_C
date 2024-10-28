#include <stdio.h>

int main() {
    int numNotas = 7;
    int correctas = 0;
    int incorrectas = 0;
    for (int i=1;i<=numNotas;++i) 
    {
        double nota;
        printf("ponga la nota %d entre uno y 10 ", i);
        scanf("%lf", &nota);
        
        if (nota > 5.1) 
        {
            correctas++;
        } else 
        {
            incorrectas++;
        }
    }
    printf("notas correctas %d\n", correctas);
    printf("notas incorrectas %d\n", incorrectas);   
    return 0;
}
