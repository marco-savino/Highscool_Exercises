
#include<iostream>

#define LIMIT 100


int vet[LIMIT], *p[LIMIT];

void Bubble_Sort(int lenght)
{
	/*
		Scopo: riordinare la rubrica in ordine crescente
		Input: numero di valori esistenti
		Output: ---
		I/O: ---
		Return: ---
	*/
	
	int last=lenght-2, i, *c;
	bool ordered=false;
	
	while(last>0 && !ordered)
	{
		ordered=true;
		for(i=0; i<=last; i++)
		{
			if(*p[i]>*p[i+1])
			{
				c=p[i];
				p[i]=p[i+1];
				p[i+1]=c;
				ordered=false;									
			}			
		}		
	}
}



main()
{    
    int len=0, s, i, x, pos;
    
    bool pres;
     
    for(i=0; i<LIMIT; i++)
    {
        vet[i]=0;
        p[i]=&vet[i];
	}
     
    do
    {            
        printf("\n\n Scegli una delle seguenti operazioni: \n\n\t 1. Visualizza il vettore in maniera ordinata \n\t 2. Aggiungi un numero \n\t 3. Elimina un numero \n\t 0. esci dal programma \n\n");
        scanf("%d",&s);
         
        if(s<0 || s>3)
        printf("\n Errore, inserire un valore corretto :/ \n\n");
        else
        {
            if(s==3 && len==0)
            printf("\n Errore, il vettore e' privo di elementi :/ \n\n");
            else
            {
                if(s==2 && len==LIMIT)
                printf("\n Errore, il vettore e' pieno :/ \n\n");
            }
        }
         
        switch(s)
        {
            case 1:
            {
            	i=0;
            	
                while(i<len)
	            {
                    if(i%5==0)
                    printf("\n\n");
		            printf("%7d",*p[i]);
		            i++;
                }
                printf("\n\n\n\n");
            }
            break;
            
            
            case 2:
            {
                printf("\n Digita il valore da inserire nell'elenco ;) \t");
		        scanf("%d",&x); 
		        *p[len]=x;
		        
				len++;
				
				Bubble_Sort(len);
		    }
		    break;



		    case 3:
		    {
		    	printf("\n Inserisci il valore da cancellare dall'elenco :) \t");
		        scanf("%d",&x);
				
				i=0;
				pres=false;
				do
				{
					if(*p[i]==x)
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
						p[i]=p[i+1];
					}
				len--;
				}
				else
				{
					printf("\n\n Il valore non e' presente :( ");
				}
			}
		}
                            
 
    }
    while(s!=0);
    
    system("pause");
}
             
     
     
     
     
     
     
     
     
     
     

