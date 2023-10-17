#include <stdio.h>

int main(void)
{

    int numero;
    int suma = 0;
    do
    {
        printf("Ingrese un numero para saber su sumatoria de Gauss.\n");
        scanf("%d", &numero);
        if (numero > 0)
        {
            for (int i = 0; i <= numero; i++)
            {
                suma = suma + i;
            }
        }
        else
        {

            printf("Ingrese un numero positivo por favor.\n");
        }

    } while (suma == 0);
    printf("El resultado de la sumatoria del numero %d es igual a: %d.\n", numero, suma);

    return 0;
}