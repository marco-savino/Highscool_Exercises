#include<iostream>
main()
{
      int m,n,a,cont,somma;
      printf("inserisci il numero di righe:\n");//numero delle righe
            scanf("%d",&n);
      printf("inserisci il numero di colonne:\n");//numeri delle colonne
            scanf("%d",&m);
      somma=1;
      for(cont=1;cont<=(n*m);cont++)//scrittura effettiva della tabella
      {
                   printf("%d\t",cont);
                   if((n=m)and(cont%(m+1)==0))//somma diagonale
    {
     somma=somma+cont+1;
     }
                   if(cont%n==0)
                   {
                                printf("\n");
                                }
                   
                   }
    
    
     printf("la somma e':%d\n",somma);
     
     
      system("pause");
      
      
      }
