/* input -> B, b, h, relative a un trapezio rettangolo
output -> area*/

#include<iostream>
#include<conio.h>

float B,b,h;

main(){
       printf("\n Digita la Base Maggiore, la Base Minore e l'Altezza");
       scanf("%f",&B);
       scanf("%f",&b);
       scanf("%f",&h);
       printf("\n L'Area e': %.2f",(B+b)*h/2);
       
       getch();
       }
       
     
       
