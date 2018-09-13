/*
programa:diseñar un programa que escriba un nombre y devolver la cantidad de vocales que tiene
fecha:12-09-2018
elaborado:leidy yuliana Quintero
*/


#include <stdio.h>
#include <iostream>
#define numVocales 5
#define tamnombre 100

void cuentaVocales( char nombre[] , char vocales[] )
{
	///Inicializa vocales a 0
	for( int i=0; i< numVocales; i++)
		vocales[i] = 0;
	
	for( int i=0; i < tamnombre; i++)
	{
		switch(nombre[i])
		{
		case 'a': vocales[0]++; break;
		case 'e': vocales[1]++; break;
		case 'i': vocales[2]++; break;
		case 'o': vocales[3]++; break;
		case 'u': vocales[4]++; break;
		}
	}
}


void muestraVocales(char vocales[])
{
	printf(" a: %d\n", vocales[0] );
	printf(" e: %d\n", vocales[1] );
	printf(" i: %d\n", vocales[2] );
	printf(" o: %d\n", vocales[3] );
	printf(" u: %d\n", vocales[4] );
	
}

using namespace std;

int main()
{
	char nombre[tamnombre],
		vocales[numVocales];
	
	printf("Escriba el nombre:\n" );
	gets(nombre);
	
	cuentaVocales(nombre, vocales);
	muestraVocales(vocales);
	
	return 0;
}
