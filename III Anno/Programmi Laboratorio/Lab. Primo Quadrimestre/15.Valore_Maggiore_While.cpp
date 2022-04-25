// input->numero di elementi da inserire; output -> valore piu' grande

#include<iostream>

int nx, a, b, cont=0;

main()
{
      do
      {
         printf("\n Inserisci il numero di valori \t");
         scanf("%d",&nx);
         if(nx<0)
         printf("\n Errore \n");
      }
      while(nx<0);
      
      if(nx!=0)
      {
      
      printf("\n Inserisci il numero \n");
      scanf("%d",&a);   
      
      do
      {
          printf("\n Inserisci un altro numero \n");
          scanf("%d",&b); 
          if(b>=a)
          a=b;
          cont++;
      }
      while(cont<nx-1);
      
      
      printf("\n Il maggiore e': %d \n",a); 
      }
      
      else
      {
          printf("\n Fine Programma \n");
      }
      
      system("pause");
      
      }
