#include<iostream>
#include<windows.h>

#define MAX_N 10
#define SOGLIA 200


void Stampa_P_Vet(int *v[], int lenght)
{
	/*
		Scopo: stampare i valori contenuti negli indirizzi del vettore di puntatori
		Input: numero di valori da stampare
		Output: ---
		I/O: ---
		Return: ---
	*/
	
	int i;
	
	for(i=0; i<lenght; i++)
    {
        if(i%5==0)
        printf("\n\n");
        printf("%7d",*v[i]);             
    }
}

void Stampa_PP_Vet(int **v[], int lenght)
{
	/*
		Scopo: stampare i valori contenuti negli indirizzi del vettore di doppi puntatori
		Input: numero di valori da stampare
		Output: ---
		I/O: ---
		Return: ---
	*/
	
	int i;
	
	for(i=0; i<lenght; i++)
    {
        if(i%5==0)
        printf("\n\n");
        printf("%7d",**v[i]);             
    }
}


main()
{
	int vet[MAX_N], x, i, lenmag=0, lenmin=0, lenmagp=0, lenmagd=0, lenminp=0, lenmind=0;
	int *p_mag[MAX_N], *p_min[MAX_N];
	int **p_mag_p[MAX_N], **p_mag_d[MAX_N], **p_min_p[MAX_N], **p_min_d[MAX_N];
	
	//srand(time(0));
	
	printf("\n\n Inserire i %d numeri da confrontare ;) \n",MAX_N);
	
	for(i=0; i<MAX_N; i++)
    {
        scanf("%d",&vet[i]);
		//vet[i]=rand()%401-200;           
    }
    
    do
    {
    	printf("\n\n Inserire il numero desiderato (un valore da -%d a %d) :) \t",SOGLIA,SOGLIA);
    	scanf("%d",&x);
    	if(x>SOGLIA || x<-SOGLIA)
    	printf("\n Errore, digitare un valore corretto :/ \n\n");	
	}
	while(x>SOGLIA || x<-SOGLIA);
	
    printf("\n\n\n");
    
    for(i=0; i<MAX_N; i++)
    {
    	if(vet[i]>x)
    	{
    		p_mag[lenmag]=&vet[i];		
    		
    		if(vet[i]%2==0)
    		{
    			p_mag_p[lenmagp]=&p_mag[lenmag];
    			lenmagp++;
			}
			else
			{
				p_mag_d[lenmagd]=&p_mag[lenmag];
				lenmagd++;
			}
			
			lenmag++;
		}
		else
		{
			p_min[lenmin]=&vet[i];
				
			if(vet[i]%2==0)
			{
				p_min_p[lenminp]=&p_min[lenmin];
				lenminp++;
			}
			else
			{
				p_min_d[lenmind]=&p_min[lenmin];
				lenmind++;
			}	
				
			lenmin++;
		}
	}
	
	printf("\n Elenco numeri maggiori di x: ");
	Stampa_P_Vet(p_mag, lenmag);
	
	printf("\n\n\n");
	
	printf("\n Elenco numeri maggiori pari di x: ");
	Stampa_PP_Vet(p_mag_p, lenmagp);
	
	printf("\n\n\n");
	
	printf("\n Elenco numeri maggiori dispari di x: ");
	Stampa_PP_Vet(p_mag_d, lenmagd);
	
	printf("\n\n\n");
	
	printf("\n Elenco numeri minori o uguali di x: ");
	Stampa_P_Vet(p_min, lenmin);
	
	printf("\n\n\n");
	
	printf("\n Elenco numeri minori o uguali pari di x: ");
	Stampa_PP_Vet(p_min_p, lenminp);
	
	printf("\n\n\n");
	
	printf("\n Elenco numeri minori o uguali dispari di x: ");
	Stampa_PP_Vet(p_min_d, lenmind);
	
	printf("\n\n\n\n\n");
	
	system("pause");
		
}


