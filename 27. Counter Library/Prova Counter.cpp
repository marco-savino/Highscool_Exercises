
#include<iostream>
#include"counter_savino.h"

using namespace std;

main()
{
	int s, n;
	bool flag;
	counter i;
	
	do
	{
		cout<<"\n\n\n Seleziona un'operazione: \n\t 1- Get_counter(counter i) \n\t 2- Reset_counter(counter i) \n\t 3- Set_counter(int n, counter i) \n\t 4- Crea_counter() \n\t 5- IS_count_zero(counter i) \n\t 6- IS_count_Greater(counter i, int n) \n\t 7- IS_count_Lower(counter i, int n) \n\t 8- IS_count_Eq(counter i, int n) \n\t 9- Inc_counter(counter i) \n\t10- Dec_counter(counter i) \n\t 0- Esci dal Programma \n\n\t";
		cin>>s;
		if(s!=0)
		{
			switch(s)
			{
				case 1:
				{
					n=Get_counter(i);	
					cout<<n;		
				}
				break;
				case 2:
				{
					i=Reset_counter(i);
					cout<<Get_counter(i);
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
	while(s!=0);
	
}
