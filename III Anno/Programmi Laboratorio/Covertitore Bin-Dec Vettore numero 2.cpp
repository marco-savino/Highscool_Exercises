#include<iostream>
#include<math.h>
#include<windows.h>

main()
{
      int v[64], cont, nv;
      
      do{
          printf("\n Digita il numero di valori da inserire (maggiore di 0 e minore di 64) \t");
          scanf("%d",&nv);
          if(nv<0 || nv>=64)
          printf("\n Errore, reinserisci il valore \n");
      }  
      while(nv<0 || nv>=64);
      
      if(nv==0)
      system("exit");
      
      else{
           for(cont=0; cont<nv; cont++)
           {
            do{
               printf("\n Inserisci il %d bit da destra \t",cont+1);                          
               scanf("%d",&v[cont]);
       
               if(v[cont]<0 || v[cont]>1)
               printf("Errore, reinserire il bit \n");
            }
            while(v[cont]<0 || v[cont]>1); 
       
            if(v[cont]==1 && cont>0)
            v[0]= v[0] + pow(2,cont);
            
            else
            v[0]= v[cont]*pow(2,cont);
       
      }

      printf("\n Il valore decimale e': %d \n\n\n",v[0]);
      
      system("pause");
      }
}
