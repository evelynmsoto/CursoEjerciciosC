//Bloque 1.3: Variables

#include <stdio.h>

int main(){
	int x; //Entero: Numero sin decimal 8, -9, 10 (Ocupa 16 bits) Rango numeros: -32768 hasta 32767 (2^16)
	float y; //Flotante: numero con un decimal 9.58, 10.69, 5 (Ocupa 32 bits) 
	double y2; //Lo mismo que flotante solo que ocupa 64bits (2^64)
	char z; //Caracter: almacenas letras, numeros 
	
	x = 5;
	y = 10.5;
	y2 = 20.9;
	z = 'a';
	
	//printf("Valor de x: %i.\n", x);
	//printf("Valor de y: %f.\n",y);
	//printf("Valor de y2: %f.\n",y2);
	//printf("Valor de z: %c.\n",z);
	printf("Valor de i: %i\n Valor de y: %f\n",x,y);
	
	system ("pause");
	return 0;
}
