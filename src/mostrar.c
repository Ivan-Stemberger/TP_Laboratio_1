/*
 * mostrar.c
 *
 *  Created on: 15 abr. 2021
 *      Author: Usuario
 */

#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"
#include "validaciones.h"
#include "mostrar.h"


void mostrarMenu(float operando1, float operando2)
{

    printf("Seleccione la operacion que desea realizar. \n"
			"1) Ingresar 1er operando.(A = %.2f)\n"
			"2) Ingresar 2do operando.(B = %.2f)\n"
			"3) Calcular todas las operaciones.\n"
			"4) Informar resultados.\n"
			"5)Salir.\n", operando1,operando2);


}


void mostrarResultados(float suma, float resta, float multiplicacion, float division, int factorialA, int factorialB, float operando2)
{
                if(operando2!=0)
                {
                    printf("El resultado de A + B es: %.2f\n",suma);
                    printf("El resultado de A - B es: %.2f\n",resta);
                    printf("El resultado de A * B es: %.2f\n",multiplicacion);
                    printf("El resultado de A / B es: %.2f\n",division);
                    printf("El factorial de A es: %d\n",factorialA);
                    printf("El factorial de B es: %d\n",factorialB);
                }
                else
                {
                    printf("El resultado de A + B es: %.2f\n",suma);
                    printf("El resultado de A - B es: %.2f\n",resta);
                    printf("El resultado de A * B es: %.2f\n",multiplicacion);
                    printf("El factorial de A es: %d\n",factorialA);
                    printf("El factorial de B es: %d\n",factorialB);
                }

}

