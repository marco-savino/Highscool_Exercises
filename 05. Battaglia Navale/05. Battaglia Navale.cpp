#include<iostream>
#include<windows.h>

#define STR 25     // Lunghezza stringhe
#define COO 5     // Dimensioni della griglia
#define DELAY 2000    // Millisecondi di delay
#define FLOTTA 5     // Navi della flotta

/*
Player 0 = Tabella impostata dal giocatore n. 1
Player 1 = Tabella impostata dal giocatore n. 2
Player 2 = Tabella attaccata dal giocatore n. 2, che sarebbe quella del giocatore n. 1
Player 3 = Tabella attaccata dal giocatore n. 1, che sarebbe quella del giocatore n. 2
*/

int tab[4][COO][COO], flotta[2];

void Stampa_Tab(int player)
{
	/*
		- Scopo: stampare la tabella di un determinato giocatore
		- Input: giocatore
		- Output: ---
		- I/O: ---
		- Return: ---
	*/
	
	int i, i1;
	
	for(i=0; i<COO; i++)
	{
		for(i1=0; i1<COO; i1++)
		{
			printf("%6d",tab[player][i][i1]);
		}	
		printf("\n\n");	
	}
}

void Inserimento_Navi(int player, int num)
{
	/*
		- Scopo: inserire una nave
		- Input: numero da controllare
		- Output: ---
		- I/O: ---
		- Return: true se e' primo, false se non e' primo
	*/
	
	int x, x1;
	bool error=false;	
	
	do
	{
		printf("\n Inserisci la Nave n. %d: \t",num+1);
		scanf("%d%d",&x,&x1);
		if(x<0 || x1<0 || x>=COO || x1>=COO || tab[player][x][x1]==1)
		{
			error=true;
			system("color 0c");
			printf("\n Errore, coordinate gia' usate o non valide :( \n\n");
			Sleep(DELAY);
			system("color 0f");
		}
		else
		{
			tab[player][x][x1]=1;
			error=false;
		}						
	}
	while(error);				
}

void Attacco(int player)
{
	/*
		- Scopo: attaccare una determinata coordinata e dare il risultato dell'attacco
		- Input: giocatore (il suo turno)
		- Output: ---
		- I/O: ---
		- Return: ---
	*/
	
	int x, x1;
	bool error=false;
		
	do
	{
		scanf("%d%d",&x,&x1);
		
		if(x<0 || x1<0 || x>=COO || x1>=COO)
        {
        	error=true;
        	system("color 0c");
            printf("\n Errore, coordinate non valide... :/ \n\n");
            Sleep(DELAY);
            system("color 0f");
            printf("\n Reinserire i valori: \t");
		}
		else
		{
			if(tab[player][x][x1]==7 || tab[player][x][x1]==3)
            {
            	error=true;
                system("color 0c");
                printf("\n Errore, coordinate gia' inserite! D: \n\n");
                Stampa_Tab(player);
                Sleep(DELAY);
                system("color 0f");
                printf("\n Reinserire i valori: \t");
            }
            else
            error=false;
		}
	}
	while(error);
	
	if(!error)
	{
		if(tab[player-2][x][x1]==0)
		{
			system("color 0b");
			tab[player][x][x1]=7;
            printf("\n Acqua: nessun bersaglio colpito :( \n\n\n\n");
            Stampa_Tab(player);
            Sleep(DELAY);
            system("color 0f");
		}
		else
		{
			if(tab[player-2][x][x1]==1)
			{
				tab[player][x][x1]=3;
            	system("color 0a");
             	printf("\n Bersaglio colpito e affondato! Complimenti :D \n\n\n\n");
             	Stampa_Tab(player);
             	flotta[player-2]--;
             	Sleep(DELAY);
             	system("color 0f");
			}
		}
	}
	
}

main()
{
    char str1[STR], str2[STR];	
	int i;
	bool end=false;
	
	flotta[0]=FLOTTA;
	flotta[1]=FLOTTA;
	
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
	printf("\n Ora, a turno, potrete inserire le n. %d navi della vostra flotta... \n Le coordinate vanno da 0 a %d :) \n\n\n",FLOTTA,COO-1);
	Sleep(DELAY);
	
	puts(str1);
	printf(" tocca a te! Inserisci prima la riga e poi la colonna. Non far sbirciare al tuo avversario ;) \n\n");
	system("pause");
	
	for(i=0; i<FLOTTA; i++)
	{
		Inserimento_Navi(0, i);
		Stampa_Tab(0);
		system("pause");
		system("cls");
	}
		
	printf("\n Bene, questa e' la tua flotta! Gli 1 rappresentano le tue navi :D \n\n");
	Stampa_Tab(0);
	system("pause");
	system("cls");
	
	puts(str2);
	printf(" e' il tuo momento! Inserisci prima la riga e poi la colonna. Non far sbirciare al tuo avversario ;) \n\n");
	Sleep(DELAY);
	
	for(i=0; i<FLOTTA; i++)
	{		
		Inserimento_Navi(1, i);
		Stampa_Tab(1);
		system("pause");
		system("cls");
	}
	
	printf("\n Ed ecco anche la tua flotta! Gli 1 rappresentano le tue navi :D \n\n");
	Stampa_Tab(1);
	system("pause");
	system("cls");
	
	printf("\n Ed ora... Che inizi la battaglia!!! >:D \n\n\n");
	
	
	do
    {
               puts(str1);
               printf("\n e' il tuo turno! Digita le coordinate del punto che vuoi colpire ;) \t");
               Attacco(3);
               printf("\n\n\n\n");
               if(flotta[1]==0)
               end=true;
               
               puts(str2);
               printf("\n tocca a te! Digita le coordinate del punto che vuoi colpire ;) \t");
               Attacco(2);
               printf("\n\n\n\n");
               if(flotta[0]==0)
               end=true;             
    }
	while(!end);
	
	system("cls");
	
	if(flotta[1]==0)
	{
               puts(str1);
               printf(" complimenti, hai vinto la partita! Ecco i bersagli che hai colpito: \n\n");
               Stampa_Tab(3);
    }
    else
    if(flotta[0]==0)
    {
                puts(str2);
                printf(" complimenti, hai vinto la partita! Ecco i bersagli che hai colpito: \n\n");
                Stampa_Tab(2);
    }
		
	system("pause");	
}

