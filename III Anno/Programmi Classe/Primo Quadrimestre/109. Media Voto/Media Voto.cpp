
#include<iostream>

float a, b;
int cont=1, nv;

main()
{
	printf("\n Inserire il numero di voti \n");
	scanf("%d",&nv);
	printf("\n Inserire i voti \n");
	scanf("%f",&a);
	
	while(cont<nv)
	{
		scanf("%f",&b);
		a=a+b;
		cont++;
	}
	
	a=a/nv;
	printf("\n La media e': %.2f ",a);
	
	if(a>=6)
	{
		printf("\n Nessun debito \n");
	}
	else
	{
		printf("\n Da recuperare \n");
	}
	
	system("pause");
}
