#include "operacionesaritmeticas.h"



//****FUNCION SUMAR****
int sumar(int a,int b){
int resultado;

resultado = a + b;

return resultado;

}


//****FUNCION RESTAR****
int restar(int a, int b){
int resultado;

resultado = a - b;

return resultado;
}


//****FUNCION DIVIDIR****
float dividir(int a, int b){
float resultado;

resultado = (float)a / b;

return resultado;
}


//****FUNCION MULTIPLICAR****
int multiplicar(int a, int b){
int resultado;

resultado = a*b;

return resultado;
}

//****FUNCION FACTORIAL****
int factorial(int a)
{

   int resultado;

    if (a == 0)
        {
             resultado = 1;
        }

    else
    {
        resultado = a* factorial(a-1);
    }
    return resultado;
}


