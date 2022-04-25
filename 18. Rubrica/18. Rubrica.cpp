
#include<iostream>
using namespace std;

#define CONTATTI 4
#define MAX_TEL 3



// --- Definizione Record ---


struct s1 
{
	string pref;
	string num;
}; 
typedef struct s1 pref_num_t;

struct s2
{
	pref_num_t tel;
	pref_num_t cel;
};
typedef s2 phones_t;

struct s3
{
	string via;
	int ncivico;
};
typedef struct s3 place_t;

struct s4
{
	int day, month, year;
};
typedef struct s4 date_t;

struct s5
{
	string nome, cognome, luogo_nascita, email;
	phones_t tel_cel[MAX_TEL];
	place_t via_ncivico;
	date_t data_nascita;
};
typedef struct s5 id_t;



// --- Variabili Globali ---


id_t contatto[CONTATTI];
id_t *pcontatto[CONTATTI];
int len=0;



// --- Funzioni & Procedure ---


id_t Inizializza_Contatto()
{	
	/*
		Scopo: creare un contatto con i campi inizializzati 
		Input: ---
		Output: ---
		I/O: ---
		Return: contatto inizializzato appena creato
	*/
	
	int i;
	id_t contatto_vuoto;
	
	contatto_vuoto.nome="zzzzz";
	contatto_vuoto.cognome="zzzzz";
	contatto_vuoto.luogo_nascita="?";
	contatto_vuoto.email="?";
	for(i=0; i<MAX_TEL; i++)
	{
		contatto_vuoto.tel_cel[i].tel.pref="00";
		contatto_vuoto.tel_cel[i].tel.num="00";
		contatto_vuoto.tel_cel[i].cel.pref="00";
		contatto_vuoto.tel_cel[i].tel.num="00";
	}
	contatto_vuoto.via_ncivico.via="? ";
	contatto_vuoto.via_ncivico.ncivico=0;
	contatto_vuoto.data_nascita.day=0;
	contatto_vuoto.data_nascita.month=0;
	contatto_vuoto.data_nascita.year=0;
	
	return(contatto_vuoto);
}


void Inizializza_Rubrica()
{
	/*
		Scopo: inizializzare l'intera rubrica, assegnare i relativi puntatori e rendere non visibili i contatti senza informazioni
		Input: ---
		Output: tutti i campi della rubrica inizializzati, i puntatori assegnati ai contatti e assegnare "false" al campo della struct relativa a ogni contatto
		I/O: ---
		Return: ---
	*/
	
	int i;
	
	contatto[0]=Inizializza_Contatto();
	pcontatto[0]=&contatto[0];
	
	for(i=1; i<CONTATTI; i++)
	{
		pcontatto[i]=&contatto[i];
		*pcontatto[i]=contatto[0];	
	}
}


int Main_Menu()
{
	/*
		Scopo: far visualizzare all'utente le possibili operazioni sulla rubrica
		Input: ---
		Output: ---
		I/O: ---
		Return: operazione selezionata
	*/
	int scelta;
	
	do
	{
		cout << "\n\n Scegli l'operazione: \n\t 1. Visualizza (...) \n\t 2. Inserisci nuovo contatto \n\t 3. Cancella contatto \n\t 4. Modifica (...) \n\t 0. Esci \n\n\n";
		cin >> scelta;
		if(scelta<0 || scelta>4)
		cout << "\n\n Errore, digitare un valore corretto \n\n\n";
		else
		return(scelta);
	}
	while(scelta<0 || scelta>4);	
}


int Menu_Visualizza()
{
	/*
		Scopo: far visualizzare all'utente le possibili scelte di visualizzazione
		Input: ---
		Output: ---
		I/O: ---
		Return: operazione selezionata
	*/
	int scelta;
	
	if(len==0)
	cout <<"\n Nessun dato disponibile, la rubrica e' vuota! \n\n";
	else
	{
		do
	{
		cout << "\n\n Scegli la modalita' di visualizzazione: \n\t 1. Visualizza tutti i nomi e cognomi di tutti i contatti \n\t 2. Visualizza tutte le iformazioni disponibili di un singolo contatto \n\t 3. Visualizza tutte le iformazioni disponibili di tutti i contatti presenti \n\n\n";
		cin >> scelta;
		if(scelta<1 || scelta>3)
		cout << "\n\n Errore, digitare un valore corretto \n\n\n";
		else
		return(scelta);
	}
	while(scelta<1 || scelta>3);	
	}
}


