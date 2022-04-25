/* Dato un numero N, stampare i vaolori pari da 0 a N e sommarli in maniera 
alternata */

#include<iostream>

int cont, x, s=0;

main(){
       printf("\n inserisci un numero \t");
       scanf("%d",&x); 
       
       if(x<0)
       
       
                for(cont=2; cont<=x; cont=cont+2){
                            
                            if(x>=0)
                            printf("\n %4d \n",cont);
                            else
                            printf("\n %4d \n",cont*-1);
                   
                            if(cont%4!=0){
                            s=s+cont;
                            }
                }
                if(x>=0)
                printf("\n Somma: %2d \n",s);
                else
                printf("\n Somma: %2d \n",s*-1);

       
system("pause");
}
