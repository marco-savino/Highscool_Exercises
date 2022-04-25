#include<iostream>

int cs, cv;
float n, s;

main()
{
	for(cs=1; cs<=4; cs++)
	{	
        s=0;
		for(cv=1; cv<=3; cv++)
		{
		          do
		          {
                   printf("\n Inserisci il %d voto del %d studente \t",cv,cs);
                   scanf("%f",&n);
                   if(n<0 || n>10)
			       printf("\n Errore, reinserire il valore \n\n");
			       else
                   s=s+n;
                   }
                  while(n<0 || n>10);
		}
		printf("\n La media del %d studente e': %.2f \n\n\n",cs,s/3);
		
	}
	system("pause");
}
