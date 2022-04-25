#include<iostream>
#include<windows.h>

#define LIMIT 20

int v[LIMIT], len;

void Compila_Vet()
{
/*
		Scopo: assegnare un valore dell'intervallo ad ogni cella del vettore
		Input: ---
		Output: ---
		I/O: ---
		Return: ---
	*/
	int i;
	
	printf("\n Digita i valori in qualsiasi ordine ;) ");
	for(i=0; i<len; i++)
	{
		printf("\n\t Inserisci il %d^ numero: \t",i+1);
		scanf("%d",&v[i]);
	}
}

void Bubble_Sort()
{
	/*
		Scopo: riordinare la rubrica in ordine crescente
		Input: ---
		Output: ---
		I/O: ---
		Return: ---
	*/
	int last=len-2, i, c;
	bool ordered=false;
	
	while(last>0 && !ordered)
	{
		ordered=true;
		for(i=0; i<=last; i++)
		{
			if(v[i]>v[i+1])
			{
				c=v[i];
				v[i]=v[i+1];
				v[i+1]=c;
				ordered=false;
			}
		}		
	}
}

void Stampa_Vet()
{
	/*
		Scopo: stampare il vettore orizzontalmente
		Input: ---
		Output: ---
		I/O: ---
		Return: ---
	*/
	int i;
	
	for(i=0; i<len; i++)
	{
		printf("%5d",v[i]);
	}
}

bool Terminator(int sarah_connor)
{
	/*
		Scopo: cercare ed eliminare il valore richiesto
		Input: valore da cercare ed eliminare
		Output: ---
		I/O: ---
		Return: true se il numero e' stato trovato ed eliminato, false se non e' stato trovato
	*/

	int pos=0, i=0;
	bool pres=false;
	
	do
	{
		if(v[i]==sarah_connor)
		{
			pres=true;
			pos=i;
		}
		else
		i++;
	}
	while(i<len && !pres);
	
	if(pres)
	{	
		for(i=pos; i<len; i++)
		{
			v[i]=v[i+1];
		}
		len--;
		return(true);
	}
	else
	return(false);
}

main()
{
	int x;
	
	printf("\n Digita quanti numeri vuoi inserire nell'elenco (fino a %d) :) \t\t",LIMIT);
	do
	{
		scanf("%d",&len);
		if(len <0 || len>LIMIT)
		printf("\n Errore, inserire un valore corretto :/ \n\n");
	}
	while(len <0 || len>LIMIT);
	
	Compila_Vet();
	Bubble_Sort();
	
	printf("\n Elimina un valore dall'elenco :( \t");
	scanf("%d",&x);
	
	if(Terminator(x))
	{
		printf("\n\n\n Il valore e' stato eliminato con successo. Ecco l'elenco aggiornato :D \n\n");
		Stampa_Vet();
		printf("\n\n\n");
	}
	else
	{
		printf("\n\n\n Il valore non e' presente nell'elenco D: \n\n");
		Stampa_Vet();
		printf("\n\n\n");
	}
		
	system("pause");
}
