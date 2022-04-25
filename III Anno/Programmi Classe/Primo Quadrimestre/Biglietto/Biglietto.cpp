#include<iostream>
main()
{
int e,a;
printf("\n Inserire l'eta' dell'utente \n");
scanf("%d",&e);
printf("\n Inserire l'altezza \n");
scanf("%d",&a);
if((e>=18)or(e<18 and a>=100))
{
printf("\n Biglietto da acquistare \n");
}
	else
		{
		printf("\n Biglietto gratuito\n");
		}
system("pause");
}
