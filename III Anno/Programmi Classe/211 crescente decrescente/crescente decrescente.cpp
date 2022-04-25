#include<iostream>
#include<math.h>
main()
{  
int n,ns,cont,np,cont_cresc;
printf("inserisci il numero di volte che vuoi inserire i numeri\n");
     scanf("%d",&n); 
      printf("inserisci i valori\t");
     scanf("%d",&ns); 
      cont=2;
      cont_cresc=0;
      while((cont<=n)and(cont_cresc==0)or(cont_cresc==cont-2))
      {
              
               np=ns;
                printf("inserisci i valori\t");
               scanf("%d",&ns);
               cont++;
                 
               if(ns>np)
               {
                        cont_cresc++;
                        }
      }
      if(cont_cresc==n-1)
      {
                         printf("crescente\n");
                         }
      else
      {
      if(cont_cresc==0) 
      {
                        printf("decrescente\n");
                        }
      else
      {
      printf("niente\n");
      }
      }
      
                         
                         
      
      
                       
      system("pause");
}      
      
      
      
   
