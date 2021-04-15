#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/** \brief Verifica si el valor ingresado es un numero o no
 *
 * \param auxiliar: cadena de caracteres a ser verificada.
 * \return devuelve 1 si es un valor numérico. 0 si no lo es.
 *
 */

int esNumerico(char auxiliar[])
{
    int i = 0;


    while(auxiliar[i] != '\0')
    {

        if((auxiliar[i] < '0' || auxiliar[i] > '9') && auxiliar[i] != '.' && auxiliar[i] != '-')
        {

            return 0;

        }
        i++;

    }
    return 1;
}


