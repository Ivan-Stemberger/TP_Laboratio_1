#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"
#include "validaciones.h"
#include "mostrar.h"

/** \brief: Muestra por pantalla el menu inicial de la aplicacion.
 *
 * \param operando1: primer operando para mostrar.
 * \param operando2: segundo operando para mostrar.
 * \return void.
 *
 */

void mostrarMenu(float operando1, float operando2)
{

    printf("Seleccione la operacion que desea realizar. \n"
			"1) Ingresar 1er operando.(A = %.2f)\n"
			"2) Ingresar 2do operando.(B = %.2f)\n"
			"3) Calcular todas las operaciones.\n"
			"4) Informar resultados.\n"
			"5)Salir.\n", operando1,operando2);

}

/** \brief Muestra por pantalla los resultados de las cuentas realizadas.
 *
 * \param suma: Resultado de la suma.
 * \param resta: Resultado de la resta.
 * \param multiplicacion: Resultado de la multiplicacion
 * \param division: Resultado de la division
 * \param factorialA: Resultado del factorial del primer operando.
 * \param factorialB: Resultado del factorial del segundo operando.
 * \param operando2: segundo operando.
 * \return void.
 *
 */
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

