// input -> 4 bit 
// output -> calcolare l'equivalente in decimale

#include<iostream>
#include<math.h>

int b1, b2, b3, b4;

main(){
     printf("\n Digita, da sinistra verso destra, un numero binario da 4 bit \n\n");
     scanf("%d%d%d%d",&b1,&b2,&b3,&b4);
     
     if((b1 > 1 || b1 < 0) || (b2 > 1 || b2 < 0) || (b3 > 1 || b3 < 0) || (b4 > 1 || b4 < 0)){
           printf("\n Errore: devi digitare o 0 o 1!!! \n\n");
           }
     else{
          printf("\n Il numero in decimale e': %d \n",b1*pow(2,0)+b2*pow(2,0)+b3*pow(2,0)+b4*pow(2,0));          
          }
          system("pause");
          }
