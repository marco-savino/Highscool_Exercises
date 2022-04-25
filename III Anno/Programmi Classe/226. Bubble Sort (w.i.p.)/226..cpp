// Bubble Sort

#include<iostream>
#define l 20

int a[l], i, last=l-2, c;
bool ordered=false;

main(){
       srand(time(0));
       printf("\n Premi Invio per estrarre casualmente 20 numeri \n");
       system("pause");
       printf("\n");
       
       for(i=1; i<=l; i++)
       {
        a[i-1]=rand()%101;
        printf(" %5d ",a[i-1]);
        if(i%5==0)
        printf("\n");
       }
       
       printf("\n\n Premi Invio per ordinarli con il Bubble Sort :D \n");
       system("pause");
       printf("\n");
       
       while((last>0) && !ordered)
       {
                      ordered=true;
                      
                      for(i=0; i<=last; i++)
                      {
                               if(a[i]>a[i+1])
                               {
                                c=a[i];
                                a[i]=a[i+1];
                                a[i+1]=c;
                                ordered=false;
                               }
                               
                      }
                      
                      
                      printf(" %5d ",a[i]);
                      if(i%5==0)
                      printf("\n");
       }
       
       printf("\n\n\n");
       system("pause");
}
