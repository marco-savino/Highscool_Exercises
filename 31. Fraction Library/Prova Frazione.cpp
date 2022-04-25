
#include<iostream>
#include"frazione_savino.h"

using namespace std;

main()
{
	int s;
	int n, n1;
	frazione f, f1, f2;
	
	do
	{
		cout<<"\n\n\n Seleziona un'operazione: \n\t 1- GetNum(frazione f) \n\t 2- GetDen(frazione f) \n\t 3- SetFraction(fraction *f, int n1, int d1) \n\t 4- Crea_Frazione1(frazione *f) \n\t 5- Crea_Frazione2(frazione *f, int n1, int d1) \n\t 6- Somma(frazione f, frazione f1) \n\t 7- Differenza(frazione f, frazione f1) \n\t 8- Moltiplicazione(frazione f, frazione f1) \n\t 9- Divisione(frazione f, frazione f1) \n\t 0- Esci dal Programma  \n\n\t";
		cin>>s;
		if(s!=0)
		{
			switch(s)
			{
				case 1:
				{
					n=GetNum(f);	
					cout<<n;		
				}
				break;
				case 2:
				{
					n=GetDen(f);	
					cout<<n;	
				}
				break;
				case 3:
				{
					cout<<"\n Inserire nuovi numeratore e denominatore: ";
					cin>>n;
					cin>>n1;
					SetFraction(&f, n, n1);
					cout<<GetNum(f)<<"/"<<GetDen(f);
				}
				break;
				case 4:
				{
					f=Crea_Frazione1();
					cout<<GetNum(f)<<"/"<<GetDen(f);
				}
				break;
				case 5:
				{
					cout<<"\n Inserire numeratore e denominatore: ";
					cin>>n;
					cin>>n1;
					f=Crea_Frazione2(n, n1);
					cout<<GetNum(f)<<"/"<<GetDen(f);
				}
				break;
				case 6:
				{
					cout<<"\n Inserire numeratore e denominatore della frazione A: ";
					cin>>n;
					cin>>n1;
					SetFraction(&f, n, n1);
					cout<<"\n Inserire numeratore e denominatore della frazione B: ";
					cin>>n;
					cin>>n1;
					SetFraction(&f1, n, n1);
					f2=Somma(f, f1);
					cout<<GetNum(f2)<<"/"<<GetDen(f2);
				}
				break;
				case 7:
				{
					cout<<"\n Inserire numeratore e denominatore della frazione A: ";
					cin>>n;
					cin>>n1;
					SetFraction(&f, n, n1);
					cout<<"\n Inserire numeratore e denominatore della frazione B: ";
					cin>>n;
					cin>>n1;
					SetFraction(&f1, n, n1);
					f2=Differenza(f, f1);
					cout<<GetNum(f2)<<"/"<<GetDen(f2);
				}
				break;
				case 8:
				{
					cout<<"\n Inserire numeratore e denominatore della frazione A: ";
					cin>>n;
					cin>>n1;
					SetFraction(&f, n, n1);
					cout<<"\n Inserire numeratore e denominatore della frazione B: ";
					cin>>n;
					cin>>n1;
					SetFraction(&f1, n, n1);
					f2=Moltiplicazione(f, f1);
					cout<<GetNum(f2)<<"/"<<GetDen(f2);
				}
				break;
				case 9:
				{
					cout<<"\n Inserire numeratore e denominatore della frazione A: ";
					cin>>n;
					cin>>n1;
					SetFraction(&f, n, n1);
					cout<<"\n Inserire numeratore e denominatore della frazione B: ";
					cin>>n;
					cin>>n1;
					SetFraction(&f1, n, n1);
					f2=Divisione(f, f1);
					cout<<GetNum(f2)<<"/"<<GetDen(f2);
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
