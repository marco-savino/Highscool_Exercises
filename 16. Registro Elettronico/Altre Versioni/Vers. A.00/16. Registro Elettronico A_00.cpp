
// NOTA: le stringhe funzionano solo a singolo carattere e non leggono gli spazi

#include<iostream>
#include<windows.h>
using namespace std;

#define MAXDAY 3
#define MAXSTUD 3
#define SUBJECT 2
#define RELAX 50

struct mtx
{
	float voto;
	string nota;
	bool assente;
};
typedef struct mtx t_registro;


Inizializza_Tutto(t_registro re[][MAXDAY][SUBJECT][MAXSTUD], string clas[])
{
	int i, i1, i2, i3;
	
	for(i=0; i<2; i++)
	{
		for(i1=0; i1<MAXDAY; i1++)
		{
			for(i2=0; i2<SUBJECT; i2++)
			{
				for(i3=0; i3<MAXSTUD; i3++)
				{
					re[i][i1][i2][i3].voto=0;
					re[i][i1][i2][i3].nota='/';
					re[i][i1][i2][i3].assente=true;
				}
			}
		}
	}
	
	clas[0]='a';
	clas[1]='b';
	clas[2]='c';
}

void Stampa_Tutto(t_registro re[][MAXDAY][SUBJECT][MAXSTUD], string clas[])
{
	int i, i1, i2, i3;
	
	for(i=0; i<2; i++)
	{
		Sleep(RELAX);
		cout <<"\n\n\n " << i+1 <<"^ Quadrimestre: \n\n ";
		for(i1=0; i1<MAXDAY; i1++)
		{
			Sleep(RELAX);
			cout <<"\n\t " << i1+1 <<"^ Giorno: \n\n ";	
			for(i2=0; i2<SUBJECT; i2++)
			{
				Sleep(RELAX);
				cout <<"\n\n\t\t " << i2+1 <<"^ Materia: \n\n ";	
				for(i3=0; i3<MAXSTUD; i3++)
				{
					Sleep(RELAX);
					cout <<"\n\n\t\t\t Studente " << clas[i3] << "\n";	
					Sleep(RELAX);
					cout <<"\n\t\t\t\t - Voto: " << re[i][i1][i2][i3].voto;
					Sleep(RELAX);
					cout <<"\n\t\t\t\t - Annotazione: " << re[i][i1][i2][i3].nota;
					Sleep(RELAX);
					if(re[i][i1][i2][i3].assente)
					cout <<"\n\t\t\t\t - Assenza: Si";
					else
					cout <<"\n\t\t\t\t - Assenza: No"; 
				}
			}	
		}
	}
}

