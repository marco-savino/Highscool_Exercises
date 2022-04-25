//schiva il numero easy
#include<iostream>
#include<math.h>
main()
{
      
           int n1,n2,cont;
      cont=0;
      printf("scegli un numero da evitare\n");
      scanf("%d",&n1);
      printf("il numero da evitare e' %d\t",n1);
      system("pause");
      system("cls");
                    printf("inserisci un numero\t");
                    scanf("%d",&n2);
      while(n1!=n2 and cont<10)
      {
                   printf("inserisci lo stesso numero\t");
                   scanf("%d",&n2);
                                  while(n2!=n2)
                                  {
                                               printf("il numero scelto e diverso\n");
                                               scanf("%d",&n2);
                                               
                                               }
                                  cont++;
                                  if(n1==n2 or cont==10)
                                  {
                                            printf("hai vinto!!\n");
                                            }
                                            }
                                            
                   
                  system("pause");
                   }
       
      
      
      
      
      
      
      
