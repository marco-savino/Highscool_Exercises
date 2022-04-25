
#include<iostream>
#include<windows.h>

main()
{
      int x;
      
      do
      {
       printf("\n Inserisci un valore positivo \n");
       scanf("%d",&x);
      }
      while(x<0);
      
      printf("\n Valido \n");
      
      while(x>0)
      {
       printf("%d \n",x);
       Sleep(1000);
       x--;
      }
                   
      
      system("pause");
}
