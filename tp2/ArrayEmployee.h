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
int addEmployees(eEmployee emple[],int tam, int id, char name[],char lastName[],float salary, int sector);
int printEmployees(eEmployee emple[],int tam);
int genId(int id);
//int employeeGenId(Employee empl[],int);
//int findEmployeeById(Employee empl[] ,int, int id);
//int removeEmployee(Employee empl,int, int id);
//int employeePrintOne(Employee empl[], int);
//int sortEmployees(Employee empl[],int);


