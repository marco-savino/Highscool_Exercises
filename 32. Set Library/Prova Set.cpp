
#include<iostream>
#include"set_savino.h"

using namespace std;

void Stampa_Set(int v[], int len)
{
	int i;
	
	for(i=0; i<len; i++)
	{
		printf("%5d",v[i]);
	}
}

main()
{
	int scelta, n, n1, flag;
	set s, s1;
	
	do
	{
		cout<<"\n\n\n Seleziona un'operazione: \n\t 1- Crea_Set(set *s) \n\t 2- GetElem(set s, unsigned int i, int *n) \n\t 3- SetElem(set *s, unsigned int i, int n) \n\t 4- Insert_Elem(set *s, int n) \n\t 5- Del_Elem(set *s, int n) \n\t 6- IS_Empty(set s) \n\t 7- IS_Full(set s) \n\t 8- IS_In_Set(set s, int n) \n\t 9- Union(set a, set b, set *c) \n\t10- Inters(set a, set b, set *c) \n\t11- Compl(set a, set b, set *c) \n\t 0- Esci dal Programma \n\n\t";
		cin>>scelta;
		if(scelta!=0)
		{
			switch(scelta)
			{
				case 1:
				{
					Crea_Set(&s);
					Stampa_Set(s.elem, s.len);			
				}
				break;
				case 2:
				{
					cout<<"\n Inserire la posizione del valore da conoscere (da 0 a len-1): ";
					cin>>n;
					flag=GetElem(s, n, &n1);
					if(flag==0)
					cout<<n1;
					else
					cout<<"\n Il la posizione cercata non esiste \n";
				}
				break;
				case 3:
				{
					cout<<"\n Inserire valore contatore: ";
					cin>>n;
					i=Set_counter(n, i);
					cout<<Get_counter(i);
				}
				break;
				case 4:
				{
					i=Crea_counter();
					n=Get_counter(i);
					cout<<n;
				}
				break;
				case 5:
				{
					if(IS_count_zero(i))
					cout<<"\n\t E' zero: "<<Get_counter(i)<<"\n";
					else
					cout<<"\n\t Non e' zero: "<<Get_counter(i)<<"\n";
				}
				break;
				case 6:
				{
					cin>>n;
					if(IS_count_Greater(i, n))
					cout<<"\n\t Il contatore di valore "<<Get_counter(i)<<" e' piu' grande del numero "<<n<<"\n";
					else
					cout<<"\n\t Il contatore di valore "<<Get_counter(i)<<" non e' piu' grande del numero "<<n<<"\n";
				}
				break;
				case 7:
				{
					cin>>n;
					if(IS_count_Lower(i, n))
					cout<<"\n\t Il contatore di valore "<<Get_counter(i)<<" e' piu' piccolo del numero "<<n<<"\n";
					else
					cout<<"\n\t Il contatore di valore "<<Get_counter(i)<<" non e' piu' piccolo del numero "<<n<<"\n";
				}
				break;
				case 8:
				{
					cin>>n;
					if(IS_count_Eq(i, n))
					cout<<"\n\t Il contatore di valore "<<Get_counter(i)<<" e' pari al numero "<<n<<"\n";
					else
					cout<<"\n\t Il contatore di valore "<<Get_counter(i)<<" non e' pari al numero "<<n<<"\n";
				}
				break;
				case 9:
				{
					cout<<Get_counter(i)<<" ---> ";
					i=Inc_counter(i);
					cout<<Get_counter(i);
					
				}
				break;
				case 10:
				{
					cout<<Get_counter(i)<<" ---> ";
					i=Dec_counter(i);
					cout<<Get_counter(i);
				}
				break;
				case 0:
				{
					system("pause");
				}
				
			}
		}
	}
	while(scelta!=0);
	
}
