// generare i primi 100 numeri pari e ogni 10 effettuarne la somma, al fine 
// di formare una tabella 11x10

#include<iostream>
#include<windows.h>

int c, s=0;

main(){
       
       for(c=2; c<=200; c=c+2){
                               Sleep(50);
                               printf(" %4d ",c);
                               s=s+c;
                               
                               if(c%20==0){
                                           Sleep(50);
                                           printf(" %8d \n\n",s);
                                           s=0;
                               }
       }
       
       system("pause");
}





       
                           
