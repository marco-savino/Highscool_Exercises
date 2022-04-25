// Data una sequenza di numeri stabilita dall'utente con numeri generati a 
// Random tra -200 e +200, calcolare il minimo tra i valori positivi ed
// il massimo tra quelli negativi

#include<iostream>

int x=0, nv, max=INT_MIN, min=INT_MAX;

main(){
       do
       {
        printf("\n Inserire il numero di valori desiderati \n");
        scanf("%d",&nv);
        if(nv<0)
        printf("\n Errore \n");
       }
       while(nv<0);
       
       srand(time(0));
       
       if(nv==0){
       printf("\n Non e' stato estratto nessun numero \n\n");
       }
       
       else{
            while(nv>0){
                   x=rand()%401-200;
                   nv--;
                   printf("\n Il valore estratto e': \t %d \n",x);
                   if(x>=0)
                           if(x<min)
                           min=x;
                   else{
                        if(x>=max)
                        max=x;
                   }
            } 
       
       printf("\n\n\n Il valore positivo minore e':   \t %d \n",max);
       printf("\n Il valore negativo maggiore e': \t %d \n\n\n",min);
       }
       
       system("pause");
}     
       
       
       

