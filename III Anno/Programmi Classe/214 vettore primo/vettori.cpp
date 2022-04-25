//dare in input un vettore di dieci numeri,uno di quindici,uno di cinque
#include<iostream>
#include<math.h>
#include<conio.h>
main()   
{        
      int vet[10],a[15],i,vet_somm,vet_somm2,max,car;
      char b[5];
      car=0;
      vet_somm=0;
      vet_somm2=0;
      max=0;
      system("color 0a");
      for(i=0;i<10;i++)
      {
            printf("inserisci il primo vettore\n");
            scanf("%d",&vet[i]);
      vet_somm=vet_somm+vet[i];
      }
      for(i=0;i<15;i++)             
      {
            printf("inserisci il secondo vettore\n");
            scanf("%d",&a[i]);          
      vet_somm2=vet_somm2+a[i];
      max=a[i];
               if(max<a[i])
               {
                           max=a[i];
                           }
      }                 
      for(i=0;i<5;i++)
      {
            printf("inserisci il carattere\n");
            scanf(" %c",&b[i]);         
      if(b[i]=='a')
      {
                   car++;
                   }
      }
      printf("che cosa vuoi fare? premi:\n");
	printf("\t 1 x vedere se la somma del primo vettore e' uguale alla somma del secondo vettore")
      if(vet_somm=vet_somm2)
      {
                            printf("la somma del primo e del secondo vettore e'\t\t%d\n\n",vet_somm);
                            }                                  
      printf("il valore massimo nel vettore due e'\t\t%d\n\n",max);                
                             printf("la quantita' di A all' interno del terzo vettore e'\t\t%d\n\n",car);         
      
      
          system("pause");            
      
      
      
      
      
      
}
