#include<iostream>

int n, max=INT_MIN, min=INT_MAX;

main(){
       do{
          printf("\n Inserisci un numero di valori da comparare \n");
          scanf("%d",&n);
       }
       while(n<=0);
       
       printf("\n Inserisci i valori\n");
       
       while(n!=0
