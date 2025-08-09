// Código del programa para verificar si una persona 
// es o no mayor de edad.
// Profr. Francisco Ortega Rivera
// Alumno Edgar AM.

#include <stdio.h>

int main()
{
    int num;
    printf("Escribe tu edad: \n");
    scanf("%d", &num);
    
    if(num >=18)
    printf ("Eres mayor de edad");
    
    if(num <18)
    printf("Eres menor de edad");
}