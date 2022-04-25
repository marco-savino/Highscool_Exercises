#include<iostream>
#include<windows.h>

#define student 2
#define subject 4
#define half_year 2

int mtx[half_year][student][subject], i, i1, i2, s, cont[student];

main(){
		for(i=0; i1<half_year; i++)
		{
			printf("\n\n\n Inserire i voti degli alunni nel %d quadrimestre \n",i+1);
			
			for(i1=0; i1<student; i1++)
			{
				printf("\n\n Inserire le le medie delle materie del %d studente \n",i1+1);
				
				for(i2=0; i2<subject; i2++)
				{
					printf("\n   - Digitare la media della %d materia: \t\t",i2+1);
					scanf("%d",&mtx[i][i1][i2]);
				}
			}
		}
		
		printf("\n\n\n Selezionare l'informazione da mostrare: \n   1) Gli studenti migliorati in inglese \n   2) Chi in media e' peggiorato \n   3) Chi ha mantenuto la stessa media \n");
		scanf("%d",&s);
		
		switch(s){
					case 1: 
