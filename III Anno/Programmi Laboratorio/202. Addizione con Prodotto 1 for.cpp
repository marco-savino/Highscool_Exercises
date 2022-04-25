// dati due valori interi effettuarne il prodotto usando l'addizione

#include<iostream>

int a, b, nv, cont, s;

main()
{

do
{
      s=0;
      b=0;
      printf("\n Inserisci due valori \t");
      scanf("%d%d",&a,&nv);
      
      if(nv<0)
      {
      b=nv;
      nv=nv*(-1);
      }
      
      for(cont=1; cont<=nv; cont++)
      s=s+a;
      
      if(b<0)
      s=s-(s+s);
                
      printf("\n Il prodotto e': %d \n",s);

      printf("\n Eseguire un'altra moltiplicazione? Se si, premere 1 \t");
      scanf("%d",&a);
}
while(a==1);
      
system("pause");

}
