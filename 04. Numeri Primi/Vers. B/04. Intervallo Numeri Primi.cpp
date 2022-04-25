/*
Analisi: 
main ---> Compila_Vet
	 ---> Controllo_Primo ---> Modulo
*/

#include<iostream>
#include<windows.h>

#define LIMIT 1000

int v[LIMIT];

void Compila_Vet(int a, int b)
{
	/*
		- Scopo: assegnare un valore dell'intervallo ad ogni cella del vettore
		- Input: l'estremo minore e l'estremo maggiore dell'intervallo
		- Output: ---
		- I/O: ---
		- Return: ---
	*/

	int i;
	for(i=a; i<=b; i++)
	{
		v[i]=i;
	}
}

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
	int min, max, np=0, i;
	
	printf("\n Digita gli estremi dell'intervallo di numeri positivi che vuoi controllare (da 0 a %d valori) :) \t",LIMIT);
	do
	{
		scanf("%d%d",&min,&max);
		if(min<0 || max>LIMIT || min>max)
		printf("\n Errore, digitare valori corretti :/ \n\n");
	}
	while(min<0 || max>LIMIT);
	
	Compila_Vet(min, max);
	
	for(i=min; i<=max; i++)
	{
		if(Controllo_Primo(v[i]))
		np++;
	}
	
	printf("\n Nell'intervallo sono presenti %d numeri primi :D \n\n\n",np);
	
	system("pause");
}









