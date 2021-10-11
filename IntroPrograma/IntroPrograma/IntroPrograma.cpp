#include <stdio.h>
int sumaDatos(int a, int b) {
	int resultado;
	resultado = a + b;

return resultado;
}

int main()
{
	/*Sumar dos numeros, estos numero pedirlos por teclado*/
	int iDato1, iDato2, iResultado;
	printf("\n ----- SUMA DE DATOS [DOS DATOS] -----\n");
	printf("Ingresa tu primer numero: ");
	scanf_s("%i", &iDato1);
	printf("\nIngresa tu segundo numero:");
	scanf_s("%i", &iDato2);

	iResultado = sumaDatos(iDato1,iDato2);


	printf("\nEl resultado de la suma es: %i", iResultado);
	return 0;
}



