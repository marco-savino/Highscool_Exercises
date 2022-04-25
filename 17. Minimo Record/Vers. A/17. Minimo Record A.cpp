
#include<iostream>
using namespace std;

struct treint
{
	int a;
	int b;
	int c;
};
typedef struct treint triple;


bool Min(triple *pabc)
{	
	/*
		Scopo: trovare il valore minimo della struct e inserirlo in tutti gli elementi
		Input: puntatore alla struct
		Output: ---
		I/O: ---
		Return: true se sono gia' tutti e tre uguali, false se non lo sono
	*/
	
	if(pabc->a == pabc->b && pabc->a == pabc->c && pabc->b == pabc->c)
	return(true);

	if((pabc->a<=pabc->b) && (pabc->a<=pabc->c)) 
	{
		pabc->b=pabc->a;
		pabc->c=pabc->a;
		return(false);
	}
		
	if((pabc->b<=pabc->a) && (pabc->b<=pabc->c))
	{
		pabc->a=pabc->b;
		pabc->c=pabc->b;
		return(false);
	}
		
	else
	{
		pabc->a=pabc->c;
		pabc->b=pabc->c;
		return(false);
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
	triple abc;
	
	cout <<"\n\n Inserisci tre numeri: \n";
	cin >> abc.a;
	cin >> abc.b;
	cin >> abc.c;
	
	if(Min(&abc))
	cout <<"\n\n Sono gia' tutti e tre uguali! :) \n\n\n\n";
	else
	Stampa(&abc);
	
	system("pause");

}
