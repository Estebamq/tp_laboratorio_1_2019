#include "ArrayEmployee.h"
int menu()
{
    int opcion;

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
        int retorno = id;
        if(id!=1)
            {
                retorno=id+1;
            }
        return retorno;
    }

int addEmployees(eEmployee emple[],int tam,int id, char name[],char lastName[],float salary, int sector)
{
        int i;
        int retorno =-1;

        for(i=0;i<tam;i++)
            {
                if(emple[i].isEmpty==1)
                    {

                        emple[i].id=id;
                        strcpy(emple[i].name,name);
                        strcpy(emple[i].lastName,lastName);
                        emple[i].salary=salary;
                        emple[i].sector=sector;
                        retorno=1;

                    }else
                    {
                        printf("No se pueden ingresar mas usuarios");
                    }

            }
    return retorno;
}

