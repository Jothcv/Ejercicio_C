#include <stdio.h>
void guardarPalabras() 
{
    FILE *fp;
    int num_palabras, i;
    char palabra[20];
    char continuar = 's';
    fp = fopen("caracter.txt", "w");
    while (continuar == 's' || continuar == 'S') 
    {
        printf("\nIntroduzca una parabra: ");
        scanf("%s", palabra);
        fputs(palabra, fp);
        fputs("\n", fp);

        printf("\nsigue o no (s/n): ");
        scanf(" %c", &continuar);
    }
    fclose(fp);
    printf("\nse guardoron las palabras \n");
}

void mostrarPalabras() 
{
    FILE *fp;
    int num_palabras, i;
    char palabra[20];
    fp = fopen("caracter.txt", "r");
    while (!feof(fp)) {
        fgets(palabra, sizeof(palabra), fp);
        printf("\nPalabra: %s", palabra);
    }
    fclose(fp);
}
int main() 
{
    guardarPalabras();
    mostrarPalabras();
    return 0;
}