void Stampa_Info(int pos)
{
	/*
		Scopo: stampare tutte le informazioni di un singolo contatto
		Input: ---
		Output: ---
		I/O: ---
		Return: ---
	*/
	
	int i;
	
	cout <<"\n\n Nome: " << pcontatto[pos]->nome;
	cout <<"\n Cognome: " << pcontatto[pos]->cognome;
	cout <<"\n Luogo di Nascita: " << pcontatto[pos]->luogo_nascita;
	cout <<"\n E-mail: " << pcontatto[pos]->email;
	for(i=0; i<MAX_TEL; i++)
	{
		cout <<"\n Telefono " << i+1 <<": " << pcontatto[pos]->tel_cel[i].tel.pref <<" " << pcontatto[pos]->tel_cel[i].tel.num;
		cout <<"\n Cellulare " << i+1 <<": " << pcontatto[pos]->tel_cel[i].cel.pref <<" " << pcontatto[pos]->tel_cel[i].cel.pref;
	}
	cout <<"\n Indirizzo: " << pcontatto[pos]->via_ncivico.via <<" " << pcontatto[pos]->via_ncivico.ncivico;
	cout <<"\n Data di Nascita: " << pcontatto[pos]->data_nascita.day << "/" <<pcontatto[pos]->data_nascita.month << "/" <<pcontatto[pos]->data_nascita.year;
	cout <<"\n\n\n";
}


bool Ricerca_Bin(string name, string surname, int *ppos)
{
	/*
		Scopo: cercare un cottatto nella rubrica
		Input: nome e cognome del contatto
		Output: posizione del contatto (se presente)
		I/O: ---
		Return: true se e' presente, false se non e' presente
	*/
	
	int down=0, up=len-1, mid;

	while(down<=up)
	{
		mid=(down+up)/2;
		if(name==pcontatto[mid]->nome && surname==pcontatto[mid]->cognome)
		{
			*ppos=mid;
			return(true);
		}
		else
		{
			if((name<pcontatto[mid]->nome && surname<=pcontatto[mid]->cognome) || (name<=pcontatto[mid]->nome && surname<pcontatto[mid]->cognome))
			up=mid-1;
			else
			{
				if((name>pcontatto[mid]->nome && surname>=pcontatto[mid]->cognome) || (name>=pcontatto[mid]->nome && surname>pcontatto[mid]->cognome))
				down=mid+1;	
			}
		}
	}
	return(false);
}


void Visualizza()
{
	/*
		Scopo: a seconda della scelta, visualizzare il contenuto desiderato
		Input: ---
		Output: ---
		I/O: ---
		Return: ---
	*/
	
	int i, pos=0;
	char repeat;
	string nome, cognome;

	switch(Menu_Visualizza())
	{
		case 1: 
		{
			i=0;
			while(i<len)
			{
				cout <<"\n\n Nome: " << pcontatto[i]->nome <<"\n Cognome: " << pcontatto[i]->cognome <<"\n\n";	
				i++;	
			}
			cout <<"\n\n\n";
		}
		break;
		
		case 2:
		{
			do
			{
				cout <<"\n\n Inserisci il nome del contatto da cercare: \t";
				cin >> nome;
				cout <<"\n Inserisci il cognome del contatto da cercare: \t";
				cin >> cognome;
	
				if(Ricerca_Bin(nome, cognome, &pos))
				{
					Stampa_Info(pos);
				}	
				else
				{
					do
					{
						cout <<"\n\n Contatto non trovato. Reinserire i dati? y/n \t";
						cin >> repeat;
						if(repeat!='y' && repeat!='n')
						cout <<"\n\n Errore, digitare una risposta corretta \n\n";
					}
					while(repeat!='y' && repeat!='n'); 
				}
			}
			while(repeat=='y');	
		}
		break;
		
		case 3:
		{
			i=0;
			while(i<len)
			{
				Stampa_Info(i);
				i++;
			}
		}
	}
	
}


