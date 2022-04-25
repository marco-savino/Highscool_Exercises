
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include"mylib.h"

#define NMAX 10000 //aggiungere uno 0 e il pc ci metterà una ventina di secondi per il Cicli Fissi

void Compila_Vet(int v[], int len)
{
	for(int i=0; i<len; i++)
	{
		v[i]=rand()%10000;
	}
}

void Stampa_Vet(int v[], int len)
{
	int i;
	
	for(i=0; i<len; i++)
	{
		if(i%10==0)
		printf("\n");
		printf("%5d",v[i]);
	}
	printf("\n\n\n");
}


int main()
{
	time_t ora;
	int v[NMAX];
  
  	srand(time(NULL)); 
  	
  	
  	Compila_Vet(v, NMAX);
  
  	printf("\n\n Premere Invio per avviare l'algoritmo di ordinamento a Cicli Fissi \n\n");
  	system("pause");
  	ora=time(NULL);
  	printf("\n\n L'algoritmo e' stato avviato alle ore %s ... \n",asctime(localtime(&ora)));
	Cicli_Fissi(v, NMAX);
	ora=time(NULL);
	printf("\n ... ed e' terminato alle ore %s :) \n\n",asctime(localtime(&ora)));
	Stampa_Vet(v, 100);
	
	
	Compila_Vet(v, NMAX);
	
	printf("\n\n Premere Invio per avviare l'algoritmo di ordinamento Merge Sort \n\n");
  	system("pause");
  	ora=time(NULL);
  	printf("\n\n L'algoritmo e' stato avviato alle ore %s ... \n",asctime(localtime(&ora)));
	Merge_Sort(v, 0, NMAX-1);
	ora=time(NULL);
	printf("\n ... ed e' terminato alle ore %s :) \n\n\n",asctime(localtime(&ora)));
	Stampa_Vet(v, 100);





  	system("PAUSE");


 }
