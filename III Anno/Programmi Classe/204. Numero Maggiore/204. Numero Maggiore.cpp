/* Inserire un numero N di valori;
	Inserire N valori X;
Dare in output il valore maggiore tra i valori X inseriti */

#include<iostream>

int nv, cont=1;
float x, x1;

main(){
       do{
          printf("\n Inserisci il numero di valori desiderati \t");
          scanf("%d",&nv);
          
          if(nv<0)
          printf("\n Errore, inserire un numero valido \n");
          
          else{
               if(nv!=0){
                         printf("\n Inserisci il %d valore \t",cont);
                         scanf("%f",&x);
               }
          }
       }
       while(nv<0);
       
       for(cont=1; cont<=nv-1; cont++){
                                       printf("\n Inserisci il %d valore \t",cont+1);
                                       scanf("%f",&x1);
                                       
                                       if(x1>=x)
                                       x=x1;
       }
       
       if(nv!=0)
       
       printf("\n Il numero maggiore e': %.2f \n",x);
       system("pause");
}

                                       
                   
