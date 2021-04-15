#include <stdio.h>
#include <stdlib.h>
#include "Operaciones.h"
#include "validaciones.h"
#include "mostrar.h"

int main()
{

    char opcionAux[1];
    int opcion;
    float operando1 = 0;
    float operando2 = 0;
    float resultadoDivision;
    float resultado[5];

	do
	{
		mostrarMenu(operando1, operando2);
		fflush(stdout);
		scanf("%s",opcionAux);

		if(esNumerico(opcionAux))
        {
            opcion = atoi(opcionAux);
        }

        switch(opcion)
        {
            case 1:
            {

                operando1 = setOperando();
                break;
            }
            case 2:
            {
                operando2 = setOperando();
                break;
            }
            case 3:
            {

                resultado[0] = suma(operando1,operando2);
                resultado[1] = resta(operando1,operando2);
                resultado[2] = multiplicacion(operando1,operando2);
                resultado[3] = factorial(operando1);
                resultado[4] = factorial(operando2);
                resultadoDivision = division(operando1,operando2);

                printf("Se han calculado todas las operaciones.\n");
                break;
            }
            case 4:
            {

                mostrarResultados(resultado[0],resultado[1],resultado[2],resultadoDivision,resultado[3],resultado[4],operando2);
                break;
            }


        }



	}while(opcion != 5);


    return 0;
}
