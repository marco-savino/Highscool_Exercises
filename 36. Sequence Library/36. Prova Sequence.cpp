
#include<iostream>
#include"sequencedin_savino.h"

using namespace std;

main()
{
	int choice, check, n;
	bool is;
	info_t x;
	sequence s;
	
	do
	{
		cout<<"\n\n\n Seleziona un'operazione: \n\t 1- Crea_Seq(sequence *s) \n\t 2- Get_Elem_Pos(sequence s, info_t *x, int pos) \n\t 3- Set_Elem_Pos(sequence *s, info_t x, int pos) \n\t 4- IS_Vuota(sequence s) \n\t 5- Insert_Seq(sequence *s, info_t x, int pos) \n\t 6- Append(sequence *s, info_t x) \n\t 7- Delete_Seq(sequence *s, int pos) \n\t 8- Len_Seq(sequence s) \n\t 9- Find_Seq(sequence s, info_t x) \n\t 0- Esci dal Programma  \n\n\t";
		cin>>choice;
		if(choice!=0)
		{
			switch(choice)
			{
				case 1:
				{
					Crea_Seq(&s);		
				}
				break;
				
				case 2:
				{

					cout<<"\n Inserire: \n > Posizione interessata \t";
					cin>>n;
					check=Get_Elem_Pos(s, &x, n);
					switch(check)
					{
						case 0:
						{
							cout<<"\n > Informazione: "<<x<<"\n\n";
						}
						break;
						case 1:
						{
							cout<<"\n Errore 01: la posizione digitata non e' compatibile con la lunghezza attuale della sequenza \n\n";
						}
						break;
						case 2:
						{
							cout<<"\n Errore 02: la sequenza e' vuota \n\n";
						}
					}		
				}
				break;
				
				case 3:
				{
					cout<<"\n Inserire: \n > Informazione aggiornata \t";
					cin>>x;
					cout<<" > Posizione interessata \t";
					cin>>n;
					check=Set_Elem_Pos(&s, x, n);
					switch(check)
					{
						case 0:
						{
							Get_Elem_Pos(s, &x, n);
							cout<<"\n > Informazione aggiornata (verificata): "<<x<<"\n\n";
						}
						break;
						case 1:
						{
							cout<<"\n Errore 01: la posizione digitata non e' compatibile con la lunghezza attuale della sequenza \n\n";
						}
						break;
						case 2:
						{
							cout<<"\n Errore 02: la sequenza e' vuota \n\n";
						}
					}		
				}
				break;
				
				case 4:
				{
					if(IS_Vuota(s))
					cout<<"\n La sequenza e' vuota \n\n";
					else
					cout<<"\n La sequenza non e' vuota \n\n";
				}
				break;
				
				case 5:
				{
					cout<<"\n Inserire: \n > Informazione nuovo elemento \t";
					cin>>x;
					cout<<" > Posizione desiderata \t";
					cin>>n;
					check=Insert_Seq(&s, x, n);
					switch(check)
					{
						case 0:
						{
							Get_Elem_Pos(s, &x, n);
							cout<<"\n > Informazione inserita (verificata): "<<x<<"\n\n";
						}
						break;
						case 1:
						{
							cout<<"\n Errore 01: la posizione digitata non e' compatibile con la lunghezza attuale della sequenza \n\n";
						}
						break;
						case 3:
						{
							cout<<"\n Errore 03: la sezione HEAP della RAM e' piena; riprovare più tardi o riavviare il computer \n\n";
						}
					}		
				}
				break;
				
				case 6:
				{
					cout<<"\n Inserire: \n > Informazione nuovo elemento \t";
					cin>>x;
					check=Append(&s, x);
					switch(check)
					{
						case 0:
						{
							n=Len_Seq(s);
							Get_Elem_Pos(s, &x, n);
							cout<<"\n > Informazione inserita (verificata): "<<x<<"\n\n";
						}
						break;
						case 3:
						{
							cout<<"\n Errore 03: la sezione HEAP della RAM e' piena; riprovare più tardi o riavviare il computer \n\n";
						}
					}		
				}
				break;
				
				case 7:
				{
					cout<<"\n Inserire: \n > Posizione dell'elemento da eliminare \t";
					cin>>n;
					check=Delete_Seq(&s, n);
					switch(check)
					{
						case 0:
						{
							check=Get_Elem_Pos(s, &x, n);
							cout<<"\n > Informazione eliminata correttamente \n\n";
						}
						break;
						case 1:
						{
							cout<<"\n Errore 01: la posizione digitata non e' compatibile con la lunghezza attuale della sequenza \n\n";
						}
						break;
					}					
				}
				break;
				
				case 8:
				{
					cout<<"\n La lunghezza della sequenza e' di n. "<<Len_Seq(s)<<" elementi \n\n";
				}
				break;
				
				case 9:
				{
					cout<<"\n Inserire l'informazione da cercare: ";
					cin>>x;
					if(Find_Seq(s, x))
					cout<<"\n Si, e' presente \n\n";
					else
					cout<<"\n No, non e' presente \n\n";
				}
				break;
				
				case 0:
				{
					system("pause");
				}
				
			}
		}
	}
	while(choice!=0);
	
}
