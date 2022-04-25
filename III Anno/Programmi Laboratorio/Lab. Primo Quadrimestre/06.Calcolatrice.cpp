
#include<iostream>
#include<conio.h>
#include<math.h>

float a, b;
int s, e;

main(){ 
        printf("\n Digita: \n 1 per l'addizione \n 2 per la sottrazione \n 3 per la moltiplicazione \n 4 per la divisione \n 5 per la potenza \n 6 per la radice quadrata \n\n");
        scanf("%d",&s);
        
        if(s>=1 && s<=6){ 
        
        printf("\n Inserisci due numeri");
        scanf("%f",&a);
        scanf("%f",&b);
        
        if(s==4 && b==0)
                printf("\n E' impossibile!!!");
        
        if(s==1)
                a=a+b;
        if(s==2)
                a=a-b;
        if(s==3)
                a=a*b;
        if(s==4)
                a=a/b;
                 
        printf("\n Il risultato e': %.2f",a); 
        
        
        if(s==5){
                 printf("\n Digita l'esponente");
                 scanf("%d",&e);
                 a=pow(a,e);
                 b=pow(b,e);
                 printf("\n Le potenze sono: %.2f  %.2f",a,b); }
                 
        if(s==6){
                 a=sqrt(a);
                 b=sqrt(b);
                 printf("\n Le radici quadrate sono: %.2f  %.2f",a,b); }
                 }
                 
                 else
                 printf("\n Ubriacone, hai sbagliato a digitare!");
                 
                 getch();
        }
