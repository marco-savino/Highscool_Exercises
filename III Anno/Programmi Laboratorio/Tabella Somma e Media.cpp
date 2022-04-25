// stampare il vettore di N 

#include<iostream>

int nv, cont, a[100], max, min;
float m=0;

main(){
       do{
       printf("\n Quanti valori vuoi inserire (n. minore di 100)? :-) \t");
       scanf("%d",&nv);
       if(nv>=100 || nv<0)
       printf("\n Errore, inserire un valore corretto \n");
       }
       while(nv>=100 || nv<0);
       
       for(cont=0; cont<nv; cont++)
       {
                   printf("\n Inserire il %d valore ;-) \t",cont+1);
                   scanf("%d",&a[cont]);
                   
                   if(cont!=0)
                   a[0]=a[0] + a[cont];
                   else{
                        min=a[0];
                        max=a[0];
                   }
                   
                   if(a[cont]>max)
                   max=a[cont];
                                    
                   if(a[cont]<min)
                   min=a[cont];                   
       }
       
       m=a[0];
       m=m/nv;
       
       printf("\n La somma e': %d \n La media e': %.2f \n Il valore massimo e': %d \n Il valore minimo e': %d \n",a[0],m,max,min);
       
       system("pause");
}
       
                    
