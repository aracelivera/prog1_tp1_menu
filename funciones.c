#include "funciones.h"
int Menu ()

{

    int op;
    printf (" MENU PRINCIPAL\n");
    printf (" --------------\n\n");
    printf (" 1) Ejercicio 4: Raiz cuadrada \n");
    printf (" 2) Ejercicio 5: Serie de Fibonacci\n");
    printf (" 0) Salir\n");

    do

    {
        printf ("\n Elija una opcion: ");
        scanf ("%d", &op);

    }
    while (op < 0 || op > 2);
    return op;
}
void ejercicio4()
{
     float res,a,tol;
    do
    {
        printf("Ingrese un numero positivo 'A' y un valor de tolerancia 'tol':\t");
        scanf("%f%f",&a,&tol);
    }
    while(a<0);
    res=RaizCuadrada(a,tol);
    printf("\nLa raiz cuadrada de %f, con tolerancia %f, es: %f",a,tol,res );
}
float RaizCuadrada(float x,float tol)
{
    float r1=1,r2=1;
    do
    {
        r1=r2;
        r2=0.5*(r1+(x/r1));

    }
    while(fabs(r2-r1)>=tol);
    return r2;
}
void ejercicio5()
{
    int num, a0=1, a1=1, a2;
    printf("\t\tEjercicio 5: Serie de Fibonacci\nIngrese un numero entero:\t");
    scanf("%d", &num);
    do{
        a2=a0+a1;
        a0=a1;
        a1=a2;
    }while(a0!=num && a1!=num && a2<num);
    if( num!=1 && a2>num ) printf("\nEl numero %d NO pertenece a la serie Fibonacci",num);
    else printf("\nEl numero %d SI pertenece a la serie de Fibonacci", num);
}
