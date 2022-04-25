// Convertitore Dec-Bin

#include<iostream>

int bit[64], cont, x;

main(){
       do{
          printf("\n Inserire il valore decimale (maggiore di 0) \t");
          scanf("%d",&x);
          if(x<0)
          printf("\n Errore, inserire un valore corretto \n");
       }
       while(x<0);
     
       for(cont=0; x>0; cont++)
       {                      
                   bit[cont]=x%2;
                   x=x/2;                   
       }
       cont--;
       
       while(cont>=0){
                      printf(" %d   ",bit[cont]);
                      cont--;
       }                      
       
       printf("\n\n\n\n\n");
	   system("pause");
}
       
       
