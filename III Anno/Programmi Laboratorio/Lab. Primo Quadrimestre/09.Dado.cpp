
#include<iostream>

int s,n;

main(){
       printf("\n Scommetti su un numero :D");
       scanf("%d",&s);
       
       if(s<1 || s>6){
               printf("\n Il dado ha solo 6 facce, lezzoh suinoh!!! \n");
               }
               else{
       
       srand(time(0));
       n=rand()%6+1;
       printf("\n Il valore generato e': %d \n",n);
       
       if(s==n){
               printf("\n Hai vinto la scommessa!!! \n");
               }
               else{
                    printf("\n Mannaggia, hai perso... \n");
                    }
                    }
       
       system("pause");
       }
       
