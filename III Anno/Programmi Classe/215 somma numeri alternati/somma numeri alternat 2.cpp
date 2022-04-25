#include<iostream>
#include<math.h>
main()
{
      int n,cont,som;
      printf("inserisci un numero\n");
      scanf("%d",&n);
      som=0;
      cont=0;
      if(n>=0)
      {
      for(cont=0;cont<=n;cont=cont+2)
          {
                                     if(cont%2==0)
                                     {
                                                  printf("%d\t",cont);
                                                  if(cont%4!=0)
                                                  {
                                                  som=som+cont;
                                                  }
                                                  
                                                  }
                                                  
                                                  }
      printf("la somma e':%d",som);
      }
      else
      {
          for(cont=0;cont>=n;cont=cont-2)
      {
          if(cont%2==0)
          {
          printf("%d",cont);
          if(cont%4!=0)
           som=som+cont;                                       
          }
                                                  
          }
          
         printf("la somma e':%d",som);
         }    
system("pause");
}
