
#include<iostream>
#include<windows.h>

main()
{
      int b1, b2, b3, b4;
      
      printf("inserire b1");
      scanf("%d",&b1);
      if(b1<0 || b1>1)
      {
              printf("\n Errore \n");
              Sleep(2000);
              exit(0);
      }
      
      printf("inserire b2");
      scanf("%d",&b2);
      if(b2<0 || b2>1)
      {
              printf("\n Errore \n");
              Sleep(2000);
              exit(0);
      }

      printf("inserire b3");
      scanf("%d",&b3);
      if(b3<0 || b3>1)
      {
              printf("\n Errore \n");
              Sleep(2000);
              exit(0);
      }
      
      printf("inserire b4");
      scanf("%d",&b4);
      if(b4<0 || b4>1)
      {
              printf("\n Errore \n");
              Sleep(2000);
              exit(0);
      }
      
      printf("\n Il numero in decimale e': %d \n",b1*8+b2*4+b3*2+b4);          
                    
      system("pause");

}
      
