// input a[10]; input b[10]; output if a[min]=b[max]

#include<iostream>

int a[10],b[10],i;

main(){
       srand(time(0));
       printf("\n Vettore A \t\t Vettore B");
       
       for(i=0; i<10; i++)
       {
        a[i]=rand()%201-100;
        b[i]=rand()%201-100;
        printf("\n %4d \t\t\t %4d",a[i],b[i]);
        
        if(a[0]>a[i])
        a[0]=a[i];
        
        if(b[0]<b[i])
        b[0]=b[i];
       }
       
       printf("\n\n Il valore minimo di A e': %d \n Il valore massimo di B e': %d",a[0],b[0]);
       
       if(a[0]==b[0])
       printf("\n\n Il valore minimo di A e' uguale al massimo di B \n\n\n");
       
       else
       printf("\n\n Il valore minimo di A non e' uguale al massimo di B \n\n\n");
       
       system("pause");
}
       
       
       
       
       
