/*
Acquisire un vettore di 10 interi e scriverli sul file
*/

#include<stdio.h>
#include<iostream>

main()
{
      FILE *pf;
      int vet[10], i;
      
      for(i=0; i<10; i++)
      {
               printf("\n\n Digita il %d^ numero: \t",i+1);
               scanf("%d",&vet[i]);
      }
      
      pf=fopen("numeri.txt","w");
      
      for(i=0; i<10; i++)
      {
               fprintf(pf, "\n %d", vet[i]);
      }
      fclose(pf);
      
      system("pause");
} 
      
