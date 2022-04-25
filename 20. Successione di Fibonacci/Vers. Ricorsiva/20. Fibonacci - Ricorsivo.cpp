
#include<iostream>
using namespace std;

int Fibonacci(int fn)
{
	/*
		Scopo: trovare il valore della successione di fibonacci corrispondente alla posizione digitata
		Input: 
		Output: ---
		I/O: ---
		Return:
		
		Schema Ricorsivo:
		base -> fn=0 o fn=1
		passo -> Fn=F(n-1)+F(n-2);
	*/
	
	if(fn==0 || fn==1)
	return(1);
	else
	{
		fn=Fibonacci(fn-1)+Fibonacci(fn-2);
		return(fn);
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
