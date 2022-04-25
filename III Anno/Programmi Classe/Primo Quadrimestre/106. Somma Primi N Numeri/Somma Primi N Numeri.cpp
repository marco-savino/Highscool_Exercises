#include<iostream>

main()
{
      int n, cont=0, s=0;
      
      printf("\n Digita fino a che numero verranno sommati i numeri da 0 a n \n");
      scanf("%d",&n);
      
      while(cont<n)
      {
       cont=cont+1;
       s=s+cont;
       printf("\n %d \n",s);
      }
      
      printf("\n La somma e': %d \n",s);
      
      system("pause");
      
      }
