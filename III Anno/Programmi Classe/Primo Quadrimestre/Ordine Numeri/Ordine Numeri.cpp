
#include<iostream>

main()
{

int a,b,c;

printf("inserisci tre numeri\n");
scanf("%d%d%d",&a,&b,&c);
	if((a>b)and(b>c))
	{
	printf("la sequenza e'%d,%d,%d\n",a,b,c);
	}
	else
	{
	if((b>c)and(c>a))
	{
	printf("la sequenza e' %d,%d,%d\n",b,c,a);
	}
		else
		{
		if((c>a)and(a>b))
		{
		printf("la sequenza e' %d,%d,%d\n",c,a,b);
		}
			else	
			{
			if((a>c)and(c>b))
			{
			printf("la sequenza e %d,%d,%d\n",a,c,b);
			}
				else
				{
				if((b>a)and(a>c))
				{
				printf("la sequenza e' %d,%d,%d\n",b,a,c);
				}
					else
					{
					printf("la sequenza e' %d,%d,%d\n",c,b,a);
					}
				}
			}
		}
	}
system("pause");
}
