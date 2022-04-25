#include<iostream>

int a, b, cont=1;

main(){
    	printf("\n Inserisci due numeri per trovarne l'm.c.m. :D \t");
       	scanf("%d",&a);
       	scanf("%d",&b);
       	
		if(a==0 || b==0)
       	printf("\n Il m.c.m. e': 0 \n\n\n");
       	
       	else{
       	do{
       		if(a>b){
       				if((a*cont)%b==0){
					printf("\n Il m.c.m. e': %d \n\n\n",a*cont);
					b=a;
					}
					else
					cont++;	
			}
					
			else{
				if((b*cont)%a==0){
				printf("\n Il m.c.m. e': %d \n\n\n",b*cont);
				a=b;
				}
				else
				cont++;					
			}
		}
		while((a*cont)%b!=0 || (b*cont)%a!=0);
		}

       
       system("pause");
}       
