
#include<iostream>

#define b 1
#define n 2
#define r 3

main()
{
int c1,c2,c3,c4;
printf("\n inserisci 4 colori: \n 1 nero, \n 2 bianco, \n 3 rosso, \n 4 verde, \n 5 giallo, \n 6 blu, \n 7 arancione, \n 8 viola");
scanf("%d%d%d%d",&c1,&c2,&c3,&c4);
       
if(c1==b || c2==b || c3==b || c4==b)
{
if(c1==n || c2==n || c3==n || c4==n)
{
printf("\n Fai il quadro \n");
}
	else
	{
	if(c1==r || c2==r || c3==r || c4==r)
	{
	printf("\n Fai il quadro rosso \n");
	}
		else
		{
		printf("\n Fai la pasta \n");
		}
	}
}

else
{
if(c1==r || c2==r || c3==r || c4==r)
{
printf("\n Fai il quadro rosso \n");
}
	else
	{
	printf("\n Fai la pasta \n");
            	}
}
system("pause");

}

