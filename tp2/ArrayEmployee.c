#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayEmployee.h"
int menu()
{
    int opcion;;
    system("cls");
    printf("  *** ABM EMPLOYEE ***\n\n");
    printf("1- Alta Empleado\n");
    printf("2- Modificacion Empleado\n");
    printf("3- Baja Empleado\n");
    printf("4- Informar sobre Empleados\n");
    printf("5- Salir\n\n");
    printf("Ingrese opcion: ");
    scanf("%d", &opcion);

    return opcion;
}
int employeeInit(eEmployee emple[],int cant)
{
    int retorno = -1;
    int i;

        for(i=0; i<cant; i++)
        {
                    emple[i].isEmpty=1;
                    retorno = 0;
        }

    return retorno;
}

int genId(int id)
{
    int retorno;
    retorno = id +1;

    return retorno;

}

int addEmployees(eEmployee emple[],int tam,int id, char name[],char lastName[],float salary, int sector)
{
        int i = id-1;
        int retorno =-1;

                if(emple[i].isEmpty==LIBRE)
                    {

                        emple[i].id=id;
                        strcpy(emple[i].name,name);
                        strcpy(emple[i].lastName,lastName);
                        emple[i].salary=salary;
                        emple[i].sector=sector;
                        emple[i].isEmpty=OCUPADO;
                        retorno=0;

                    }


    return retorno;
}

int printEmployees(eEmployee emple[],int tam)
{
    int i;
    int retorno =-1;
    printf("\tID\tNOMBRE\tAPELLIDO\tSALARIO           SECTOR\t\n");
    for(i=0;i<tam;i++)
        {
            if(emple[i].isEmpty==OCUPADO)
                {

                    printf("\t%d\t%s\t%s\t%15.2f\t%15d\n", emple[i].id, emple[i].name, emple[i].lastName, emple[i].salary, emple[i].sector);
                    retorno = 0;
                }
        }
    return retorno;
}

