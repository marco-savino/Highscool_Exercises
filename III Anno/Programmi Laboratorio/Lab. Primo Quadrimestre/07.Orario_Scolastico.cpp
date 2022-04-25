/* \n = a capo --- \t = spazio di un tab ---

*/

#include<iostream>
#include<conio.h>

int g;

main(){
       printf("\n Premi 1 per lunedi', 2 per martedi', \n 3 per mercoledi', 4 per giovedi', \n 5 per venerdi'");
       scanf("%d",&g);
       
       switch(g){
                 case 1: printf("\n Lunedi': rel, sto, mat, ing, info, tpsi");
                      break;
                 case 2: printf("\n Martedi': ed. fis., ed. fis. info, tpsi, \n sto, telec");
                      break;
                 case 3: printf("\n Mercoledi': mat, ita, ita, ing, sist, \n sist, sist");
                      break;
                 case 4: printf("\n Giovedi': mat, ita, ita, ing, sist, \n sist, sist");
                      break;
                 case 5: printf("\n Venerdi': mat, ita, ita, ing, sist, \n sist, sist");
                      break;
                 
                 default: printf("We testina, hai sbagliato a digitare neh'");
                 }
                 getch();
                 }
                 
