#include<iostream>
#include<windows.h>

#define student 2
#define subject 4

int i, i1, mtx[student][subject], s, a=0, a1=0, cont[subject];

main(){

		for(i=0; i<student; i++)
		{
			printf("\n\n Inserire le le medie delle materie del %d studente \n",i+1);
			
			for(i1=0; i1<subject; i1++)
			{
				printf("\n   - Digitare la media della %d materia: \t\t",i1+1);
				scanf("%d",&mtx[i][i1]);
			}
		}
		
		
		printf("\n\n\n Selezionare l'informazione da mostrare: \n   1) La media piu' alta in matematica \n   2) Lo studente piu' indebitato \n   3) Uno studente probabilmente promosso \n   4) Uno studente probabilmente bocciato \n");
		scanf("%d",&s);
		
		switch(s){
					case 1:{
							for(i=0; i<student; i++)
							{
								if(a<mtx[i][3])
								{
									a=mtx[i][3];
									a1=i;
								}								
							}
							printf("\n La media piu' alta in matematica e' %d dello studente n. %d \n\n\n\n",a,a1+1);
						break;
					}
					
					
					case 2:{
							for(i=0; i<student; i++)
							{
								a=0;							
								for(i1=0; i1<subject; i1++)
								{
									if(mtx[i][i1]<6)
									{
										a++;
										cont[i]=a;
									}
								}
								
								if(cont[0]<cont[i])
								{
									cont[0]=cont[i];
									a=i;
								}								
							}
							printf("\n Lo studente piu' indebitato e' il n. %d con %d materie insufficienti \n\n\n\n ",a+1,cont[0]);						
						break;
					}
					
					
					case 3:{													
							for(i=0; i<student; i++)
							{
								for(i1=0; i1<subject; i1++)
								{
									if(mtx[i][i1]>=6)
									{
										a++;
										a1=i;
									}											
								}
							}
							if(a==subject)
							printf("\n Uno studente probabilmente promosso sara' il n. %d \n\n\n\n",a1+1);
							else
							printf("\n Non ci sono studenti promossi con certezza \n\n\n\n");				
						break;					
					}
					
					
					case 4:{
							for(i=0; i<student; i++)
							{
								for(i1=0; i1<subject; i1++)
								{
									if(mtx[i][i1]<6)
									{
										a++;
										a1=i;
									}											
								}
							}
							if(a==subject)
							printf("\n Uno studente probabilmente bocciato o rimandato sara' il n. %d \n\n\n\n",a1+1);
							else
							printf("\n Non ci sono studenti bocciato o rimandato con certezza \n\n\n\n");					
						break;
					}			
		}
		system("pause");
}

