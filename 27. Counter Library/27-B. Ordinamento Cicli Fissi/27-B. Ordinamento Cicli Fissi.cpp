
#include<iostream>
#include"counter_savino.h"

#define LEN 20

using namespace std;

void Stampa_Vet(int v[], int nv)
{
	counter i;
	
	cout <<"\n";
	for(i=Crea_counter(); IS_count_Lower(i, nv); i=Inc_counter(i))
	{
		printf("%5d",v[Get_counter(i)]);
	}
	cout <<"\n\n\n";
}

void Ordina_Vet(int v[], int nv)
{
	counter i; 
	counter i1;
	int c;
	
	for(i=Crea_counter(); IS_count_Lower(i, nv); i=Inc_counter(i))
	{
		for(i1=Crea_counter(); IS_count_Lower(i1, nv); i1=Inc_counter(i1))
		{
			if(v[Get_counter(i)]<v[Get_counter(i1)])
			{
				c=v[Get_counter(i)];
				v[Get_counter(i)]=v[Get_counter(i1)];
				v[Get_counter(i1)]=c;
			}
		}
	}
}


main()
{
	int v[LEN], nv;
	counter i;
	
	cout <<"\n\n Quanti valori vuoi inserire? :) \t";
	cin >> nv;
	
	for(i=Crea_counter(); i<nv; i=Inc_counter(i))
	{	
		cout <<"\n Inserisci il "<< Get_counter(i)+1 <<"^ valore: \t";
		cin >> v[Get_counter(i)];
	}
	
	Stampa_Vet(v, nv);
	
	Ordina_Vet(v, nv);
	
	cout <<"\n Vettore Ordinato: \n";
	Stampa_Vet(v, nv);
	
	system("pause");
}
