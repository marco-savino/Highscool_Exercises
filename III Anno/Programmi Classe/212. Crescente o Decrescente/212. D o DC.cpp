
#include<iostream>

int nv, x, x1, v, v1;

main(){
       do{
          printf("\n Inserisci il numero di valori richiesti \t");
          scanf("%d",&nv);
       }
       while(nv<0);
       
       if(nv!=0){
       printf("\n Inserisci un valore \t");
       scanf("%d",&x);
       nv--;
       
       do
       {
           printf("\n Inserisci un altro valore \t");
           scanf("%d",&x1); 
           
           if(x1>=x){
                     x=x1;
                     v++;
           }
           else{
                if(x1<x){
                         x=x1;
                         v1++;
                }
           }
           nv--;
       }
       while(nv>0 && ((v>0 && v1==0) || (v==0 && v1>0)));
       
       if(v>0 && v1==0)
       printf("\n La sequenza e' crescente \n");
       
       else{
            if(v==0 && v1>0)
            printf("\n La sequenza e' decrescente \n");
            
            else
            printf("\n La sequenza non e' nulla \n");
       }
       }
       
       system("pause");
}
       
       
       
                    
                  
                  
