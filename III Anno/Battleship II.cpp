#include<iostream>
#include<windows.h>

#define STR 25     // Lunghezza stringhe
#define COO 5     // Dimensioni della griglia
#define DELAY 2000    // Millisecondi di delay
#define FLOTTA 5     // Navi della flotta

int tab1[2][COO][COO], tab2[2][COO][COO], navi1=FLOTTA, navi2=FLOTTA;
bool peace=true;

void Tabella1()
{
	int i, i1;
	
	if(peace)
	{
		printf("\n\n");
		for(i=0; i<COO; i++)
		{
			for(i1=0; i1<COO; i1++)
			{
				Sleep(25);
				printf("%7d",tab1[0][i][i1]);
			}
			printf("\n\n");
		}
		printf("\n");
	}
	else
	{
		printf("\n\n");
		for(i=0; i<COO; i++)
		{
			for(i1=0; i1<COO; i1++)
			{
				Sleep(25);
				printf("%7d",tab1[1][i][i1]);
			}
			printf("\n\n");
		}
		printf("\n");		
	}
}

//______________________________________________________________________________________

void Tabella2()
{
	int i, i1;
	
	if(peace)
	{
		printf("\n\n");
		for(i=0; i<COO; i++)
		{
			for(i1=0; i1<COO; i1++)
			{
				Sleep(25);
				printf("%7d",tab2[0][i][i1]);
			}
			printf("\n\n");
		}
		printf("\n");
	}
	else
	{
		printf("\n\n");
		for(i=0; i<COO; i++)
		{
			for(i1=0; i1<COO; i1++)
			{
				Sleep(25);
				printf("%7d",tab2[1][i][i1]);
			}
			printf("\n\n");
		}
		printf("\n");		
	}
}

//______________________________________________________________________________________

void Inserimento1()
{
	int x, x1, i;
	bool occupato=false;	
	
	if(peace)
	{
		for(i=0; i<FLOTTA; i++)
		{
			do
			{
				printf("\n Inserisci la Nave n. %d \t",i+1);
				scanf("%d%d",&x,&x1);
				if(x<0 || x1<0 || x>=COO || x1>=COO || tab1[0][x][x1]==1)
				{
					occupato=true;
					system("color 0c");
					printf("\n Errore, coordinate non valide :( \n\n");
					Sleep(DELAY);
					system("color 0f");
				}
				else
				{
					tab1[0][x][x1]=1;
					occupato=false;
				}						
			}
			while(x<0 || x1<0 || x>=COO || x1>=COO || occupato);			
		}
	}
}

//______________________________________________________________________________________

void Inserimento2()
{
	int x, x1, i;
	bool occupato=false;
	
	for(i=0; i<FLOTTA; i++)
	{
		do
		{
			printf("\n Inserisci la Nave n. %d \t",i+1);
			scanf("%d%d",&x,&x1);
			if(x<0 || x1<0 || x>=COO || x1>=COO || tab2[0][x][x1]==1)
			{
				occupato=true;
				system("color 0c");
				printf("\n Errore, coordinate non valide :( \n\n");
				Sleep(DELAY);
				system("color 0f");
			}
			else
			{
				tab2[0][x][x1]=1;
				occupato=false;
			}						
		}
		while(x<0 || x1<0 || x>=COO || x1>=COO || occupato);			
	}
}

//______________________________________________________________________________________

void Attacco1()
{
	int x, x1;
         
    do
    {
        printf("\n e' il tuo turno! Digita le coordinate del punto che vuoi colpire ;) \t");
        scanf("%d%d",&x,&x1);
        
        if(x<0 || x1<0 || x>=COO || x1>=COO)
        {
        	system("color 0c");
            printf("\n Errore, coordinate non valide... :/ \n\n");
            Sleep(DELAY);
            system("color 0f");
		}
		else
		{
			if(tab2[1][x][x1]==7 || tab2[1][x][x1]==3)
            {
                system("color 0c");
                printf("\n Errore, berseglio gia' colpito! D: \n\n");
                Sleep(DELAY);
                system("color 0f");
            }
            else
            {
				if(tab2[0][x][x1]==0)
				{
					system("color 0b");
					tab2[1][x][x1]=7;
                	printf("\n Acqua: nessun bersaglio colpito :( \n\n\n\n");
                	Sleep(DELAY);
                	system("color 0f");
				}
				else
				{
					if(tab2[0][x][x1]==1)
         			{
             			tab2[1][x][x1]=3;
            			system("color 0a");
             			printf("\n Bersaglio colpito e affondato! Complimenti :D \n\n\n\n");
             			navi2--;
             			Sleep(DELAY);
             			system("color 0f");
         			}              	            	
				}
			}
		}
	}
	while(tab2[1][x][x1]==7 || tab2[1][x][x1]==3 || x<0 || x1<0 || x>=COO || x1>=COO);
}

