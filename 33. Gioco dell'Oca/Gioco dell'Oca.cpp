
#include<iostream>
#include<stdlib.h>
#include<windows.h>

#include"dado1_savino.h"

#define MAXELEM 20
#define MAXPLAYERS 8
#define DELAY 1000

using namespace std;

struct z
{
	char name[MAXELEM];
	int pos;
};
typedef struct z player;


int tab[MAXELEM];


void Initialize_Tab()
{
	int normal=40, forward=22, backward=28, retstart=10, random=4;
	bool repeat=false;
	
	srand(time(0));
	
	tab[0]=0;
	
	for(int i=1; i<MAXELEM; i++)
	{
		do
		{
			repeat=false;
			tab[i]=rand()%random+1;
			switch(tab[i])
			{
				case 1:
				{
					normal--;
					if(normal<=0)
					repeat=true;
				}
				break;
				case 2:
				{
					forward--;
					if(forward<=0)
					repeat=true;
				}
				break;
				case 3:
				{
					backward--;
					if(backward<=0)
					repeat=true;
				}
				break;
				case 4:
				{
					retstart--;
					if(retstart<=0)
					{
						repeat=true;
						random--;
					}	
				}
				break;	
			}
		}
		while(repeat);	
	}
}


int Round_Player(player *p, dado *d)
{
	dado d1;
	bool repeat=false;
	
	Lancia_dado(d);
	p->pos=p->pos+GetFaccia(*d);
	
	switch(tab[p->pos])
	{
		case 1:
		{
			return(1);
		}
		break;
		case 2:
		{
			Lancia_dado(&d1);
			p->pos=p->pos+GetFaccia(d1);
			return(GetFaccia(d1));
			//servirebbe la ricorsione
		}
		break;
		case 3:
		{
			Lancia_dado(&d1);
	
			if(GetFaccia(d1)>p->pos)
			{
				p->pos=p->pos+GetFaccia(d1);
				return(GetFaccia(d1));
			}
			else
			{
				p->pos=p->pos+GetFaccia(d1);
				return(0-GetFaccia(d1));
			}
			//servirebbe la ricorsione
		}
		break;
		case 4:
		{
			p->pos=0;
			return(0);
		}
		break;
	}
}



main()
{
	int np, ip=0, ip1=0, spot;
	
	player p[MAXPLAYERS];
	dado d;
	
	
	d=Crea_dado();
	
	Initialize_Tab();
	
	cout<<"\n\n\t Benvenuto al Gioco dell'Oca! \n\n";
	do
	{
		cout<<"\n Selezionare il numero di giocatori (da 2 a 8): \t";
		cin>>np;
		if(np<2 || np>8)
		cout<<"\n\n Errore, digitare un valore corretto \n\n\n";
	}
	while(np<2 || np>8);
	
	for(int i=0; i<np; i++)
	{
		p[i].pos=0;
		cout<<"\n\n Inserire il nome del "<<i+1<<" giocatore: \t";
		cin>>p[i].name;
	}
	
	cout<<"\n\n\n Pronto a iniziare la partita? \n";
	system("pause");
	
	do
	{	
		ip=ip1;
		
		cout<<"\n\n\n Giocatore "<<p[ip].name<<", e' il tuo turno! \n";
		Sleep(DELAY);
		cout<<"\n Lancio del dado in corso... \n";
		Sleep(DELAY*2);
		
		spot=Round_Player(&p[ip], &d);
		
		cout<<"\n Il risultato del lancio e'... "<<GetFaccia(d)<<"! \n";
		
		if(spot==1 && p[ip].pos<MAXELEM)
		{
			cout<<"\n Il giocatore "<<p[ip].name<<" si trova quindi in posizione "<<p[ip].pos<<"... ed e' su una casella normale :) \n\n";	
		}
		else
		{
			if(spot>0 && p[ip].pos<MAXELEM)
			{
				cout<<"\n Il giocatore "<<p[ip].name<<" si trova quindi in posizione "<<p[ip].pos-spot<<"... ma deve avanzare di "<<spot<<" caselle! :D \n";
				cout<<"\n Va quindi sulla casella "<<p[ip].pos<<" \n\n";
			}
			else
			{
				if(spot<0 && p[ip].pos<MAXELEM)
				{
					cout<<"\n Il giocatore "<<p[ip].name<<" si trova quindi in posizione "<<p[ip].pos+(spot*-1)<<"... ma deve indietreggiare di "<<spot<<" caselle! :( \n";
					cout<<"\n Va quindi sulla casella "<<p[ip].pos<<" \n\n";
				}
				else
				{
					if(spot==0 && p[ip].pos<MAXELEM)
					{
						cout<<"\n Il giocatore "<<p[ip].name<<" si trova quindi in posizione "<<p[ip].pos<<"... ma deve tornare al VIA D: \n\n";	
					}
				}
			}
		}	
		
		if(p[ip].pos<MAXELEM)
		{
			cout<<"\n\n Premere un tasto per passare al turno successivo \n\n";
			ip1++;
			if(ip1>=np)
			ip1=0;
		}
		
		system("pause");
		cout<<"\n\n\n\n\n";	
	}
	while(p[ip].pos<MAXELEM);
	
	cout<<"\n\n\n\t Complimenti, giocatore "<<p[ip].name<<", hai vinto la partita!!! GG M8 :D \n\n\n";
	system("pause");	
}

