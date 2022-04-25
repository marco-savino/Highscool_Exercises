
#include<iostream>
#include"counter_savino.h"

#define LEN 20

using namespace std;

void Stampa_Counter(counter par, counter dis, counter under10, counter over40, counter mid15_20)
{
	cout <<"\n\n N. Pari: "<<par;
	cout <<"\n N. Dispari: "<<dis;
	cout <<"\n N. Minori di 10: "<<under10;
	cout <<"\n N. Maggiori di 40: "<<over40;
	cout <<"\n N. compresi fra 15 e 20: "<<mid15_20;
	cout <<"\n\n\n";
}


main()
{
	int v[LEN], nv;
	
	counter i, par, dis, under10, over40, mid15_20;
	
	par=Crea_counter();
	dis=Crea_counter();
	under10=Crea_counter();
	over40=Crea_counter();
	mid15_20=Crea_counter();
	
	cout <<"\n\n Quanti valori vuoi inserire? :) \t";
	cin >> nv;
	
	for(i=Crea_counter(); IS_count_Lower(i, nv); i=Inc_counter(i))
	{
		// Alternativa: all'inizio del For, utilizzare una variabile che ottiene il valore del 
		// contatore e sostituirla alla continua chiamata della funzione
		
		cout <<"\n Inserisci il "<< Get_counter(i)+1 <<"^ valore: \t";
		cin >> v[Get_counter(i)];
		
		if(v[Get_counter(i)]%2==0)
		par=Inc_counter(par);
		else
		dis=Inc_counter(dis);
		
		if(v[Get_counter(i)]<10)
		under10=Inc_counter(under10);
		
		if(v[Get_counter(i)]>40)
		over40=Inc_counter(over40);
		
		if(v[Get_counter(i)]>15 && v[Get_counter(i)]<20)
		mid15_20=Inc_counter(mid15_20);
	}
	
	Stampa_Counter(par, dis, under10, over40, mid15_20);
	
	system("pause");
}
