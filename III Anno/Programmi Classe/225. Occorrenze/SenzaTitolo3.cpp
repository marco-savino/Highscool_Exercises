// 

#include<iostream>

int i, a[15], b[15];

main(){
       for(i=0; i<100; i++)
       {
        a[i]=0;
       }
       
       for(i=0; i<15; i++)
       {
                do{
                   printf("\n Inserisci il %d numero \t",i+1);
                   scanf("%d",&b[i]);
                   if(b[i]<0 || b[i]>100)
                   printf("\n Errore, inserire un valore corretto \n");
                }
                while(b[i]<0 || b[i]>100);
                
                a[b[i]-1]++;
       }
       
       for(i=0; i<15; i++)
       {
                printf("\n Il valore %d e' stato stampato %d volte \n\n\n",b[i],a[i]);
       }
       
       system("pause");
} 
