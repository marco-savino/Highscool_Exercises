
#include<iostream>
#include"dado2_savino.h"

using namespace std;

main()
{
	int s;
	int n;
	dado d;
	
	do
	{
		cout<<"\n\n\n Seleziona un'operazione: \n\t 1- GetFaccia(dado d) \n\t 2- SetFaccia(int n, dado *d) \n\t 3- Lancia_dado(dado*d) \n\t 4- Crea_dado1(dado *d) \n\t 5- Crea_dado2(int n, dado *d) \n\n\t";
		cin>>s;
		if(s!=0)
		{
			switch(s)
			{
				case 1:
				{
					n=GetFaccia(d);	
					cout<<n;		
				}
				break;
				case 2:
				{
					cout<<"\n Inserire una faccia: ";
					cin>>n;
					SetFaccia(n, &d);
					cout<<GetFaccia(d);
				}
				break;
				case 3:
				{
					Lancia_dado(&d);
					cout<<GetFaccia(d);
				}
				break;
				case 4:
				{
					Crea_dado1(&d);
					cout<<GetFaccia(d);
				}
				break;
				case 5:
				{
					cout<<"\n Inserire una faccia: ";
					cin>>n;
					Crea_dado2(n, &d);
					cout<<GetFaccia(d);
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
