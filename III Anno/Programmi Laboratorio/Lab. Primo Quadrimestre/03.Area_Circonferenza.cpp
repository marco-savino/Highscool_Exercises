/* input -> raggio
output -> area e circonferenza*/

#include<iostream>
#include<conio.h>
#include<math.h>

float r;
//Float è per i numeri con la virgola, con specificatore %f 

main(){
       printf("\n Inserisci il raggio");
       scanf("%f",&r);
       
       printf("\n La circonferenza e': %f",r*2*3.14);
       
       r=pow(r,2)*3.14;
       
       printf("\n L'area della circonferenza e': %f",r);
       
       getch();
       }
