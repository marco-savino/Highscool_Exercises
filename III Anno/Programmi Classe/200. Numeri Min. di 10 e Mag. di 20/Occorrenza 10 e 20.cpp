#include<iostream>
#include<windows.h>

int x, ten=0, twenty=0;

main(){
       do{
            while(x<-1){
                        printf("\n Errore, reinserisci x \t");
                        scanf("%d",&x);
            }
            printf("\n Inserisci una serie di numeri e premi -1 per stoppare \t");
            scanf("%d",&x);
                            
            if(x<=10)
            ten++;
            
            else{
            if(x>=20)
            twenty++;
            }
       }
       while(x!=-1);
       
       printf("\n\n Numeri inferiori a 10 digitati: %d \n",ten);
       printf("\n Numeri superiori a 20 digitati: %d \n\n",twenty);
       
       system("pause");
       Sleep(500);
       exit(0);
       }
