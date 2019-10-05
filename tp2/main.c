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
    int id;
    char name[30];
    char lastName[30];
    float salary;
    int sector;

    do
    {
        switch(menu())
        {

        case 1:
            printf("\nALTAS empleado\n\n");
            printf("ingrese el Nombre:");
            fflush(stdin);
            gets(name);
            printf("Ingrese el Apellido:");
            fflush(stdin);
            gets(lastName);
            printf("Ingrese el Salario:");
            scanf("%f",&salary);
            printf("ingrese el sector:\n1.RR.HH.\n2.Produccion\n3.Deposito\n4.Administracion\n\n Elija una opcion:");
            scanf("%d",&sector);
            int addEmployees(emple,TAM,id,name,lastName,salary,sector);
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