//______________________________________________________________________________________

void Attacco2()
{
	int x, x1;
         
    do
    {
        printf("\n e' il tuo turno! Digita le coordinate del punto che vuoi colpire ;) \t");
        scanf("%d%d",&x,&x1);
        
        if(x<0 || x1<0 || x>=COO || x1>=COO)
        {
        	system("color 0c");
            printf("\n Errore, coordinate non valide... :/ \n\n");
            Sleep(DELAY);
            system("color 0f");
		}
		else
		{
			if(tab1[1][x][x1]==7 || tab1[1][x][x1]==3)
            {
                system("color 0c");
                printf("\n Errore, berseglio gia' colpito! D: \n\n");
                Sleep(DELAY);
                system("color 0f");
            }
            else
            {
				if(tab1[0][x][x1]==0)
				{
					system("color 0b");
					tab1[1][x][x1]=7;
                	printf("\n Acqua: nessun bersaglio colpito :( \n\n\n\n");
                	Sleep(DELAY);
                	system("color 0f");
				}
				else
				{
					if(tab1[1][x][x1]==1)
         			{
             			tab1[2][x][x1]=3;
            			system("color 0a");
             			printf("\n Bersaglio colpito e affondato! Complimenti :D \n\n\n\n");
             			navi1--;
             			Sleep(DELAY);
             			system("color 0f");
         			}              	            	
				}
			}
		}
	}
	while(tab2[1][x][x1]==7 || tab2[1][x][x1]==3 || x<0 || x1<0 || x>=COO || x1>=COO);
}

//______________________________________________________________________________________

main()
{
    char str1[STR], str2[STR];	
	int coordinate=COO;
	bool end=false;
	
	printf("\n\n Salve! Benvenuti in 'Battaglia Navale'! :D \n\n  ");
	Sleep(DELAY);
	do{
		printf("\n\n Inserire il nickname del Giocatore n. 1 (massimo 25 lettere) ;) \t");
		gets(str1);
		if(strlen(str1)>=STR)
		{
			system("color 0c");
			printf("\n Errore, il nickname e' troppo lungo :/ \n\n");
			Sleep(DELAY);
			system("color 0f");
			
		}		
	}
	while(strlen(str1)>=STR);
	
	do{
		printf("\n\n Inserire il nickname del Giocatore n. 2 (massimo 25 lettere) ;) \t");
		gets(str2);
		if(strlen(str2)>=STR)
		{
			system("color 0c");
			printf("\n Errore, il nickname e' troppo lungo :/ \n\n");
			Sleep(DELAY);
			system("color 0f");
		}		
		if(strcmp(str1,str2)==0)
		{
			system("color 0c");
			printf("\n Errore, questo nickname e' uguale a quello del Giocatore n. 1 ");
			puts(str1);	
			Sleep(DELAY);
			system("color 0f");	
		}						
	}
	while(strlen(str2)>=STR || strcmp(str1,str2)==0);
	
	Sleep(DELAY);
	system("cls");
	printf("\n\n Bene, ecco a voi la griglia di battaglia! >:) ");
	
	Tabella1();
	
	Sleep(DELAY);
	printf("\n Ora, a turno, potrete inserire le n. %d navi della vostra flotta... \n Le coordinate vanno da 0 a %d :) \n\n\n",navi1,coordinate-1);
	system("pause");
	
	puts(str1);
	printf(" tocca a te! Inserisci prima la riga e poi la colonna. Non far sbirciare al tuo avversario ;) \n");
	Sleep(DELAY);
	Inserimento1();
	printf("\n Bene, questa e' la tua flotta! Gli 1 rappresentano le tue navi :D");
	Tabella1();
		
	system("pause");
	system("cls");
	
	puts(str2);
	printf(" e' il tuo momento! Inserisci prima la riga e poi la colonna. Non far sbirciare al tuo avversario ;) \n");
	Sleep(DELAY);
	Inserimento2();
	printf("\n Ed ecco anche la tua flotta! Gli 1 rappresentano le tue navi :D");
	Tabella2();
	
	system("pause");
	system("cls");
	
	peace=false;
	
	printf("\n Pronti? Diamo inizio alla battaglia! >:) \n\n\n");
	   
    do
    {
               puts(str1);
               Attacco1();
               Tabella2();
               if(navi2==0)
               end=true;
               
               puts(str2);
               Attacco2();
               Tabella1();
               if(navi1==0)
               end=true;             
    }
	while(!end);
	
	system("cls");
	
	if(navi2==0)
	{
               puts(str1);
               printf(" complimenti, hai vinto la partita! Ecco i bersagli che hai colpito: \n\n");
               Tabella2();
    }
    else
    if(navi1==0)
    {
                puts(str2);
                printf(" complimenti, hai vinto la partita! Ecco i bersagli che hai colpito: \n\n");
                Tabella1();
    }
		
	system("pause");	
}
	
