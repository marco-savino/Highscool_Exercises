
#include<iostream>

char s;

main(){
       printf("\n Inserisci l'iniziale di una stagione \n");
       scanf("%c",&s);
       
       switch(s){
                 case 'a': printf("\n Settembre, ottobre, novembre, dicembre \n");
                 break;
                 case 'i': printf("\n Dicembre, gennaio, febbraio, marzo \n");
                 break;
                 case 'p': printf("\n Marzo, aprile, maggio, giunio \n");
                 break;
                 case 'e': printf("\n Giunio, lugio, agosto, settembre \n");
                 break;
                 default: printf("\n Hai sbagliato a digitare \n");
                 }
                 system("pause");
                 }
