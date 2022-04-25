
#include<iostream>

#define dado 6;
int s, n;

main(){
       printf("\n Piazza la tua scommessa!!!");
       scanf("%d",&s);
       
       if(s<1 || s>6){
              printf("\n Devi digitare un numero da 1 a 6!!! \n");
              }
              else{
                   srand(time(0));
                   n=rand()%dado+1;
                   
                   if(s==n)
                           printf("\n Hai vinto!!! Il numero uscito e': %d \n",n);
                            
                   else
                       printf("\n hai perso!!! Il numero uscito e': %d \n\n",n);
                       
                       }
                       system("pause");
                       }
                       
                   
