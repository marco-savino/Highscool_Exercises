// Se n. e' pari valido in [5;10] o [100;1000] o se dispari in [1001;1009]

#include<iostream>

int n;

main(){
       printf("\n Inserisci un numero \n");
       scanf("%d",&n);
       
       if(n==6 || n==8 || n==10 || (n>=100 && n<=1000 && n%2==0) || (n>=1001 && n<=1009 && n%2!=0)){
                printf("\n Il numero e' valido \n");
                }
                else{
                     printf("\n Il numero non e' valido \n");
                     }
                     
                     system("pause");
                     }         
       
