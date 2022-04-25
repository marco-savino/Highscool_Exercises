
#include<iostream>

int n, nt, cont=0;

main()
{
      printf("\n Inserisci un numero di tentativi per l'input \n");
      scanf("%d",&nt);
      printf("\n Inserisci un numero dal 15 al 20 \n");
      scanf("%d",&n);
      
      while((n<15 || n>20) && cont<nt)
      {
       printf("\n Reinserisci il valore \n");
       scanf("%d",&n);
       cont++;
      }
      
      if(n>=15 || n<=20)
      {
       printf("\n Il valore e' corretto: %d \n",n);
      }
      
      else
      {
          printf("\n Hai esaurito i tentativi \n");
      }
      
      system("pause");
      
}