void Bubble_Sort()
{
	/*
		Scopo: riordinare la rubrica in ordine crescente
		Input: ---
		Output: ---
		I/O: ---
		Return: ---
	*/
	
	int last=CONTATTI-2, i;
	id_t *c;
	bool ordered=false;
	
	while(last>0 && !ordered)
	{
		ordered=true;
		for(i=0; i<=last; i++)
		{
			if((pcontatto[i]->cognome>pcontatto[i+1]->cognome) || (pcontatto[i]->cognome==pcontatto[i+1]->cognome && pcontatto[i]->nome>pcontatto[i+1]->nome))
			{
				c=pcontatto[i];
				pcontatto[i]=pcontatto[i+1];
				pcontatto[i+1]=c;
				ordered=false;									
			}			
		}		
	}
}


void Inserisci_Telefono(string *ppref, string *pnum, int pos)
{
	string n;
	
	do
	{
		cin >> n;
		if(n.size()!=2)
		cout <<"\n Errore, digitare il numero di cifre corretto (2): \n\n";
		else
		*ppref=n;
	}
	while(n.size()!=2);
				
	do
	{
		cin >> n;
		if(n.size()!=10)
		cout <<"\n Errore, digitare il numero di cifre corretto (10): \n\n";
		else
		*pnum=n;
	}
	while(n.size()!=10);
}


void Inserisci()
{
	string nome, cognome;
	char inchar;
	bool repeat, found, ric=false;
	int pos=0;
	
	if(len==CONTATTI)
	cout <<"\n\n La rubrica e' gia' piena! Non puoi aggiungere altri contatti \n\n";
	else
	{
		do
		{
			repeat=false;
			cout <<"\n\n Inserisci il nome: \t";
			cin >> nome;
			cout <<"\n Inserisci il cognome: \t";
			cin >> cognome;
			
			if(Ricerca_Bin(nome, cognome, &pos))
			{	
				do
				{
					repeat=false;
					cout <<"\n\n Errore, il contatto e' gia' presente. Inserire altri dati? y/n";		
					cin >> inchar; 
					if(inchar!='y' && inchar!='n')
					{
						cout <<"\n\n Errore, digitare una risposta corretta \n";
						repeat=true;
					}	
				}
				while(repeat);
			
				if(inchar=='y')
				repeat=true;
			}
			else
			{
				pcontatto[len]->nome=nome;
				pcontatto[len]->cognome=cognome;
				
				cout <<"\n Inserisci il numero di telefono (2 cifre il prefisso, 10 il numero): \n";
				
				Inserisci_Telefono(&pcontatto[len]->tel_cel[0].tel.pref, &pcontatto[len]->tel_cel[0].tel.num, len);
			
				len++;
				Bubble_Sort();
				
				cout <<"\n Il contatto e' stato aggiunto con successo! \n\n";
			}
		}
		while(repeat);
	}
}


void Elimina()
{
	/*
		Scopo: eliminare un contatto
		Input: ---
		Output: ---
		I/O: len (numero attuale di contatti)
		Return: ---
	*/
	int pos, i;
	bool repeat;
	char inchar;
	string nome, cognome;
	
	if(len==0)
	cout <<"\n\n La rubrica e' gia' vuota! \n\n";
	else
	{
		do
		{
			repeat=false;
			cout <<"\n\n Inserisci il nome: \t";
			cin >> nome;
			cout <<"\n Inserisci il cognome: \t";
			cin >> cognome;
	
			if(Ricerca_Bin(nome, cognome, &pos))
			{
				*pcontatto[pos]=Inizializza_Contatto();
				
				Bubble_Sort();

				len--;	
				
				if(Ricerca_Bin(nome, cognome, &pos))
				cout <<"\n Errore, il valore non e' stato eliminato correttamente \n\n";
				else
				cout <<"\n Il contatto e' stato eliminato con successo! \n\n";
			}
			else
			{
				do
				{
					repeat=false;
					cout <<"\n\n Il contatto non e' stato trovato. Cercare di nuovo? y/n \t";
					cin >> inchar;
					if(inchar!='y' && inchar!='n')
					{
						repeat=true;
						cout <<"\n\n Errore, digitare una risposta corretta \n\n";
					}	
				}
				while(repeat);
				
				if(inchar=='y')
				repeat=true;
			}
		}
		while(repeat);	
	}
}


