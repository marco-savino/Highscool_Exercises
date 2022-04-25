#include<iostream>
#include<windows.h>

#define MAX_N 100

main()
{
      int vet[MAX_N], lenp=0, lend=0, i;
      int *vetpp[MAX_N], *vetpd[MAX_N];
      
      srand(time(0));
      
      for(i=0; i<MAX_N; i++)
      {
               vet[i]=rand()%200+1;
               if(vet[i]%2==0)
               {      
                   vetpp[lenp]=&vet[i];
                   lenp++;
               }                                           
               else
               {
                   vetpd[lend]=&vet[i];
                   lend++;
               }             
      }
      
      printf("\n\n I numeri pari sono: %d \n I numeri dispari sono: %d \n Procedere? \n\n",lenp,lend);
      system("pause");  
      
      printf("\n\n\n Numeri pari nel vettore: %d \n\n",lenp);
      for(i=0; i<lenp; i++)
      {
               if(i%5==0)
               printf("\n\n");
               printf("%7d",*vetpp[i]);             
      }
      
      printf("\n\n\n Numeri dispari nel vettore: %d \n\n",lend);
      for(i=0; i<lend; i++)
      {
               if(i%5==0)
               printf("\n\n");
               printf("%7d",*vetpd[i]);             
      }    
      
      printf("\n\n\n\n");  
      
      system("pause");
}
      
      
      
      
      
      
      
      
