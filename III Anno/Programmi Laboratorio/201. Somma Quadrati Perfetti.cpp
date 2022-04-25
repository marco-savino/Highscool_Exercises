// data una sequenza di numeri stabilita dall'utente effettuare la somma solo
// dei valori inseriti dall'utente che risultano essere dei quadrati perfetti

#include<iostream>
#include<math.h>

int nv, cont, x, x1, s=0;

main()
{
      do
      {
      printf("\n Inserire il numero di valori desiderati \t");
      scanf("%d",&nv);
      }
      while(nv<0);
      
      for(cont=0; cont<nv; cont++)
      {
                  printf("\n Inserire il %d valore \t",cont+1);
                  scanf("%d",&x);
                  x1=sqrt(x);
                  if(x==x1*x1)
                  s=s+x;
      }
      printf("\n La somma e': %d \n",s);
      system("pause");
}
      

