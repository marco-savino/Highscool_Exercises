
#include<iostream>
#define LENGHT 10
using namespace std;

int Massimo_Vet(int vet[], int start, int end)
{ 
	int max;
	
	if(end<start)
	{
		max=vet[0];
		return(max);
	}
		
	max=Massimo_Vet(vet, start, end-1);
	
	if(max<vet[end])
	return(vet[end]);
	else
	return(max);
}

main()
{
	int vet[LENGHT], start=0, end=0, len;
	
	cout <<"\n\n Inserire quanti valori si dovranno confrontare (max 10): \t";
	cin >> len;
	
	for(end=0; end<len; end++)
	{
		cout <<"\n\n Digitare il "<<end+1<<" numero: \t";
		cin >> vet[end];
	}
	
	cout <<"\n\n Il valore massimo fra quelli digitati e': "<<Massimo_Vet(vet, start, end)<<"\n\n\n";
	
	system("pause");
}
