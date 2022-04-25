
#include<iostream>
using namespace std;

struct treint
{
	int a;
	int b;
	int c;
};
typedef struct treint triple;


void Min(triple *pabc, triple *pabc1)
{	
	/*
		Scopo: trovare il valore minimo della prima struct e inserirlo in tutti gli elementi della seconda
		Input: puntatore alla prima struct, puntatore alla seconda struct
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
	
	*pabc1=*pabc;
}


void Stampa(triple *pabc1)
{
	/*
		Scopo: stampare la struct
		Input: puntatore alla struct
		Output: ---
		I/O: ---
		Return: ---
	*/
	
	cout <<"\n\n\n a1 = "<< pabc1->a <<"\n b1 = "<< pabc1->b <<"\n c1 = "<< pabc1->c <<"\n\n\n\n";
}


main()
{
	triple abc, abc1;
	
	cout <<"\n\n Inserisci tre numeri: \n";
	cin >> abc.a;
	cin >> abc.b;
	cin >> abc.c;
	
	Min(&abc, &abc1);
	Stampa(&abc1);
	
	system("pause");

}
