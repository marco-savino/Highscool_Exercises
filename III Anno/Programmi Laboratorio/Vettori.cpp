#include<iostream>

int a[10], b[15], s, s1, cont, output=0;
char c[5];

main(){
	do{
		printf("\n Scegliere una delle seguenti opzioni: \n 1) Inserire i dieci valori del primo vettore a \n 2) Inserire i 15 valori del secondo vettore b \n 3) Inserire i 5 caratteri del terzo vettore c \n 4) Effettuare operazioni sui vettori \n 0) Uscire dal programma \t");
		do{
			scanf("%d",&s);
			if(s<0 || s>4)
			printf("\n Errore, inserire una scelta valida \t");
		}
		while(s<0 || s>4);
		switch(s){
					case 1: printf("\n Inserisci i 10 valori del vettore a \n");
							for(cont=0; cont<10; cont++){
								scanf("%d",&a[cont]);
							}
					break;
					case 2: printf("\n Inserisci i 15 valori del vettore b \n");
							for(cont=0; cont<15; cont++){
								scanf("%d",&b[cont]);
							}
					break;
					case 3: printf("\n Inserisci i 5 caratteri del vettore c \n");
							for(cont=0; cont<5; cont++){
								scanf("%c",&c[cont]);
							}
					break;
					case 4:  do{
								printf("\n Digita 1 per sommare i valori di a e b; \n Digita 2 per trovare il valore maggiore di b; \n Digita 3 per conoscere quante volte e' stato digitato il carattere a nel vettore 3; \n Digita 4 per visualizzare a; \n Digita 5 per visualizzare b; \n Digita 6 per visualizzare c; \n Digita 0 per tornare insietro \t");
								do{
									scanf("%d",&s1);
									if(s<0 || s>6)
									printf("\n Errore, inserire una scelta valida \t");
								}
								while(s<0 || s>6);
								switch(s1){
											case 1: for(cont=0; cont<10; cont++){
														output=output+a[cont];
											}
											printf("\n La somma e': %d",output);
											break;
											case 2: output=a[0];
													for(cont=0; cont<15; cont++){
														if(output<b[cont])
														output=b[cont];
											}
											printf("\n Il valore maggiore e': %d",output);
											break;
											case 3: output=a[0];
													for(cont=0; cont<5; cont++){
														if(c[cont]=='a')
														output++;	
											}
											printf("\n Il numero di a e': %d",output);
											break;
											case 4: for(cont=0; cont<10; cont++){
														printf("\n %4d \n",a[cont]);									
											}
											break;
											case 5: for(cont=0; cont<15; cont++){
														printf("\n %4d \n",b[cont]);									
											}
											break;
											case 6: for(cont=0; cont<5; cont++){
														printf("\n %4c \n",c[cont]);									
											}
											break;
								}
						
					}while(s1!=0);
		}
	}while(s!=0);
}
