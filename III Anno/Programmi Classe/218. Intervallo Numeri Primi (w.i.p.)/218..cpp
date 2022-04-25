#include<iostream>

int a, b, vet[1000], cont, cont1, flag;

main(){
		do{	
			printf("\n Inserire due numeri fra 0 e 1000 per determinare l'intervallo di valori :) \t");
			scanf("%d%d",&a,&b);
			if(a<0 || a>1000 || b<0 || b>1000)
			printf("\n Errore, inserire valori corretti \n\n\n");
		}
		while(a<0 || a>1000 || b<0 || b>1000);
		
		for(cont=0; cont<b-a; cont++)
		{
			for(cont1=2; cont1<500; cont1++)
			{
				
			}
		}
}
