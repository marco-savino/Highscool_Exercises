
#include<iostream>

main()
{
      int a, b=0;
      
      printf("\n Inserisci un numero a \n");
      scanf("%d",&a);
      
      while(a!=0)
      {
                 b=b+a;
                 printf("\n Somma: %d \n",b);
                 printf("\n Inserisci un numero b \n");
                 scanf("%d",&a);
                 
      }
      
      printf("\n Fine Programma \n");
      system("pause");
      
}
