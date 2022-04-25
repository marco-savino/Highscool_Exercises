#include<iostream>

main()
{
      int cont=0, s=0;
      
      printf("\n Ecco la somma dei numeri da 0 a 9! \n");
      
      while(cont<10)
      {
       cont=cont+1;
       s=s+cont;
       printf("\n %d \n",s);
      }
      
      printf("\n La somma e': %d \n",s);
      
      system("pause");
      
      }
