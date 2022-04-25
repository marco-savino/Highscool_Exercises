#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>
#include<conio.h>
#define r 5
#define c 16
#define x 16
#define y 11
HANDLE hConsole;
WORD wAttr;


int vet_info[x];

//MATRICE DI HAMMING 5x16
int hamming[r][c]={
				   1,1,1,1,1,1,1,0,0,0,0,1,0,0,0,0,
                   1,1,1,1,0,0,0,1,1,1,0,0,1,0,0,0,
                   1,1,0,0,1,1,0,1,1,0,1,0,0,1,0,0,
                   1,0,1,0,1,0,1,1,0,1,1,0,0,0,1,0,
                   1,0,0,1,0,1,1,0,1,1,1,0,0,0,0,1
};
                   
                  
				  
// FUNZIONI
                   
void rosso()
{
     hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
     wAttr=FOREGROUND_RED;
     SetConsoleTextAttribute(hConsole,wAttr);
     }

void verde()
{
     hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
     wAttr=FOREGROUND_GREEN;
     SetConsoleTextAttribute(hConsole,wAttr);
     }

void blu()
{
     hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
     wAttr=FOREGROUND_BLUE;
     SetConsoleTextAttribute(hConsole,wAttr);
     }
                                  
void visualizza()
{
	int i,j;
	for(i=0;i<r;i++)
	{
        for(j=0;j<c;j++)
        printf("%d",hamming[i][j]);
                 
		printf("\n");
    }
}
                                
void carica_info()
{
	int i;
    for(i=0;i<y;i++)
    {
    	do
		{
        	printf("inserire il bit di informazione %d: \n",i+1);
        	scanf("%d",&vet_info[i]);
        	if(vet_info[i]>1)
        	printf("inserimento non valido\n reinserire il valore:\n");
        }
		while(vet_info[i]>1);
    }
}



void stampa_info()
{
    int i;
    for(i=0;i<y;i++)
    printf("%d",vet_info[i]);
    printf("\n");
}
       
void check_pari()
{
    int cont=0,i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<y;j++)
        {
            if(vet_info[j]==1)
            if(hamming[i][j]==1)
            cont++;
            if(cont%2==0)
            vet_info[y+i]=0;
            else
            vet_info[y+i]=1;
            cont=0;
        }
    }
}
                                    
									 
void check_dispari()
{
    int cont=0,i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<y;j++)
        {
            if(vet_info[j]==1)
            if(hamming[i][j]==1)
            cont++;
            if(cont%2==0)
            vet_info[y+i]=1;
            else
            vet_info[y+i]=1;
            cont=0;
        }
    }
}                                                                       
void stampa_check()
{
    int i;
    for(i=0;i<x;i++)
    {
        if(i>10)
        rosso();
        printf("%d",vet_info[i]);
    }
    printf("\n");
}
                     
                     
void esa()
{
    int d,cont,somma,i;
    d=3;
    cont=0;
    somma=0;
    while(d<=15)
    {
        for(cont=0;cont<=3;cont++)
        {
			i=d-cont;
        	somma=somma+vet_info[i]*pow(2,cont);
        }
        printf("%X",somma);
        somma=0;
        d=d+4;
    }
}
           
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		         

int main(int argc,char*argv[])
{
    char d, p, scelta, continua;
    do
    {
         verde();
         visualizza();
         printf("\n\n");
         carica_info();
         visualizza();
         blu();
         stampa_info();
         verde();
         printf("inserisci 'p' per la parita pari\n");
         printf("inserisci 'd' per la parita disppari\n");
         scelta=getche();
         switch(scelta)
         {
                       case 'p':{check_pari();
                       break;}
                       case 'd': {check_dispari();
                       break;}
                       default:{printf("ERRORE, inserimento non valido");}
                       }
                       printf("\n");
                       visualizza();
                       blu();
                       stampa_check();
                       verde();
                       printf("\n");
                       printf("il valore in esadecimale e':");
                       esa();
                       printf("\n");printf("inserire 'c' se si vuole continuare:");
                       scanf("%c", &continua);
                       printf("\n\n");
                       }
                       while(continua=='c');
                       system("pause");
                       return 0;
}
      



