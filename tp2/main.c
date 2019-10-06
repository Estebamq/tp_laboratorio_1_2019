#include <stdio.h>
#include <stdlib.h>
#include "ArrayEmployee.h"
#define TAM 1000



int main()
{
    eEmployee emple[TAM];
    /*eEmployee lista[TAM]=
    {
        {1234, "Juan", "perez", 30000,1},
        {2222, "Ana", "Manuel", 32000,2},
        {2211, "Jorge", "quiroz", 28000,3},
        {3241, "Alberto", "josefa", 35000,4},
    }*/
    employeeInit(emple,TAM);
    char respuesta;
    char seguir;
    int id=0;

    char name[30];
    char lastName[30];
    float salary;
    int sector;
    int retorno;

    do
    {
        switch(menu())
        {

        case 1:
            system("cls");
            printf("\n\t***ALTA EMPLEADO***\n\n");
            printf("ingrese el Nombre: ");
            fflush(stdin);
            gets(name);
            printf("Ingrese el Apellido: ");
            fflush(stdin);
            gets(lastName);
            printf("Ingrese el Salario: ");
            scanf("%f",&salary);
            printf("ingrese el sector:\n1.RR.HH.\n2.Produccion\n3.Deposito\n4.Administracion\n\n Elija una opcion: ");
            scanf("%d",&sector);
            id = genId(id);
            retorno =addEmployees(emple,TAM,id,name,lastName,salary,sector);
            if(retorno!=-1)
                {
                    printf("El alta del empleado se realizo con exito!!!\n");
                }else
                {
                    printf("NO se pudo realizar el ALTA del empleado!!!\n");
                }
            system("pause");
            break;

       case 2:
            system("cls");
            printf("\nMODIFICAR empleado\n\n");

            system("pause");
            break;

        case 3:
            system("cls");
            printf("\nBAJA empleado\n\n");
          //int removeEmployee(emple,TAM, id);
            system("pause");
            break;

        case 4:
            system("cls");
            printf("\t***Lista de Empleados***\n\n");
            printEmployees(emple,TAM);
            system("pause");
            break;


        case 5:
            system("cls");
            printf("\nDesea salir s/n?: ");
            fflush(stdin);
            scanf("%s",&seguir);
            if(seguir=='s'){
            printf("\n Usted SALIO!!");
            }
            break;
        default:
            printf("/nOpcion incorrecta! \n");
            system("pause");
            fflush(stdin);
        }


    } while(seguir != 's');

    return 0;

}
