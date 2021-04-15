/*
 * operaciones.c
 *
 *  Created on: 15 abr. 2021
 *      Author: Usuario
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "validaciones.h"


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


float suma(float a, float b)
{
    float resultado;

    resultado = a+b;

    return resultado;
}

float resta(float a, float b)
{
    float resultado;

    resultado = a-b;

    return resultado;
}

float multiplicacion(float a, float b)
{
    float resultado;

    resultado = a*b;

    return resultado;
}

float division(float a, float b)
{
    float resultado;

    if(!isZero(b))
    {
        resultado = a/b;
    }

    return resultado;
}

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






