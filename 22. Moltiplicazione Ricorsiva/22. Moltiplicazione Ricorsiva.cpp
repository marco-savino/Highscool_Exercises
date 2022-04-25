
#include<iostream>
using namespace std;

int Moltiplicazione(int n, int n1)
{
	/*
		Scopo: eseguire la moltiplicazione fra due fattori
		Input: i due fattori
		Output: ---
		I/O: ---
		Return: prodotto
	
		Schema Ricorsivo:
		base -> n==0
		passo -> n+Moltiplicazione(n, n1-1)
	*/
	int prod;

	if(n1==0)
	return(0);
	
	else
	{
		if(n1>0)
		prod=n+Moltiplicazione(n, n1-1);
		else
		{
			if(n1<0)
			{
				n1=n1*(-1);
				n=n*(-1);
				prod=n+Moltiplicazione(n, n1-1);
			}
		}
		return(prod); 
	}
}

main()
{
	int n, n1;
	
	cout <<"\n Inserire due numeri da moltiplicare: \t";
	cin >> n;
	cin >> n1;
	n=Moltiplicazione(n, n1);
	cout <<"\n\n Il prodotto e': "<< n <<"\n\n\n"; 
	
	system("pause");
}
