#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define OCUPADO 0
#define LIBRE 1

typedef struct {
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;
}eEmployee;



int menu();
int employeeInit(eEmployee emple[],int cant);
//int employeeGenId(Employee empl[],int);
//int findEmployeeById(Employee empl[] ,int, int id);
//int removeEmployee(Employee empl,int, int id);
//int employeePrintOne(Employee empl[], int);
//int printEmployees(Emlpoyee empl[],int);
//int addEmployees(Employee empl[],int);//alta
//int sortEmployees(Employee empl[],int);


