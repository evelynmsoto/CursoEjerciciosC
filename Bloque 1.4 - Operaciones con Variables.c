//Bloque 1.4: Operaciones con Variables

#include <stdio.h>
#define PI 3.1416 //Una macro sirve como variable fija para reutilizar en el codigo

int main() {
	float x;
	int y;
	
	x= PI;
	
    //printf ("El valor de x es: %f.\n", x);
    
    //Pide un valor al usuario para ingresarlo por teclado y despues imprime el dato ingresado en pantalla
	printf ("Introduce un valor para Y: ");
	scanf ("%i",&y);
	printf ("El valor de Y es: %i.\n\n",y);
	
	x= x * y;
	printf ("El nuevo valor de X es: %f.\n\n", x);
	
	system ("pause") ;
	return 0;
}
