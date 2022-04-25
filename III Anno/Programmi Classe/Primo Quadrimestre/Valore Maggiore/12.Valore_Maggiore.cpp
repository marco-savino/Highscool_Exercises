
#include<iostream>

main(){
       float a,b,c;
       
       printf("\n Inserisci tre numeri");
       scanf("%f%f%f",&a,&b,&c);
       
       if(a>=b && b>=c){
               printf("\n Il valore maggiore e': %.2f \n",a);
       }
       else{
            if(b>=c && b>=a){
                    printf("\n Il valore maggiore e': %.2f \n",b);
                    }
                    else{
                         printf("\n Il valore maggiore e': %.2f \n",c);
                         }
                         }
                         system("pause");
                         }
                            
                            
