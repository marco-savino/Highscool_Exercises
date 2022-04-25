
#include<iostream>

int a, b, nt, cont=0;

main()
{
      printf("\n Inserisci il numero di tentativi di input \n");
      scanf("%d",&nt);
      printf("\n Inserisci il numero da indovinare \n");
      scanf("%d",&a);
      printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
      
      do
      {
        printf("\n Inserisci la scommessa!!! :D \n");
        scanf("%d",&b);
        cont++;
      }
      while(cont<=nt && b!=a);
      
      if(b==a)
      {
              printf("\n Hai azzecato!!! Il numero e': %d \n",b);
      }
      
      else
      {
          printf("\n Hai perso, il numero era %d  :( \n",a);
      }
      
      system("pause");
}

