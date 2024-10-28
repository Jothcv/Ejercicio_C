#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int NumCiudades, NumCandidatos = 2;
    char **nombres;
    int **votos, *VotosTotales;

    printf("cuantas ciudades votaron? ");
    scanf("%d", &NumCiudades);

    nombres = (char **)malloc(NumCandidatos * sizeof(char *));
    for (int i = 0; i < NumCandidatos; i++) 
    {
        nombres[i] = (char *)malloc(20 * sizeof(char));
    }
    
    sprintf(nombres[0], "Maduro ");
    sprintf(nombres[1], "Maduro 2 ");

    votos = (int **)malloc(NumCandidatos * sizeof(int *));
    for (int i = 0; i < NumCandidatos; i++)
    {
        votos[i] = (int *)malloc(NumCiudades * sizeof(int));
    }
    VotosTotales = (int *)malloc(NumCandidatos * sizeof(int));

    for (int i = 0; i < NumCandidatos; i++) 
    {
        datos(nombres[i], votos[i], &VotosTotales[i], NumCiudades);
    }

    resultado(nombres, VotosTotales);

    for (int i = 0; i < NumCandidatos; i++)
    {
        free(nombres[i]);
        free(votos[i]);
    }
    free(nombres);
    free(votos);
    free(VotosTotales);
    return 0;
}


void resultado(char **nombres, int *VotosTotales) 
{
    printf("\nResultados finales:\n");
    printf("%s: %d votos\n", nombres[0], VotosTotales[0]);
    printf("%s: %d votos\n", nombres[1], VotosTotales[1]);
    
    if (VotosTotales[0] > VotosTotales[1]) 
    {
        printf("El ganador essssss........  %s que enorme sorpresa\n", nombres[0]);
    } else if (VotosTotales[1] > VotosTotales[0]) 
    {
        printf("ganador essssss........ %s un resultado inpresindible\n", nombres[1]);
    } else {
        printf("uhhh los dos quedaron empates listo para el golpe de estado lets go \n");
    }
}



void datos(char *nombre, int *votos, int *TotalVotos, int NumCiudades) 
{
    printf("Ingresando datos para %s:\n", nombre);
    *TotalVotos = 0;
    for (int i = 0; i < NumCiudades; i++) 
    {
        printf("Votos en la ciudad %d: ",i+1);
        scanf("%d", &votos[i]);
        *TotalVotos += votos[i];
    }
}

