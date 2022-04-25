#include<iostream>
#include<windows.h>

#define MAX_N 100

int set[MAX_N][MAX_N];

bool Speculare(int len)
{
	/*
		Scopo: verificare se i due vettori contengano valori in disposti specularmente
		Input: lunghezza dei due vettori
		Output: ---
		I/O: ---
		Return: true se sono palindromi, false in caso contrario
	*/

	int i, i1=len-1;
	
	for(i=0; i<=i1; i++)
	{
		if(set[0][i]==set[1][i1])
		i1--;
		else
		return(false);
	}
	return(true);
}

main()
{
	int len, i, i1;
	
	printf("\n Inserisci la lunghezza dei due vettori: \t");
	
	do
	{
		scanf("%d",&len);
		if(len<=0 || len>MAX_N)
		printf("\n errore, digitare un valore corretto :/ \n\n");
	}
	while(len<=0 || len>MAX_N);
	
	printf("\n Adesso, compila i due vettori: \n");
	
	for(i=0; i<2; i++)
	{
		printf("\n Compila il %d^ vettore: \n",i+1);
		for(i1=0; i1<len; i1++)
		{
			printf("\n\t Inserisci il %d^ valore: \t",i1+1);
			scanf("%d",&set[i][i1]);
		}
	}
	
	if(Speculare(len))
	printf("\n Si, i due vettori sono speculari :D \n\n\n");
	else
	printf("\n No, i due vettori non sono speculari :( \n\n\n");
	
	system("pause");
}
	
	
	
	
	
	
	
		
	
	
	

