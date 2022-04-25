#include<iostream>

int m,g;

main(){
       printf("Inserisci il numero in base al mese");
       scanf("%d",&m);
       
       switch(m){
                 case 1: printf("\n E' inverno \n");
                 break;
                 case 2: printf("\n E' inverno \n");
                 break;
                 case 3: printf("\n Inserisci il giorno");
                 scanf("%d",&g);
                 if(g<20){
                          printf("\n E' inverno \n");
                          }
                          else{
                               printf("\n E' primavera \n");
                               }
                               break;
                 case 4: printf("\n E' primavera \n");
                 break;
                 case 5: printf("\n E' primavera \n");
                 break;
                 case 6: printf("\n Inserisci il giorno");
                 scanf("%d",&g);
                 if(g<20){
                          printf("\n E' primavera \n");
                          }
                          else{
                               printf("\n E' estate \n");
                               }
                               break;
                 case 7: printf("\n E' estate \n");
                 break;
                 case 8: printf("\n E' estate \n");
                 break;
                 case 9: printf("\n Inserisci il giorno");
                 scanf("%d",&g);
                 if(g<20){
                          printf("\n E' estate \n");
                          }
                          else{
                               printf("\n E' autunno \n");
                               }
                               break;
                 case 10: printf("\n E' autunno \n");
                 break;
                 case 11: printf("\n E' autunno \n");
                 break;
                 case 12: printf("\n Inserisci il giorno");
                 scanf("%d",&g);
                 if(g<20){
                          printf("\n E' autunno \n");
                          }
                          else{
                               printf("\n E' inverno \n");
                               }
                               }
                               system("pause");
                               }
                 
                 
                 
                 
                 
                 
                 
                 
                 
                               
                               
                               
                               
                               
                               
                               
