//Prueba//

#include <stdio.h>	//*Declaracion de bibliotecas*//
#include <stdlib.h>	//*Declaracion de bibliotecas*//


int a, b, c, d, e, f; //*Declaracion de variables*//

int main ()	//*Indica el inicio del cuerpo del programa*//
{
	printf ("Hola, buenos dias.\n Bienvenido al sistema de consulta de sueldo del empleado.\n Por favor siga las instrucciones que a continuacion se presentan.\n Ingrese su numero de empleado:\n");	//*Se imprime en pantalla el inicio del programa*//
		scanf ("%d", &a); //*Asignacion del valor de la variable*//
	printf ("Ingrese sus horas trabajadas:\n");
		scanf ("%d", &b);
	printf ("Ingrese su sueldo por hora:\n");
		scanf ("%d", &c);
	
	if (b<=40)	//*Condicional*//
	{
		d=b*c;	//*Se calcula el sueldo neto normal*//
		printf ("El sueldo del empleado %d", a);	//*Se imprime en pantalla el sueldo neto normal de la condicional "if"*//
		printf (" es de: $%d", d);
		printf (".");
	}
	else	//*Prepocision a la condicional "if"//
	{
		e=b-40;	//*Se calculan las horas extra*//
		f=c*2;	//*Se calcula el sueldo por hora extra*//
		d=40*c+(e*f);	//*Se calcula el sueldo neto con horas extra*//
		printf ("El sueldo del empleado %d", a);	//*Se imprime en pantalla el sueldo neto con horas extra de la prepocision "else"*//
		printf (" es de: $%d", d);
		printf (".\n ");
	}
	return 0;	//*Indica el termino del programa*//
}
