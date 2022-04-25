
#include<iostream>
#include"punto_savino.h"

using namespace std;

main()
{
	int s;
	int n, n1;
	point p, p1, p2;
	
	do
	{
		cout<<"\n\n\n Seleziona un'operazione: \n\t 1- GetX(point p) \n\t 2- GetY(point p) \n\t 3- SetPoint(point *p, float x1, float y1) \n\t 4- Is_Point_0(point p) \n\t 5- Spot_Point(point p) \n\t 6- Distanza_Due_Punti(point a, point b) \n\t 7- Punto_Medio(point a, point b) \n\t 8- Crea_Punto1(point *p) \n\t 9- Crea_Punto2(point *p, float x1, float y1) \n\t 0- Esci dal Programma  \n\n\t";
		cin>>s;
		if(s!=0)
		{
			switch(s)
			{
				case 1:
				{
					n=GetX(p);	
					cout<<n;		
				}
				break;
				case 2:
				{
					n=GetY(p);	
					cout<<n;	
				}
				break;
				case 3:
				{
					cout<<"\n Inserire X e Y: ";
					cin>>n;
					cin>>n1;
					SetPoint(&p, n, n1);
					cout<<GetX(p)<<";"<<GetY(p);
				}
				break;
				case 4:
				{
					if(Is_Point_0(p))
					cout<<"\n\t E' posizionato all'origine degli assi: "<<GetX(p)<<";"<<GetY(p)<<"\n";
					else
					cout<<"\n\t Non e' posizionato all'origine degli assi: "<<GetX(p)<<";"<<GetY(p)<<"\n";
				}
				break;
				case 5:
				{
					switch(Spot_Point(p))
					{
						case 'y':
						cout<<"\n\t E' posizionato sull'Asse Y: "<<GetX(p)<<";"<<GetY(p)<<"\n";
						break;
						case 'x':
						cout<<"\n\t E' posizionato sull'Asse X: "<<GetX(p)<<";"<<GetY(p)<<"\n";
						break;
						case '1':
						cout<<"\n\t E' posizionato nel I Quadrante: "<<GetX(p)<<";"<<GetY(p)<<"\n";
						break;	
						case '2':
						cout<<"\n\t E' posizionato nel II Quadrante: "<<GetX(p)<<";"<<GetY(p)<<"\n";
						break;
						case '3':
						cout<<"\n\t E' posizionato nel III Quadrante: "<<GetX(p)<<";"<<GetY(p)<<"\n";
						break;
						case '4':
						cout<<"\n\t E' posizionato nel IV Quadrante: "<<GetX(p)<<";"<<GetY(p)<<"\n";
						break;
					}
				}
				break;
				case 6:
				{
					cout<<"\n Inserisci le coordinate X e Y del primo punto: ";
					cin>>n;
					cin>>n1;
					Crea_Punto2(&p, n, n1);
					cout<<"\n Inserisci le coordinate X e Y del secondo punto: ";
					cin>>n;
					cin>>n1;
					Crea_Punto2(&p1, n, n1);
					cout<<"\n La distanza fra i due punti e': "<<Distanza_Due_Punti(p, p1)<<"\n";
					
				}
				break;
				case 7:
				{
					cout<<"\n Inserisci le coordinate X e Y del primo punto: ";
					cin>>n;
					cin>>n1;
					Crea_Punto2(&p, n, n1);
					cout<<"\n Inserisci le coordinate X e Y del secondo punto: ";
					cin>>n;
					cin>>n1;
					Crea_Punto2(&p1, n, n1);
					Crea_Punto1(&p2);
					p2=Punto_Medio(p, p1);
					cout<<"\n Il punto medio si trova alle coordinate: "<<GetX(p2)<<";"<<GetY(p2)<<"\n";
				}
				break;
				case 8:
				{
					Crea_Punto1(&p);
					cout<<GetX(p)<<";"<<GetY(p);
				}
				break;
				case 9:
				{
					cout<<"\n Inserisci le coordinate X e Y del primo punto: ";
					cin>>n;
					cin>>n1;
					Crea_Punto2(&p, n, n1);
					cout<<GetX(p)<<";"<<GetY(p);
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
