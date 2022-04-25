// input->numero di elementi da inserire; output -> somma fra questi



#include<iostream>

main()
{
      int x, s=0, cont=0, nx;
      
      do
      {
         printf("\n Inserisci il numero di addendi \n");
         scanf("%d",&nx);
         if(nx<0)
                 printf("\n Errore \n");
      }
      while(nx<0);
      
      while(cont<nx)
      {
                 printf("\n Inserisci il numero \n");
                 scanf("%d",&x);   
                 s=s+x;
                 cont++;
      }
      
      
      printf("\n La somma e': %d  \n",s);
      system("pause");
      
}
