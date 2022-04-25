
#include<iostream>

float v;

main(){
       do{
          printf("\n Inserisci il voto: \t");
          scanf("%f",&v);
                  
          if(v<6 && v>0)
          printf("\n Insufficiente \n");
          
          else{
               if(v>=6 && v<7)
               printf("\n Sufficiente \n");
               
               else{
                    if(v>=7 && v<=10)
                    printf("\n Buono \n");
                    
                    else{
                         if(v>10)
                         printf("\n Errore \n");
                         
                         else
                         printf("\n Exit \n");
                    }
               }
          }
       }
       while(v>0 && v<10);
          
          system("pause");
}
          
                    
                    
