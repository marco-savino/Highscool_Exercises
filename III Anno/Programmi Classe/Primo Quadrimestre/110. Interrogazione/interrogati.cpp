
#include<iostream>

main()
{
	int n;
	printf("Inserisci un valore compreso tra 23976 e 77447\n");
	scanf("%d",&n);
	while(n<23976 or n>77447)
		{
			printf("Valore errato\nInserisci un altro valore\n");
			scanf("%d",&n);
		}
		n=n%21+1;
		printf("Il numero e':%d\n",n);
		switch(n)
		{
			case 1: printf("Apavaloaei \n");
			break;
			case 2: printf("Avola \n");
			break;
			case 3: printf("Danci \n");
			break;
			case 4: printf("Falbo \n");
			break;
			case 5: printf("Formica \n");
			break;
			case 6: printf("Franzolin \n");
			break;
			case 7: printf("Gasparetti \n");
			break;
			case 8: printf("Girgis \n");
			break;
			case 9: printf("Gritti \n");
			break;
			case 10: printf("Ingegno \n");
			break;
			case 11: printf("Kroud \n");
			break;
			case 12: printf("Locardi \n");
			break;
			case 13: printf("Martinez \n");
			break;
			case 14: printf("Merlino\n");
			break;
			case 15: printf("Naldi \n");
			break;
			case 16: printf("Provenzale\n");
			break;
			case 17: printf("Rugarli\n");
			break;
			case 18: printf("Savino \n");
			break;
			case 19: printf("Scardino \n");
			break;
			case 20: printf("Stroppa \n");
			break;
			case 21: printf("Torres  \n");
			break;
		}
	system("pause");
}
