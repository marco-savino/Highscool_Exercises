
#include<iostream>
#define MAX_DISCHI 8
using namespace std;


void Hanoi(int ndischi, int a, int b, int c)
{
	/*
		Scopo: completare il gioco della Torre di Hanoi con un qualsiasi n. di dischi
		Input: numero di dischi, origine, appoggio, destinazione
		Output: ---
		I/O: ---
		Return: ---
	
		Schema Ricorsivo:
		base -> numero di dischi == 1
		passo -> i valori scambiati fra loro passati a ogni chiamata
	*/
	
	if(ndischi==1)
	{
		cout <<"\n > Sposta il disco da "<<a<<" a "<<c<<" \n";
	}
	else
	{
		Hanoi(ndischi-1, a, c, b);
		cout <<"\n > Sposta il disco da "<<a<<" a "<<c<<" \n";
		Hanoi(ndischi-1, b, a, c);
	}
}


main()
{
	int n;
	
	cout <<"\n Inserire il numero di dischi desiderato: \t";
	cin >> n;
	
	Hanoi(n, 1, 2, 3);
	
	cout <<"\n\n\n";
	system("pause");
}
