// n. 219

#include<iostream>

float max[7], min[7], esc=0;
int cont, cont1, cont2;

main(){
       for(cont=0; cont<7; cont++)
       {
                   printf("\n Inserisci la temperatura massima del %d giorno \t",cont+1);
                   scanf("\n %f",&max[cont]);
                   printf("\n Inserisci la temperatura minima del %d giorno \t",cont+1);
                   scanf("\n %f",&min[cont]);
                   
                   esc=esc+(max[cont]-min[cont]);
                   
                   if(max[0]<max[cont]){
                                         cont1=cont;
                                         max[0]=max[cont];
                   }
                   
                   if(min[0]>min[cont]){
                                         cont2=cont;
                                         min[0]=min[cont];
                   }
       }
       
       printf("\n La temperatura massima %.2f e' stata durante il giorno %d \n",max[0],cont1+1);
       printf("\n La temperatura minima %.2f e' stata durante il giorno %d \n",min[0],cont2+1);
       printf("\n L'Escursione Termica media e': %.2f \n\n\n",esc/7);
       system("pause");
}
                   
                   
                   
                   

       
