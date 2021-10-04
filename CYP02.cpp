#include <stdio.h>

int main() {

    int n, o, i = 0, e = 0, hexadecimal[16], hexa[16]; //Declaramos nuestras variables a usar.
    scanf_s("%i", &n);
    scanf_s("%i", &o);

    while (n != 0)
    {
        hexadecimal[i] = n % 16; //Esta linea es para guardar el residuo del valor de n entre 16. En un arreglo.
        n = n / 16; // Esta division es para modificar en valor de n en la proxima repeticion del while.
        i++; // Para moficicar el valor de i en el arreglo hexadecimal en la siguiente repeticion del while.
    }

    i--;
    printf("BM");

    while (i >= 0) //Este while se usa para imprimir los valores guardados en el arreglo hexadecimal.
    {
        switch (hexadecimal[i])
            /*Este switch sirve evaluar los diferentes casos posibles, si el numero guardado en el arreglo
             es 10,11,12,13,14 0 15, se imprimira la correspondiente letra para cada caso*/
        {
        case 10:
            printf("A");
            break;
        case 11:
            printf("B");
            break;
        case 12:
            printf("C");
            break;
        case 13:
            printf("D");
            break;
        case 14:
            printf("E");
            break;
        case 15:
            printf("F");
            break;
        default:
            printf("%i", hexadecimal[i]); /*Si es un numero diferente del 10 al 15
            solamente pone lo que hay en el arreglo osea uno que va del 0 al 9.*/
            break;
        }
        i--;
    }

    printf("00000000");
   
    while (o != 0)
    {
        hexa[e] = o % 16; //Esta linea es para guardar el residuo del valor de n entre 16. En un arreglo.
        o = o / 16; // Esta division es para modificar en valor de n en la proxima repeticion del while.
        e++; // Para moficicar el valor de i en el arreglo hexadecimal en la siguiente repeticion del while.
    }

    e--;

    while (e >= 0) //Este while se usa para imprimir los valores guardados en el arreglo hexadecimal.
    {
        switch (hexa[e])
            /*Este switch sirve evaluar los diferentes casos posibles, si el numero guardado en el arreglo
             es 10,11,12,13,14 0 15, se imprimira la correspondiente letra para cada caso*/
        {
        case 10:
            printf("A");
            break;
        case 11:
            printf("B");
            break;
        case 12:
            printf("C");
            break;
        case 13:
            printf("D");
            break;
        case 14:
            printf("E");
            break;
        case 15:
            printf("F");
            break;
        default:
            printf("%i", hexa[e]); /*Si es un numero diferente del 10 al 15
            solamente pone lo que hay en el arreglo osea uno que va del 0 al 9.*/
            break;
        }
        e--;
    }

    printf("\n");
    return 0;
}