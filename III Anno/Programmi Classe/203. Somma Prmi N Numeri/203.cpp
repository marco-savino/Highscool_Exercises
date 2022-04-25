// N. 203

#include<iostream>
#include<windows.h>

int nv,s,cont;

main(){
	s=0;
	printf("\n Inserisci fino a che numeri fare la somma \n");
	scanf("%d",&nv);
	
	for(cont=1; cont<=nv; cont++){
		s=s+cont;
		printf("\n %d \n",s);
		Sleep(500);
	}
	system("pause");
}
