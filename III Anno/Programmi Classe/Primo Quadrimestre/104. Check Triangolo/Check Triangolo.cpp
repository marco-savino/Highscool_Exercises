
#include<iostream>

main()
{
 float a,b,c;
       
 printf("\n Inserisci tre valori");
 scanf("%f%f%f",&a,&b,&c);
       
       while((a>=b+c) && (b>=a+c) && (c>=a+b))
       {
        printf("\n I tre valori non possono essere lati di un \n triangolo, reinseriscili \n");
        scanf("%f%f%f",&a,&b,&c);
       }
                  
 printf("\n I tre valori possono essere lati di un \n triangolo \n");
                       
 system("pause");
}
