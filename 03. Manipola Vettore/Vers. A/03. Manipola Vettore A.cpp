#include<iostream>
#include<windows.h>

#define NV 10

bool Ricerca(int vettore[], int x)
{
	/*
		- Scopo: cercare un numero in un vettore
		- Input: vettore, numero da cercare
		- Output: ---
		- I/O: ---
		- Return: true se e' presente, false se non e' presente
	*/
	
	int i;
	
	for(i=0; i<NV; i++)
	{
		if(x==vettore[i])
		return(true);
	}
	return(false);
}
/*
bool Controllo(char risposta)
{
	if(risposta=='y' || risposta=='n')
	return(true);
	else
	return(false);
}

bool Ripeti(char risposta)
{
	if(risposta=='y')
	return(true);
	else
	return(false);
}
*/
main()
{
	int v[NV], i, x;
//	char a;
	
//	do
//	{
		printf("\n Inserire un elenco da %d numeri :) \n",NV);
		
		for(i=0; i<NV; i++)
		{
			printf("\n\t Inserire il %d^ valore: \t",i+1);
			scanf("%d",&v[i]);
		}
		
//		do
//		{
			printf("\n\n Digitare il valore da cercare nell'elenco: \t");
			scanf("%d",&x);
		
			if(Ricerca(v, x))
			printf("\n Si, il valore e' presente nell'elenco ;) \n");
			else
			printf("\n No, il valore non e' presente nell'elenco :( \n");
/*____________________________________________________________________________________________________			
			system("pause");
			printf("\n\n\n Vuoi cercare un altro valore? Digita y o n :D \t");
			do
			{
				scanf("%c",&a);
				if(Controllo(a))
				printf("\n Errore, digitare una risposta valida :/ \n");		
			}
			while(Controllo(a));
		}
		while(Ripeti(a));
		
		printf("\n\n\n Vuoi inserire un altro elenco e ricercare un altro valore? Digita y o n :) \t");
		do
		{
			scanf("%c",&a);
			if(Controllo(a))
			printf("\n Errore, digitare una risposta valida :/ \n");		
		}
		while(Controllo(a));
	}
	while(Ripeti(a));
*/
	
	system("pause");
}
