// n. 220

#include<iostream>

#define max 1000
int nx, x, dv[max], cont;

main(){

       do{
           printf("\n Inserire il numero di valori desiderati \t");
           scanf("%d",&nx);
           if(nx<0 || nx>max)
           printf("\n Errore, inserire valori corretti \n");
       }
       while(nx<0 || nx>max);
       
       for(cont=0; cont<nx; cont++)
       {
                   printf("\n Inserire il %d numero \t",cont+1);
                   scanf("%d",&dv[cont]);
       }
       
       printf("\n Inserire il valore da cercare \t");
       scanf("%d",&x);
       cont=0;
       
       do{
          if(x==dv[cont])
          printf("\n Si, il valore e' presente \n\n\n");
          cont++;
       }
       while(cont<nx && x!=dv[cont-1]);

       if(cont>=nx)
       printf("\n No, il valore non e' presente D: \n\n\n");
       
       system("pause");
}
       
           
                   
                   

