#include<stdio.h>
#include<iostream>

#include "complex_savino.h"

using namespace std;


#define MAX 2

void Print_Compl(complex com)
{
	cout<<com.pr<<"+"<<com.pi<<"i";
}

main()
{
	complex a,b;
	float n1,n2;
	
	cout<<"Crea_Complex Test\n\n";
	
	cout<<"Primo valore\n";
	cout<<"-Parte Reale:  ";
	scanf("%f",&n1);
	printf("-Parte immaginaria:  ");
	scanf("%f",&n2);
	a=Crea_complex(n1,n2);
	
	cout<<"Secondo valore\n";
	cout<<"-Parte Reale:  ";
	scanf("%f",&n1);
	printf("-Parte immaginaria:  ");
	scanf("%f",&n2);
	b=Crea_complex(n1,n2);
	
	system("cls");
	
	int exit=0,choice;
	float x;
	//Menù
	do
	{
		cout<<"Primo valore(a):\t";
		Print_Compl(a);
		cout<<"\nSecondo valore(b):\t";
		Print_Compl(b);
		cout<<"\n0-Esci\n";
		cout<<"1-Get Test\n";
		cout<<"2-Set Test\n";
		cout<<"3-Is Real Test\n";
		cout<<"4-Real to Complex Test\n";
		cout<<"5-Test Operazioni\n";
		cin>>choice;
		switch(choice)
		{
			case 0:
				exit=1;
				break;
			case 1:
				cout<<"GetReal(a):\t"<<GetReal(a)<<"\nGetImm(a):\t"<<GetImm(a)<<"\n";
				cout<<"GetReal(b):\t"<<GetReal(b)<<"\nGetImm(b):\t"<<GetImm(b)<<"\n";
				break;
			case 2:
				cout<<"a=SetReal(x,a)\tx=";
				cin>>x;
				a=SetReal(x,a);
				cout<<"a=SetImm(x,a)\tx=";
				cin>>x;
				a=SetImm(x,a);
				cout<<"b=SetReal(x,b)\tx=";
				cin>>x;
				b=SetReal(x,b);
				cout<<"b=SetImm(x,b)\tx=";
				cin>>x;
				b=SetImm(x,b);
				cout<<"Primo valore:\t";
				Print_Compl(a);
				cout<<"\nSecondo valore:\t";
				Print_Compl(b);
				break;
			case 3:
				cout<<"IsReal(a) = "<<ISReal(a)<<"\n";
				cout<<"IsReal(b) = "<<ISReal(b)<<"\n";
				break;
			case 4:
				cout<<"a=RtoC(x)\tx=";
				cin>>x;
				a=RtoC(x);
				break;
			case 5:
				cout<<"Somm = ";
				Print_Compl(Som_complex(a,b));
				cout<<"\nDiff =";
				Print_Compl(Diff_complex(a,b));
				cout<<"\nProd =";
				Print_Compl(Prod_complex(a,b));
				cout<<"\nConiugato(a) =";
				Print_Compl(Coniugato(a));
				cout<<"\nConiugato(b) =";
				Print_Compl(Coniugato(b));
				cout<<"\n";
				break;
		}
		system("pause");
		system("cls");
	}while(exit!=1);
}
