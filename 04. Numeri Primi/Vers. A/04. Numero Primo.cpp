#include<iostream>
#include<windows.h>

#define LIMIT 1000


int Modulo(int x1, int divis1)
{
	/*
		- Scopo: trovare il resto di una divisione fra due numeri
		- Input: dividendo e divisore
		- Output: ---
		- I/O: ---
		- Return: resto
	*/
	return(x1%divis1);
}

bool Controllo_Primo(int x)
{
	/*
		- Scopo: controllare se un numero e' primo
		- Input: numero da controllare
		- Output: ---
		- I/O: ---
		- Return: true se e' primo, false se non e' primo
	*/
	int i=0, divis=2;
	
	if(Modulo(x, divis)==0 && x!=divis || x==1)
	return(false);
	else
	{
		divis++;
		for(i=0; i<x/2; i++)
		{
			if(Modulo(x, divis)==0 && x!=divis)
			return(false);
			else
			divis=divis+2;
		}
		return(true);
	}
}

main()
{
	int x;
	
	printf("\n Digita un numero da 0 a +%d per verificare se sia primo o no ;) \t ",LIMIT);
	do
	{
		scanf("%d",&x);
		if(x<0 || x>LIMIT)
		printf("\n Errore, inserire un valore corretto :/ \n\n");
	}
	while(x<0 || x>LIMIT);
	
	
	if(Controllo_Primo(x))
	printf("\n Si, e' un numero primo :D \n\n\n");
	else
	printf("\n No, non e' un numero primo :( \n\n\n");
	
	system("pause");
}
