
#include<iostream>
#include<conio.h>
#include<math.h>

float a, b;
int s, e;

main(){ 
        printf("\n Digita: \n 1 per l'addizione \n 2 per la sottrazione \n 3 per la moltiplicazione \n 4 per la divisione \n 5 per la potenza \n 6 per la radice quadrata \n\n");
        scanf("%d",&s);
        
        if(s >= 1 && s <= 4){
        printf("\n Inserisci due numeri");
        scanf("%f",&a);
        scanf("%f",&b);
        
        switch(s){
                  case 1: a=a+b;
                  printf("\n Il risultato e': %.2f",a);
                  break;
                  
                  case 2: a=a-b;
                  printf("\n Il risultato e': %.2f",a);
                  break;
                  
                  case 3: a=a*b;
                  printf("\n Il risultato e': %.2f",a);
                  break;
                  
                  case 4: 
                  if(b!=0){
                  a=a/b;
                  printf("\n Il risultato e': %.2f",a);
                  }
                  else{
                  printf("\n Errore!!!");
                  }
                  break;
        
                  case 5:
                  printf("\n Digita l'esponente");
                  scanf("%d",&e);
                  a=pow(a,e);
                  b=pow(b,e);
                  printf("\n Le potenze sono: %.2f  %.2f",a,b);
                  break; 
                 
                  case 6:
                  a=sqrt(a);
                  b=sqrt(b);
                  printf("\n Le radici quadrate sono: %.2f  %.2f",a,b); 
                  break;
                  }
                  }
                  else{ 
                        printf("\n Hai sbagliato a digitare");
                        }
                  
                 getch();
        }
        
        
