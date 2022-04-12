#include "funciones.h"
int main ()

{
    int op;

    op = Menu ();

    while (op)

    {

        switch (op)

        {

        case 1:

            printf ("\n\n");
            ejercicio4();
            printf ("\n\n");
            op = Menu ();
            break;

        case 2:

            printf ("\n\n");
            ejercicio5();
            printf ("\n\n");
            op = Menu ();
            break;

        default:

            ;

        }

    }

    return 0;

}



