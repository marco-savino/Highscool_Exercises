
#include<iostream>
#include<math.h>
#include<windows.h>

main()
{
      int b1, b2, b3, dec;
      
      printf("\n Inserire il numero decimale \n ");
      scanf("%d",&dec);
      if(dec<0 || dec>7)
      {
              printf("\n Errore \n");
              Sleep(2000);
              exit(0);
      }
      
      b1=dec%2;
      dec=dec/2;
      b2=dec%2;
      dec=dec/2;
      b3=dec%2;
      dec=dec/2;
      
      printf("\n Il numero in binario e':\t %d %d %d \n",b3,b2,b1);
      system("pause");

}
      
