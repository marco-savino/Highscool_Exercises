// Generare casualmente x valori compresi tra -40 e +80 
// Stamapre il valore con il proprio quadrato

#include<iostream>

int x=0, nv;

main(){
       
       printf("\n Inserire il numero di valori desiderati \n");
       scanf("%d",&nv);
       srand(time(0));
       
       while(nv>0){
       
       x=rand()%121-40;
       nv--;
       printf("\n Il numero e': %d; \t il suo quadrato e': %d \n\n",x,x*x);
       }
       system("pause");
}
      
      
// Potenza -> x=pow(x,esponente) 
          
          
