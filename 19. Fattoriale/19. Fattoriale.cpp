
#include<iostream>
using namespace std;

int Fattoriale(int n)
{
	/*
		Scopo: calcolare il fattoriale di un numero n
		Input: ---
		Output: ---
		I/O: numero utilizzato in ogni passaggio per trovare il fattoriale
		Return: 1 quando si raggiunge la base, n per restituire a ogni passaggio il risultato della funzione
	
		Schema Ricorsivo:
		base -> n<=1
		passo -> n*Fattoriale(n-1)
	*/
	if(n<=1)
	return(1);
	else
	{
		n=n*Fattoriale(n-1);
		return(n);
	}
}

main()
{
	int n;
	
	cout <<"\n Inserire un numero per calcolarne il fattoriale: \t";
	cin >> n;
	n=Fattoriale(n);
	cout <<"\n\n Il Fattoriale e': "<< n <<"\n\n\n"; 
	
	system("pause");
}
