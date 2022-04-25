
#include<iostream>
using namespace std;

int Fibonacci(int pos)
{
	/*
		Scopo: trovare il valore della successione di fibonacci corrispondente alla posizione digitata
		Input: posizione nella sucessione
		Output: ---
		I/O: ---
		Return: valore corrispondente della sucessione
	*/
	
	int i, fib0, fib1, fibn;
	
	if(pos<=1)
	return(1);
	else
	{
		fib0=1;
		fib1=1;
		for(i=1; i<pos; i++)
		{
			fibn=fib0+fib1;
			fib1=fib0;
			fib0=fibn;	
		}	
		return(fibn);
	}
}

main()
{
	int n;
	
	cout <<"\n Inserire una numero per conoscerne il valore nella Successione di Fibonacci (lo 0 conta come prima posizione): \t";
	cin >> n;
	n=Fibonacci(n);
	cout <<"\n\n Il valore corrispondente nella Successione di Fibonacci e': "<< n <<"\n\n\n"; 
	
	system("pause");
}






