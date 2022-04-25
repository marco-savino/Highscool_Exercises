/* input -> due cateti
output -> area e perimetro triangolo rettangolo*/

#include<iostream>
#include<conio.h>
#include<math.h>

float cat1, cat2;

main(){
       printf("\n Inserisci i due cateti :)");
       scanf("%f",&cat1);
       scanf("%f",&cat2);
       
       printf("\n L'Area e': %.2f",cat1*cat2/2);
       
       cat1=cat1+cat2+sqrt(pow(cat1,2)+pow(cat2,2));
       
       printf("\n Il Perimetro e': %.2f",cat1);
       
       getch();
       }
