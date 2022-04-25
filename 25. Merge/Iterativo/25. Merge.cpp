
#include<iostream>
#define LEN 20
using namespace std;



void Merge(int a[], int b[], int c[], int lena, int lenb)
{
	int i=0, i1=0, i2=0;
	
	while(i1<lena && i2<lenb)
	{
		if(a[i1]<=b[i2])
		{
			c[i]=a[i1];
			i1++;
		}
		else
		{
			c[i]=b[i2];
			i2++;
		}
		i++;
	}
	
	if(i1>=lena)
	{
		for(; i2<lenb; i2++)
		{
			c[i]=b[i2];
			i++;
		}
	}
	else
	{
		if(i2>=lenb)
		{
			for(; i1<lena; i1++)
			{
				c[i]=a[i1];
				i++;
			}
		}
	}
}


void Stampa_Vet(int v[], int len)
{
	/*
		- Scopo: stampare un vettore
		- Input: vettore da stampare
		- Output: ---
		- I/O: ---
		- Return: ---
	*/
	int i;
	
	for(i=0; i<len; i++)
	{
		printf("%5d",v[i]);
	}
}


void Bubble_Sort(int vet[], int len)
{
	/*
		- Scopo: ordinare un vettore
		- Input: ---
		- Output: ---
		- I/O: vettore da ordinare
		- Return: ---
	*/
	
	int last=len-2, i, c;
	bool ordered=false;
	
	while(last>0 && !ordered)
	{
		ordered=true;
		for(i=0; i<=last; i++)
		{
			if(vet[i]>vet[i+1])
			{
				c=vet[i];
				vet[i]=vet[i+1];
				vet[i+1]=c;
				ordered=false;									
			}			
		}		
	}
}


main()
{
	int a[LEN], b[LEN], c[LEN], lena, lenb, i;
	
	cout <<"\n\n Quanti elementi vuoi inserire nel vettore A? \t";
	cin >> lena;
	for(i=0; i<lena; i++)
	{
		cout <<"\n Inserisci il "<<i+1<<" elemento: \t";
		cin >> a[i];
	}
	Bubble_Sort(a, lena);
	cout <<"\n\n";
	Stampa_Vet(a, lena);
	
	
	cout <<"\n\n\n Quanti elementi vuoi inserire nel vettore B? \t";
	cin >> lenb;
	for(i=0; i<lenb; i++)
	{
		cout <<"\n Inserisci il "<<i+1<<" elemento: \t";
		cin >> b[i];
	}
	Bubble_Sort(b, lenb);
	cout <<"\n\n";
	Stampa_Vet(b, lenb);
	
	
	Merge(a, b, c, lena, lenb);
	
	cout <<"\n\n\n\n Vettore C: \n\n";
	Stampa_Vet(c, lena+lenb);
	
	cout<<"\n\n\n\n";
	
	system("pause");
	
	
	
}
