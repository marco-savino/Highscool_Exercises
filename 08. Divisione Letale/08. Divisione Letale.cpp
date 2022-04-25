#include<iostream>
#include<windows.h>


float Divisione(float divid, float divis)
{
	/*
		Scopo: controllare se il divisore è zero. Se non lo e', effttuare una divisione fra dividendo e divisore
		Input: dividendo e divisore
		Output: ---
		I/O: ---
		Return: 1) 2147483647: se il divisore e' zero - 2) quoziente: se il divisore non e' zero
	*/

	if(divis==0)
	return(2147483647);
	else
	return(divid/divis);
}

main()
{
	float a, b;
	
	printf("\n Inserire il Dividendo e il Divisore: \t");
	scanf("%d%d",&a,&b);
	
	if(Divisione(a, b)==2147483647)
	printf("\n Errore \n\n\n");
	else
	printf("\n %.2f \n\n\n",Divisione(a, b));
	
	system("pause");
}