main()
{
	t_registro re[2][MAXDAY][SUBJECT][MAXSTUD];
	int quad, day, subject, pos, inputint;
	char inputchar;
	bool repeat;
	string clas[MAXSTUD], student;
	

	Inizializza_Tutto(re, clas);
	
	
	do
	{
		repeat=false;
		cout <<"\n\n\n Selezionare il quadrimestre: \n\n\t 1. I Quadrimestre \n\t 2. II Quadrimestre \n";
		cin >> quad;
		if(quad<1 || quad>2)
		{
			cout <<"\n\n Errore, inserire un valore corretto :/ \n\n";
			repeat=true;
		}
		else
		{
			quad--;
			do
			{
				repeat=false;
				cout <<"\n\n\n Digitare il giorno:  \n";
				cin >> day;
				if(day<1 || day>MAXDAY)
				{
					cout <<"\n\n Errore, inserire un giorno corretto :/ \n\n";
					repeat=true;
				}
				else
				{
					day--;
					do
					{
						repeat=false;
						cout <<"\n\n\n Selezionare una materia: \n\n\t 1. Italiano \n\t 2. Matematica \n";		
						cin >> subject;
						if(subject<1 || subject>SUBJECT)
						{
							cout <<"\n\n Errore, inserire un valore corretto :/ \n\n";
							repeat=true;
						}
						else
						{
							subject--;
							do
							{
								repeat=false;
								cout <<"\n\n\n Digita il nome dello studente: \t";
								cin >> student;
								pos=0;
								do
								{
									if(student!=clas[pos])
									{
										repeat=true;
										pos++;
									}
									else
									{
										repeat=false;
									}	
								}
								while(pos<MAXSTUD && repeat);
								if(pos==MAXSTUD)
								{
									cout <<"\n\n Errore, digitare il nome correttamente :/ \n\n";
									repeat=true;
								}
								else
								{
									do
									{
										repeat=false;
										cout <<"\n\n\n Selezionare l'operazione desiderata: \n\n\t 1. Inserire voto \n\t 2. Scrivere una nota \n\t 3. Annotare un'assenza \n";
										cin >> inputint;
										switch(inputint)
										{
											case 1:
											{
												do
												{
													repeat=false;
													cout <<"\n\n Inserire il voto: \t";
													cin >> re[quad][day][subject][pos].voto;
													if(re[quad][day][subject][pos].voto<1 || re[quad][day][subject][pos].voto>10)
													{
														cout <<"\n\n Errore, digitare un voto valido :/ \n\n";
														repeat=true;
													}
												}
												while(repeat);
												break;
											}
											case 2:
											{
												repeat=false;
												cout <<"\n\n Scrivere la nota: \n\t";
												cin >> re[quad][day][subject][pos].nota;
												break;
											}
											case 3:
											{
												do
												{
													repeat=false;
													cout <<"\n\n Lo studente e' assente? Digitare y/n: \t";
													cin >> inputchar;
													if(inputchar!='y' && inputchar!='n')
													{
														cout <<"\n\n Errore, digitare una risposta valida :/ \n\n";
														repeat=true;
													}
													else
													{
														if(inputchar=='y')
														re[quad][day][subject][pos].assente=true;
														else
														re[quad][day][subject][pos].assente=false;
													}
												}
												while(repeat);
												break;
											}
											default:
											{
												cout <<"\n\n Errore, digitare il nome correttamente :/ \n\n";
												repeat=true;
											}
										}
										
										if(!repeat)
										{
											do
											{		
												repeat=false;									
												cout <<"\n Vuoi eseguire un'altra operazione con le stesse modalita'? y/n \t ";
												cin >> inputchar;
												if(inputchar!='y' && inputchar!='n')
												{
													cout <<"\n\n Errore, digitare una risposta valida :/ \n\n";
													repeat=true;
												}
											}
											while(repeat);	
											if(inputchar=='y')
											repeat=true;
										}
									}
									while(repeat);
									
									if(!repeat)
									{
										do
										{		
											repeat=false;									
											cout <<"\n Selezionare un altro studente? y/n \t ";
											cin >> inputchar;
											if(inputchar!='y' && inputchar!='n')
											{
												cout <<"\n\n Errore, digitare una risposta valida :/ \n\n";
												repeat=true;
											}
										}
										while(repeat);	
										if(inputchar=='y')
										repeat=true;
									}
								}	
							}
							while(repeat);
							
							if(!repeat)
							{
								do
								{		
									repeat=false;									
									cout <<"\n Selezionare un'altra materia? y/n \t ";
									cin >> inputchar;
									if(inputchar!='y' && inputchar!='n')
									{
										cout <<"\n\n Errore, digitare una risposta valida :/ \n\n";
										repeat=true;
									}
								}
								while(repeat);	
								if(inputchar=='y')
								repeat=true;
							}
						}
					}
					while(repeat);
					
					if(!repeat)
					{
						do
						{		
							repeat=false;									
							cout <<"\n Selezionare un'altra data? y/n \t ";
							cin >> inputchar;
							if(inputchar!='y' && inputchar!='n')
							{
								cout <<"\n\n Errore, digitare una risposta valida :/ \n\n";
								repeat=true;
							}
						}
						while(repeat);	
						if(inputchar=='y')
						repeat=true;
					}	
				}
			}
			while(repeat);
			
			if(!repeat)
			{
				do
				{		
					repeat=false;									
					cout <<"\n Riselezionare il quadrimestre? y/n \t ";
					cin >> inputchar;
					if(inputchar!='y' && inputchar!='n')
					{
						cout <<"\n\n Errore, digitare una risposta valida :/ \n\n";
						repeat=true;
					}
				}
				while(repeat);	
				if(inputchar=='y')
				repeat=true;
			}
		}	
	}
	while(repeat);
	
	
	Stampa_Tutto(re, clas);
	
	cout <<"\n\n\n\n\n";
	system("pause");
	
}

