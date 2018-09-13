/*
programa:funcion que reciba tres enteros y nos muestre el mayor de ellos
fecha:12-09-2018
elaborado:leidy yuliana Quintero
*/


#include <conio.h>
#include <stdio.h>

int main()
{
	int n1, n2, n3;
	
	printf( "\n   Introduzca el primer numero");
	scanf( "%d", &n1 );
	printf( "\n   Introduzca el segundo numero");
	scanf( "%d", &n2 );
	printf( "\n   Introduzca el tercer numero");
	scanf( "%d", &n3 );
	
	if ( n1 >= n2 && n1 >= n3 )
		printf( "\n   %d es el mayor.", n1 );
	else
		
		if ( n2 > n3 )
			printf( "\n   %d es el mayor.", n2 );
		else
			printf( "\n   %d es el mayor.", n3 );
		
		getch(); 
		
		return 0;
}
