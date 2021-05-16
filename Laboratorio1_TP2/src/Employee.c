#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Employee.h"
#include "validaciones.h"



int initEmployees(Employee* list[], int len)
{

    int i;
    int error = -1;

    if(list != NULL && len>0)
    {

		for(i=0;i<len;i++)
		{
			list[i] = (Employee*)malloc(sizeof(Employee));
			if(list[i]!=NULL)
			{
				(*list[i]).isEmpty = 1;
				error = 0;
			}


		}
    }

    return error;

}

int add_newEmployee(Employee* list[], int len)
{

    char aux[51];
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int error = 0;

    if(list != NULL && len>0)
    {


            do
            {
                printf("Por favor introduzca el id.\n");
                fflush(stdout);
                scanf("%s",aux);

                if(esNumerico(aux))
                {

                	id = atoi(aux);
                }
            }while(!esNumerico(aux));


            do
            {
                printf("Por favor introduzca el nombre.\n");
                fflush(stdout);
                scanf("%s",aux);
                if(soloLetras(aux))
                {
                    strcpy(name,aux);

                }
            }while(!soloLetras(aux));


            do
            {
                 printf("Por favor introduzca el apellido.\n");
                 fflush(stdout);
                scanf("%s",aux);
                if(soloLetras(aux))
                {
                    strcpy(lastName,aux);
                }
            }while(!soloLetras(aux));

            do
            {
                printf("Por favor introduzca el salario.\n");
                fflush(stdout);
                scanf("%s",aux);
                if(esNumerico(aux))
                {
                    salary = atof(aux);
                }
            }while(!esNumerico(aux));

            do
            {
                printf("Por favor introduzca el sector.\n");
                fflush(stdout);
                scanf("%s",aux);
                if(esNumerico(aux))
                {
                    sector = atoi(aux);
                }
            }while(!esNumerico(aux));

            fflush(stdout);
            addEmployee(list, len, id, name, lastName, salary, sector);

            error = 1;
    }

    return error;
}



int addEmployee(Employee* list[], int len, int id, char name[],char lastName[],float salary,int sector)
{
    int i;
    int error = -1;

    if(list!= NULL && len>0)
    {
		for(i=0;i<len;i++)
		{

			if((*list[i]).isEmpty == 1)
			{

				(*list[i]).id = id;
				strcpy((*list[i]).name, name);
				strcpy((*list[i]).lastName, lastName);
				(*list[i]).salary = salary;
				(*list[i]).sector = sector;
				(*list[i]).isEmpty = 0;
				error = 0;

				break;
			}
		}
    }

    return error;
}


int findEmployeeById(Employee* list[], int len,int id)
{
    int i;
    int found =-1;

    if(len>0 && list != NULL)
    {
        for(i=0;i<len;i++)
        {
            if(id == (*list[i]).id)
            {
                found = i;
            }
        }
    }

    return found;
}

int modifyEmployee(Employee* list[], int len,int id)
{
    int position;
    int modified = 0;
    int opcion;
    char aux[51];

    if(findEmployeeById(list, len, id)!=-1)
    {

        position = findEmployeeById(list, len, id);

        printf("Por favor indique que desea modificar.\n"
               "1) Nombre.\n"
               "2) Apellido.\n"
               "3) Salario.\n"
               "4) Sector\n");
        fflush(stdout);
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
            {

                printf("Por favor introduzca el nombre.\n");
                fflush(stdout);
                scanf("%s",aux);
                do
                {
					if(soloLetras(aux))
					{
						setEmployeeName(list[position],aux);

					}
                }while(!soloLetras(aux));
                modified = 1;
                break;
            }

            case 2:
            {

                printf("Por favor introduzca el apellido.\n");
                fflush(stdout);
                scanf("%s",aux);
                if(soloLetras(aux))
                {
                    setEmployeeLastName(list[position],aux);

                }
                modified = 1;
                break;
            }

            case 3:
            {

                printf("Por favor introduzca el Salario.\n");
                fflush(stdout);
                scanf("%s",aux);
                if(esNumerico(aux))
                {
                    setEmployeeSalary(list[position],atof(aux));

                }
                modified = 1;
                break;
            }

            case 4:
            {

                printf("Por favor introduzca el Sector.\n");
                fflush(stdout);
                scanf("%s",aux);
                if(esNumerico(aux))
                {
                    setEmployeeSector(list[position],atoi(aux));

                }
                modified = 1;
                break;
            }
        }


    }

    return modified;
}

