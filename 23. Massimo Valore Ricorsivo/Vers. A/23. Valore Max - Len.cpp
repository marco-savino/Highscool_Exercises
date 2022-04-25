
#include<iostream>
#define LENGHT 10
using namespace std;

int Massimo_Vet(int vet[], int len)
{ 
	int max;
	
	if(len==0)
	{
		max=vet[0];
		return(max);
	}
		
	max=Massimo_Vet(vet, len-1);
	
	if(max<vet[len])
	return(vet[len]);
	else
	return(max);
}

main()
{
	int vet[LENGHT], len, i;
	
	cout <<"\n\n Inserire quanti valori si dovranno confrontare (max 10): \t";
	cin >> len;
	
	for(i=0; i<len; i++)
	{
		cout <<"\n\n Digitare il "<<i+1<<" numero: \t";
		cin >> vet[i];
	}
	
	cout <<"\n\n Il valore massimo fra quelli digitati e': "<<Massimo_Vet(vet, len-1)<<"\n\n\n";
	
	system("pause");
}
