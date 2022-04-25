
#include<iostream>
using namespace std;

struct treint
{
	int a;
	int b;
	int c;
};
typedef struct treint triple;


void Min(triple *pabc)
{	
	/*
		Scopo: trovare il valore minimo della struct e inserirlo in tutti gli elementi
		Input: puntatore alla struct
		Output: ---
		I/O: ---
		Return: ---
	*/
	
	if((pabc->a<=pabc->b) && (pabc->a<=pabc->c)) 
	{
		pabc->b=pabc->a;
		pabc->c=pabc->a;
	}
	else
	{
		if((pabc->b<=pabc->a) && (pabc->b<=pabc->c))
		{
			pabc->a=pabc->b;
			pabc->c=pabc->b;
		}	
		else
		{
			pabc->a=pabc->c;
			pabc->b=pabc->c;
		}		
	}
}


void Stampa(triple *pabc)
{
	/*
		Scopo: stampare la struct
		Input: puntatore alla struct
		Output: ---
		I/O: ---
		Return: ---
	*/
	
	cout <<"\n\n\n a = "<< pabc->a <<"\n b = "<< pabc->b <<"\n c = "<< pabc->c <<"\n\n\n\n";
}


main()
{
	triple abc, abc1;
	
	cout <<"\n\n Inserisci tre numeri: \n";
	cin >> abc.a;
	cin >> abc.b;
	cin >> abc.c;
	
	abc1=abc;
	Min(&abc1);
	abc=abc1;
	Stampa(&abc);
	
	system("pause");

}
