// input n caratteri; output se e' una parola palindorma.

#include<iostream>

char a[32];
int i, i1=0, nc;
bool flag=true;

main(){
       do{
            printf("\n Inserisci il numero di caratteri che vuoi digitare \t");
            scanf("%d",&nc);
            if(nc<0 || nc>32)
            printf("\n Errore, inserisci un valore corretto \n");
       }
       while(nc<0 || nc>32);
       
       for(i=0; i<nc; i++)
       {
                printf("\n Inserisci il %d carattere \t",i+1);
                scanf(" %c",&a[i]);
       }
       
       i--;
       
       do{
               if(a[i]==a[i1])
               {
                              i--;
                              i1++;
               }
               else
               flag=false;
       }
       while(flag && i>=i1);
       
       if(!flag)
       printf("\n\n Non e' una parola palindroma \n\n\n");
       else
       printf("\n\n E' una parola palindroma \n\n\n");
       
       system("pause");
}
