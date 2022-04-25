
#include<stdlib.h>
#include<iostream>

using namespace std;

main()
{
	int nv, *p, i;

	cout<<"\n\n Digitare il numero di elementi che vuoi inserire: \t";
	cin>>nv;

	p=(int *) malloc(sizeof(p)*nv);

	for(i=0; i<nv; i++)
	{
		cout<<"\n Inserire il "<<i+1<<" valore: \t";
		cin>>p[i];
	}

	cout<<"\n\n Ecco i valori inseriti: \n\n";

	for(i=0; i<nv; i++)
	{
		cout<<"\t"<<p[i];
	}
	cout<<"\n\n\n";

	system("pause");
	free(p);
}
