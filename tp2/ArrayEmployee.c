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