int removeEmployee(Employee* list[], int len, int id)
{
    int i;
    int removed = -1;

    if(len>0 && list != NULL)
    {
        for(i=0;i<len;i++)
        {
            if(findEmployeeById(list,len,id) != -1)
            {
                (*list[i]).isEmpty = 1;
                removed = 1;
            }
        }
    }

    return removed;
}


int sortEmployees(Employee* list[], int len, int order)
{

    int sorted = -1;

    if(len>0 && list!= NULL)
    {
        switch(order)
        {
            case 0:
            {
                    sortByNameAscend(list,len);
                    sortBySectorAscend(list,len);
                    sorted = 1;
                    break;
            }

            case 1:
            {

                    sortByNameDescend(list,len);
                    sortBySectorDescend(list,len);
                    sorted = 1;
                    break;
            }
        }
    }


    return sorted;
}

void sortByNameAscend(Employee* list[],int len)
{

    int i;
    int j;
    Employee* aux;

    for(i=1;i<len;i++)
    {
        aux = list[i];
        j = i - 1;

        while(j>=0 && strcmp((*aux).name,(*list[j]).name)<0)
        {
            list[j+1] = list[j];
            j--;
        }

        list[j+1] = aux;
    }

}

void sortByNameDescend(Employee* list[],int len)
{
    int i;
    int j;
    Employee* aux;

    for(i=1;i<len;i++)
    {
        aux = list[i];
        j = i - 1;

        while(j>=0 && strcmp((*aux).name,(*list[j]).name)>0)
        {
            list[j+1] = list[j];
            j--;
        }

        list[j+1] = aux;
    }
}

void sortBySectorAscend(Employee* list[],int len)
{
    int i;
    int j;
    Employee* aux;


    for(i=1;i<len;i++)
    {
        aux = list[i];
        j = i - 1;


        while(j>=0 && strcmp((*aux).name,(*list[j]).name)==0 && (*aux).sector<(*list[j]).sector)
        {
            list[j+1] = list[j];
            j--;
        }

        list[j+1] = aux;
    }
}

void sortBySectorDescend(Employee* list[],int len)
{
    int i;
    int j;
    Employee* aux;


    for(i=1;i<len;i++)
    {
        aux = list[i];
        j = i - 1;


        while(j>=0 && strcmp((*aux).name,(*list[j]).name)==0 && (*aux).sector>(*list[j]).sector)
        {
            list[j+1] = list[j];
            j--;
        }

        list[j+1] = aux;
    }
}


int printEmployees(Employee* list[], int length)
{
    int i;
    int error = 0;

    if(list != NULL && length>0)
    {
    	printf("ID ||   Name   ||  LastName  || Salary || Sector\n");
        for(i=0;i<length;i++)
        {
            if((*list[i]).isEmpty!=1)
            {



            	printf("%-3d||  %-6s  || %-1s ||  %-3.02f  ||   %-1d \n",
                (*list[i]).id, (*list[i]).name, (*list[i]).lastName, (*list[i]).salary,(*list[i]).sector);
            fflush(stdout);
            }
        }
        error = 1;
    }

    return error;
}

void salaryAverage(Employee* list[], int len)
{
    int i;
    int j;
    int cantidad = 0;
    float promedio = 0;
    float salarios = 0;
    int superan = 0;

    for(i=0;i<len;i++)
    {
        if((*list[i]).isEmpty != 1)
        {
            cantidad++;

            salarios +=  (*list[i]).salary;
        }
    }

    promedio = salarios / cantidad;

    for(j=0;i<len;i++)
    {
        if((*list[j]).salary > promedio)
        {
            superan++;
        }
    }

    printf("El total de los salarios es: %f\n"
           "El promedio de los salarios es: %f\n"
           "La cantidad de empleados que supera el promedio es: %d\n", salarios, promedio, superan);
    fflush(stdout);

}


void setEmployeeName(Employee* employee, char name[])
{
    strcpy((*employee).name,name);
}

void setEmployeeLastName(Employee* employee, char lastName[])
{
    strcpy((*employee).lastName,lastName);
}

void setEmployeeSalary(Employee* employee, float salary)
{
    (*employee).salary = salary;
}

void setEmployeeSector(Employee* employee, int sector)
{
    (*employee).sector = sector;
}

