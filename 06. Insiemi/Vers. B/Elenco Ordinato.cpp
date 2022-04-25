#include<iostream>
#include<windows.h>

#define LIMIT 20

int v[LIMIT], len;

void Compila_Vet()
{
	/*
		Scopo: assegnare un valore dell'intervallo ad ogni cella del vettore
		Input: la lunghezza del vettore, che indica la prima cella libera
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

void Inserisci_Val(int x)
{
	/*
		Scopo: inserire un numero correttamente nell'elenco ordinato
		Input: numero da inserire
		Output: ---
		I/O: ---
		Return: ---
	*/
	
	int pos=0, i;
	
	while(x>v[pos] && pos<len)
	{
		pos++;
	}
	
	for(i=len-1; i>pos; i--)
	{
		v[i]=v[i-1];
	}
	v[i]=x;
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

main()
{
	int x;
	
	printf("\n Digita quanti numeri vuoi inserire nell'elenco (fino a %d) :) \t",LIMIT);
	do
	{
		scanf("%d",&len);
		if(len <0 || len>LIMIT)
		printf("\n Errore, inserire un valore corretto :/ \n\n");
	}
	while(len <0 || len>LIMIT);
	
	Compila_Vet();
	Bubble_Sort();
	
	if(len!=LIMIT)
	{
		printf("\n Inserisci un ulteriore valore nell'elenco :D \t");
		scanf("%d",&x);
		len++;
	}
	else
	printf("\n L'elenco e' gia' pieno! Non puoi inserire altri elementi D: \n\n\n");
	
	Inserisci_Val(x);	
	
	printf("\n Ecco l'elenco ordinato :D \n\n");
	Stampa_Vet();
	printf("\n\n\n");
	
	system("pause");
}
