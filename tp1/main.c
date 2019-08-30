#include <stdlib.h>
#include "operacionesaritmeticas.h"
#include<windows.h>



int main()
{
    system("COLOR 1f");
  int numero1;
  int numero2;
  char opcion;
  float resultados;


  do{
  printf("\n**********CALCULADORA**********\n");
  printf("\nIngrese el primer operando: ");
  scanf("%d", &numero1);

  printf("Ingrese el segundo operando: ");
  scanf("%d", &numero2);

  printf("Elija la operacion que desea hacer: \n");
  printf("a) Calcular la suma (A+B)\n");
  printf("b) Calcular la resta (A-B)\n");
  printf("c) Calcular la division (A/B)\n");
  printf("d) Calcular la multiplicacion (A*B)\n");
  printf("e) Calcular el factorial (A!)\n");
  printf("s) SALIR \n");
  fflush(stdin);
  scanf("%c", &opcion);

  switch(opcion){

    case 'a' :
        resultados = sumar(numero1,numero2);
        printf("\nEl resultado de %d + %d = %.2f \n", numero1,numero2,resultados);
        break;
    case 'b' :
        resultados = restar(numero1,numero2);
        printf("\nEl resultado de %d - %d = %.2f \n", numero1,numero2,resultados);
        break;
    case 'c' :
        if(numero2 != 0){
        resultados = dividir(numero1,numero2);
        printf("\nEl resultado de %d / %d = %.2f\n", numero1,numero2,resultados);
        }else{
            printf("\nNo se puede dividir por 0\n");
        }
        break;

    case 'd' :
        resultados = multiplicar(numero1, numero2);
        printf("\nEl resultado de %d * %d = %.2f \n", numero1, numero2, resultados);
        break;
    case 'e' :
        if(numero1=='0'){
        printf("\nEl factorial de %d es: 1 \n", numero1);
        }else if(numero1<0){
        printf("\nEl factorial de %d no se puede realizar \n",numero1);
        }else{
        resultados = factorial(numero1);
        printf("\nEl factorial de %d es: %.2f\n", numero1, resultados);
        }
        if(numero2=='0'){
        printf("\nEl factorial de %d es: 1 \n", numero2);
        }else if(numero2<0){
        printf("\nEl factorial de %d no se puede realizar \n",numero2);
        }else{
        resultados = factorial(numero2);
        printf("\nEl factorial de %d es: %.2f\n", numero2, resultados);
        }
        break;

    default :
        if(opcion=='s'){
            printf("\n Usted SALIO!");
        }else{
        printf("/nOpcion incorrecta! \n");
        }

    }

    system("pause");
    system("cls");

  }while(opcion != 's');



    return 0;

}


