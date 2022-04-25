#include<iostream>
#include<windows.h>

#define NV 10

void Bubble_Sort(int vet[])
{
	/*
		- Scopo: ordinare un vettore
		- Input: ---
		- Output: ---
		- I/O: vettore da ordinare
		- Return: ---
	*/
	
	int last=NV-2, i, c;
	bool ordered=false;
	
	while(last>0 && !ordered)
	{
		ordered=true;
		for(i=0; i<=last; i++)
		{
			if(vet[i]>vet[i+1])
			{
				c=vet[i];
				vet[i]=vet[i+1];
				vet[i+1]=c;
				ordered=false;									
			}			
		}		
	}
}

bool Ricerca_Bin(int vet[], int x)
{
	/*
		- Scopo: cercare un numero in un vettore
		- Input: vettore, numero da cercare
		- Output: ---
		- I/O: ---
		- Return: true se e' presente, false se non e' presente
	*/
	
	int down=0, up=NV-1, mid;
	
	while(down<=up)
	{
		mid=(down+up)/2;
		if(x==vet[mid])
		return(true);	
		
		else
		{
			if(x<vet[mid])
			up=mid-1;
			else
			{
				if(x>vet[mid])
				down=mid+1;	
			}
		}
	}
	return(false);
}

void Stampa_Vet(int v[])
{
	/*
		- Scopo: stampare un vettore
		- Input: vettore da stampare
		- Output: ---
		- I/O: ---
		- Return: ---
	*/
	int i;
	
	for(i=0; i<NV; i++)
	{
		printf("%5d",v[i]);
	}
}

main()
{
	int v[NV], i, x;
	
	printf("\n Inserire un elenco da %d numeri :) \n",NV);
		
		for(i=0; i<NV; i++)
		{
			printf("\n\t Inserire il %d^ valore: \t",i+1);
			scanf("%d",&v[i]);
		}
		
		Bubble_Sort(v);		
		
		printf("\n\n");
		Stampa_Vet(v);
		printf("\n\n");
		
		system("pause");
		
		printf("\n\n Digitare il valore da cercare nell'elenco: \t");
		scanf("%d",&x);
		
		printf("\n\n");
		Stampa_Vet(v);
		printf("\n\n");
		
		if(Ricerca_Bin(v, x))
		printf("\n Si, il valore e' presente nell'elenco ;) \n");
		else
		printf("\n No, il valore non e' presente nell'elenco :( \n");
		
		system("pause");
}








