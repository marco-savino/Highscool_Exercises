#include<iostream>

int cont=0,x;

main()
{
	printf("\n Quante volte vuoi stampare Ciao? \t");
	scanf("%d",&x);
	
	while(cont!=x){
		printf("\n Ciao \n");
		cont=cont+1;
	}
	printf("\n\n END \n");
	system("pause");
}
