
#include<iostream>

float a,b,c;

main(){
       printf("\n Inserisci i lati di un triangolo");
       scanf("%f%f%f",&a,&b,&c);
       
       if(a==b && b==c){
               printf("\n Il triangolo e' equilatero \n");
               }
               else{
                    if(a!=b && b!=c && c!=a){
                            printf("\n Il triangolo e' scaleno\n");
                            }
                            else{
                                 printf("\n Il triangolo e' isoscele \n");
                                 }
                                 }
                                 system("pause");
                                 }