int Menu_Campi()
{
	/*
		Scopo: visualizzare tutti i possibili campi da modificare
		Input: ---
		Output: ---
		I/O: ---
		Return: operazione selezionata
	*/
	int scelta;
	
	do
	{
		cout << "\n\n Scegli il campo da modificare: \n\t 1. Nome \n\t 2. Cognome \n\t 3. Luogo di nascita \n\t 4. E-mail \n\t 5. N. di Telefono 1 \n\t 6. N. di Cellulare 1 \n\t 7. N. di Telefono 2 \n\t 8. N. di Cellulare 2 \n\t 9. N. di Telefono 3 \n\t 10. N. di Cellulare 3 \n\t 11. Via e Numero Civico \n\t 12. Data di nascita \n";
		cin >> scelta;
		if(scelta<1 || scelta>12)
		cout << "\n\n Errore, digitare un valore corretto \n\n\n";
		else
		return(scelta);
	}
	while(scelta<1 || scelta>12);	
}


void Modifica()
{
	string nome, cognome;
	bool repeat;
	char inchar;
	int pos;
	
	if(len==0)
	cout <<"\n\n Nessun dato da modificare, la rubrica e' vuota! \n\n";
	else
	{
	do
	{
		repeat=false;
		cout <<"\n\n Inserisci il nome: \t";
		cin >> nome;
		cout <<"\n\n Inserisci il cognome: \t";
		cin >> cognome;
	
		if(Ricerca_Bin(nome, cognome, &pos))
		{
			switch(Menu_Campi())
			{
				case 1:
				{
					cout <<"\n\n Inserisci il nuovo nome: \t";
					cin >> pcontatto[pos]->nome;
					cout <<"\n\n\n";
					Bubble_Sort();
				}
				break;
				
				case 2:
				{
					cout <<"\n\n Inserisci il nuovo cognome: \t";
					cin >> pcontatto[pos]->nome;
					cout <<"\n\n\n";
					Bubble_Sort();
				}
				break;
				
				case 3:
				{
					cout <<"\n\n Inserisci il luogo di nascita: \t";
					cin >> pcontatto[pos]->luogo_nascita;
					cout <<"\n\n\n";
				}
				break;
				
				case 4:
				{
					cout <<"\n\n Inserisci l'indirizzo e-mail: \t";
					cin >> pcontatto[pos]->email;
					cout <<"\n\n\n";
				}
				break;
				
				case 5:
				{
					cout <<"\n\n Inserisci il 1^ n. di telefono (2 cifre del prefisso, 10 del numero): \n";
					Inserisci_Telefono(&pcontatto[pos]->tel_cel[0].tel.pref, &pcontatto[pos]->tel_cel[0].tel.num, pos);
					cout <<"\n\n\n";
				}
				break;
				
				case 6:
				{
					cout <<"\n\n Inserisci il 1^ n. del cellulare (2 cifre del prefisso, 10 del numero): \n";
					Inserisci_Telefono(&pcontatto[pos]->tel_cel[0].cel.pref, &pcontatto[pos]->tel_cel[0].cel.num, pos);
					cout <<"\n\n\n";
				}
				break;
				
				case 7:
				{
					cout <<"\n\n Inserisci il 2^ n. di telefono (2 cifre del prefisso, 10 del numero): \n";
					Inserisci_Telefono(&pcontatto[pos]->tel_cel[1].tel.pref, &pcontatto[pos]->tel_cel[1].tel.num, pos);
					cout <<"\n\n\n";
				}
				break;
				
				case 8:
				{
					cout <<"\n\n Inserisci il 2^ n. di cellulare (2 cifre del prefisso, 10 del numero): \n";
					Inserisci_Telefono(&pcontatto[pos]->tel_cel[1].cel.pref, &pcontatto[pos]->tel_cel[1].cel.num, pos);
					cout <<"\n\n\n";
				}
				break;
				
				case 9:
				{
					cout <<"\n\n Inserisci il 3^ n. di telefono (2 cifre del prefisso, 10 del numero): \n";
					Inserisci_Telefono(&pcontatto[pos]->tel_cel[2].tel.pref, &pcontatto[pos]->tel_cel[2].tel.num, pos);
					cout <<"\n\n\n";
				}
				break;
				
				case 10:
				{
					cout <<"\n\n Inserisci il 2^ n. di cellulare (2 cifre del prefisso, 10 del numero): \n";
					Inserisci_Telefono(&pcontatto[pos]->tel_cel[2].cel.pref, &pcontatto[pos]->tel_cel[2].cel.num, pos);
					cout <<"\n\n\n";
				}
				break;
				
				case 11:
				{
					cout <<"\n\n Inserisci via e numero civico: \n";
					cin >> pcontatto[pos]->via_ncivico.via;
					cin >> pcontatto[pos]->via_ncivico.ncivico;
					cout <<"\n\n\n";
				}
				break;
				
				case 12:
				{
					cout <<"\n\n Inserisci la data di nascita (giorno, mese, anno): \n";
					
					do
					{
						cin >> pcontatto[pos]->data_nascita.day;
						if(pcontatto[pos]->data_nascita.day<0 || pcontatto[pos]->data_nascita.day>31)
						cout <<"\n\n Errore, inserire un giorno valido \n";
					}
					while(pcontatto[pos]->data_nascita.day<0 || pcontatto[pos]->data_nascita.day>31);
						
					do
					{
						cin >> pcontatto[pos]->data_nascita.month;
						if(pcontatto[pos]->data_nascita.month<0 || pcontatto[pos]->data_nascita.month>12)
						cout <<"\n\n Errore, inserire un mese valido \n";
					}
					while(pcontatto[pos]->data_nascita.month<0 || pcontatto[pos]->data_nascita.month>12);
					
					do
					{
						cin >> pcontatto[pos]->data_nascita.year;
						if(pcontatto[pos]->data_nascita.year<1900 || pcontatto[pos]->data_nascita.year>2017)
						cout <<"\n\n Errore, inserire un anno valido \n";
					}
					while(pcontatto[pos]->data_nascita.year<1900 || pcontatto[pos]->data_nascita.year>2017);
				}
				break;	
			}
			cout <<"\n Il campo del contatto e' stato modificato con successo! \n\n";
		}
		else
		{
			do
			{
				repeat=false;
				cout <<"\n\n Il contatto non e' stato trovato. Cercare di nuovo? y/n \n\n";
				cin >> inchar;
				if(inchar!='y' && inchar!='n')
				{
					repeat=true;
					cout <<"\n\n Errore, digitare una risposta corretta \n\n";
				}
			}
			while(repeat);
			
			if(inchar=='y')
			repeat=true;
		}
	}
	while(repeat);
	}
} 



// --- Main ---


main()
{
	int scelta;
	
	Inizializza_Rubrica();
	
	do
	{	
		scelta=Main_Menu();
	
		switch(scelta)
		{
			case 1: Visualizza();
			break;
			
			case 2: Inserisci();
			break;
			
			case 3: Elimina();
			break;
			
			case 4: Modifica();
			break;
			
			case 0: system("pause");
			break;
			
			default: cout <<"\n\n Errore, inserire un valore corretto \n\n\n";		
		}
	}
	while(scelta!=0);
}
