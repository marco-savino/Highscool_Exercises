
#include<iostream>

int n;

main(){
       printf("\n Inserisci un numero da 1 a 10 \n");
       scanf("%d",&n);
       
       switch(n){
                 case 1:
                 case 3:
                 case 5:
                 case 7:
                 case 9: printf("\n Il numero e' dispari \n");
                 default: printf("\n Il numero e' pari \n");
                 }
                 system("pause");
                 }
