
#include<iostream>
#include<windows.h>

int contF=0;

float Addizione(float add1, float add2)
{
	/*
		- Scopo: sommare due numeri e contare ogni volta che viene chiamata la funzione
		- Input: i due addendi
		- Output: ---
		- I/O: il contatore
		- Return: risultato somma
	*/
	
	contF++;
	return(add1+add2);
}

float Sottrazione(float dim, float sot)
{
	/*
		- Scopo: Sottrarre due numeri e contare ogni volta che viene chiamata la funzione
		- Input: diminuendo e sottraendo
		- Output: ---
		- I/O: il contatore
		- Return: risultato differenza
	*/
	
	contF++;
	return(dim-sot);
}

float Moltiplicazione(float fat1, float fat2)
{
	/*
		- Scopo: moltiplicare due numeri e contare ogni volta che viene chiamata la funzione
		- Input: i due fattori
		- Output: ---
		- I/O: il contatore
		- Return: risultato moltiplicazione
	*/
	
	contF++;
	return(fat1*fat2);
}

float Divisione(float divid, float divis)
{
	/*
		- Scopo: dividere un numero per un altro e contare ogni volta che viene chiamata la funzione
		- Input: dividendo e divisore
		- Output: ---
		- I/O: il contatore
		- Return: risultato divisione
	*/
	
	contF++;
	return(divid/divis);
}

bool Controllo(int flag)
{
	/*
		- Scopo: controllare se un numero sia zero o no e contare ogni volta che viene chiamata la funzione
		- Input: numero da controllare
		- Output: ---
		- I/O: il contatore
		- Return: false se e' 0, true se non lo e'
	*/
	
	contF++;
	if(flag==0)
	return(false);
}

void Menu(int selezione)
{
	/*
		- Scopo: fornire tutte le operazioni possibili all'utente, chiamando le rispettive funzioni e contare ogni volta che viene chiamata la funzione
		- Input: opzione selezionata
		- Output: ---
		- I/O: il contatore
		- Return: ---
	*/
	
	float n1, n2;
	contF++;
	switch(selezione)
	{
		case 1: printf("\n Digitare i due valori da sommare \t");
		scanf("%f%f",&n1,&n2);
		printf("\n Il risultato e': %.2f \n\n\n",Addizione(n1, n2));
		system("pause");
		printf("\n\n\n");
		break;
		
		case 2: printf("\n Digitare i due valori da sottrarre \t");
		scanf("%f%f",&n1,&n2);
		printf("\n Il risultato e': %.2f \n\n\n",Sottrazione(n1, n2));
		system("pause");
		printf("\n\n\n");
		break;
		
		case 3: printf("\n Digitare i due valori da moltiplicare \t");
		scanf("%f%f",&n1,&n2);
		printf("\n Il risultato e': %.2f \n\n\n",Moltiplicazione(n1, n2));
		system("pause");
		printf("\n\n\n");
		break;
		
		case 4: printf("\n Digitare i due valori da dividere \t");
		do
		{
			scanf("%f",&n1);
			scanf("%f",&n2);
			if(n1==0 && n2==0)
			printf("Errore, inserire dei valori corretti :/ \n");
		}
		while(n1==0 && n2==0);
		
		printf("\n Il risultato e': %.2f \n\n\n",Divisione(n1, n2));
		system("pause");
		printf("\n\n\n");
		break;
		
		case 0: system("pause");
	}
}

main()
{
	int scelta;
do
{
	printf("\n Digitare il numero corrispondente all'operazione desiderata: \n\n\t 1. Addizione \n\t 2. Sottrazione \n\t 3. Moltiplicazione \n\t 4. Divisione \n\t 0. Uscire dal programma \n\n");
	do
	{
		scanf("%d",&scelta);
		if(scelta<0 || scelta>4)
		printf("\n Errore, inserire un valore corretto :/");
	}
	while(scelta<0 || scelta>4);
	
	Menu(scelta);
}
while(Controllo(scelta));

printf("\n Hai chiamato %d volte delle funzioni :D \n\n\n",contF);
system("pause");

	

}




