#include<iostream>
#include<windows.h>

#define LIMIT 20

int v[LIMIT], len;

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

void Compila_Vet(int lenght)
{
	/*
		Scopo: assegnare un valore dell'intervallo ad ogni cella del vettore
		Input: la lunghezza del vettore, che indica la prima cella libera
		Output: ---
		I/O: ---
		Return: ---
	*/

	int i;
	
	for(i=0; i<lenght; i++)
	{
		printf("\n Inserisci il %d^ numero \t",i+1);
		scanf("%d",&v[i]);
	}
}

main()
{
	printf("\n Digita quanti numeri vuoi inserire nell'elenco (fino a %d) :) \t",LIMIT);
	do
	{
		scanf("%d",&len);
		if(len <0 || len >LIMIT)
		printf("\n Errore, inserire un valore corretto :/ \n\n");
	}
	while(len <0 || len >LIMIT);
	
	Compila_Vet(len);
	
	if(len!=LIMIT)
	{
		printf("\n Inserisci un ulteriore valore nell'elenco ;) \t");
		scanf("%d",&v[len]);
		len++;
	}
	else
	printf("\n L'elenco e' gia' pieno! Non puoi inserire altri elementi D: \n\n\n");
	
	printf("\n Ecco l'elenco finale :D \n\n");
	Stampa_Vet();
	printf("\n\n\n");
	
	system("pause");
}
