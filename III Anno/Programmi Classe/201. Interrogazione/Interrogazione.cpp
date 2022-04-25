#include<iostream>
#include<windows.h>

int n;

main()
{
	do
	{
		do
		{
			printf("\n Inserisci un valore compreso tra 13718 e 96026: \t");
			scanf("%d",&n);
			if(n<13718 || n>96026)
			printf("\n Errore, inserire un valore corretto \n\n\n");
		}
		while(n<13718 || n>96026);
		
		n=n%19+1;
		printf("\n L'interrogato e': \n");
		Sleep(1000);
		printf("\n ... \n");
		Sleep(1000);
		printf("\n ... \n");
		Sleep(1000);
		printf("\n ... \n");
		Sleep(1000);
		printf("\n %d \n",n);
		
		switch(n)
		{
			case 1: printf("\n Apavaloaei \n");
			break;
			case 2: printf("\n Avola \n");
			break;
			case 3: printf("\n Danci \n");
			break;
			case 4: printf("\n Falbo \n");
			break;
			case 5: printf("\n Franzolin \n");
			break;
			case 6: printf("\n Gasparetti \n");
			break;
			case 7: printf("\n Girgis \n");
			break;
			case 8: printf("\n Gritti \n");
			break;
			case 9: printf("\n Ingegno \n");
			break;
			case 10: printf("\n Kroud \n");
			break;
			case 11: printf("\n Martinez \n");
			break;
			case 12: printf("\n Merlino \n");
			break;
			case 13: printf("\n Naldi \n");
			break;
			case 14: printf("\n Provenzale \n");
			break;
			case 15: printf("\n Rugarli \n");
			break;
			case 16: printf("\n Savino \n");
			break;
			case 17: printf("\n Scardino \n");
			break;
			case 18: printf("\n Stroppa \n");
			break;
			case 19: printf("\n Torres \n");
		}
		printf("\n Eseguire un'altra estrazione? Se si, digitare 1 \t");
		scanf("%d",&n);
	}
	while(n==1);

printf("\n Fine Programma \n");
system("pause");
}
