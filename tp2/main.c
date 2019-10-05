#include <stdio.h>
#include <stdlib.h>
#include "ArrayEmployee.h"
#define TAM 1000
int main()
{
    eEmployee emple[TAM];
    employeeInit(emple,TAM);
    char respuesta;
    char seguir;

    do
    {
        switch(menu())
        {

        case 1:
            printf("\nALTAS empleado\n\n");
            //int addEmployees(emple,TAM);
            system("pause");
            break;

       case 2:
            printf("\nMODIFICAR empleado\n\n");

            system("pause");
            break;

        case 3:
            printf("\nBAJA empleado\n\n");
            //int removeEmployee(emple,TAM, id);
            system("pause");
            break;

        case 4:
            printf("\INFORMAR sobre Empleados\n\n");
            //int printEmployees(emple,TAM);
            system("pause");
            break;

        case 5:
            printf("\nDesea salir s/n?: ");
            fflush(stdin);
            respuesta = getche();

            if( tolower(respuesta) == 's')
            {
                seguir = 'n';
            }
            break;

        default:
            printf("\n Opcion invalida\n\n");
            system("break");
        }
    } while(seguir == 's');

    return 0;
}
