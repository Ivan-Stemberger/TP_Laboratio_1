#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "validaciones.h"


/** \brief verifica si el numero ingresado es cero.
 *
 * \param Operando: numero que se quiere verificar.
 * \return devuelve 1 si es cero. Caso contrario, devuelve 0.
 *
 */

int isZero(float operando)
{
    int isZero = 1;

    if(operando != 0)
    {
        isZero = 0;
    }
    else
    {
        printf("No se puede dividor por cero.\n");
    }
    return isZero;
}

/** \brief suma los dos numeros ingresados y devuelve el resultado.
 *
 * \param a: primer operando ingresado (A)
 * \param b: segundo operando ingresado (B)
 * \return devuelve el resultado de la suma.
 *
 */

float suma(float a, float b)
{
    float resultado;

    resultado = a+b;

    return resultado;
}

/** \brief resta los dos numeros ingresados y devuelve el resultado.
 *
 * \param a: primer operando ingresado (A)
 * \param b: segundo operando ingresado (B)
 * \return devuelve el resultado de la resta.
 *
 */
float resta(float a, float b)
{
    float resultado;

    resultado = a-b;

    return resultado;
}

/** \brief multiplica los dos numeros ingresados y devuelve el resultado.
 *
 * \param a: primer operando ingresado (A)
 * \param b: segundo operando ingresado (B)
 * \return devuelve el resultado de la multiplicacion.
 *
 */

float multiplicacion(float a, float b)
{
    float resultado;

    resultado = a*b;

    return resultado;
}

/** \brief divide los dos numeros ingresados y devuelve el resultado.
 *
 * \param a: primer operando ingresado (A)
 * \param b: segundo operando ingresado (B)
 * \return devuelve el resultado de la division.
 *
 */

float division(float a, float b)
{
    float resultado;

    if(!isZero(b))
    {
        resultado = a/b;
    }

    return resultado;
}

/** \brief Realiza el factorial del numero ingresado.
 *
 * \param a: operando.
 * \return devuelve el resultado del factorial.
 *
 */

int factorial(float a)
{
    int resultado = 0;
    int factorial = 1;
    int i;

    if(a >= 0)
    {
        for(i=1;i<=a;i++)
        {
            factorial *= i;
        }
        resultado = factorial;

    }
    else
    {
        printf("Solo se factorean números positivos.");
    }

    return resultado;
}

/** \brief Setea el operando.
 *
 * \return Devuelve el operando ingresado.
 *
 */

float setOperando()
{
    char operandoAux[4];
    float operando;

    printf("Ingrese el primer operando.\n");
    fflush(stdout);
    scanf("%s",operandoAux);

    if(esNumerico(operandoAux))
    {
        operando = atof(operandoAux);
    }

    return operando;
}






