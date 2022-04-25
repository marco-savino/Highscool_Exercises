
#include<iostream>

char c;

main(){
       printf("\n Inserisci un carattere \n");
       scanf("%c",&c);
       
       switch(c){
                 case 'a':
                 case 'e':
                 case 'i':
                 case 'o':
                 case 'u': printf("\n E' una vocale \n");
                 break;
                 default: printf("\n Non e' una vocale \n");
                 }
                 
       system("pause");
}
