#include<iostream>
#include<stdio.h>

#define STR 30

char name[STR];
FILE *pf;

void Scrivi();
void Leggi();

main()
{
	int i, scelta;
	
	printf("Digita 1 per scrivere sul file, 2 per leggere dal file: \t");
	scanf("%d",&scelta);
	
	switch(scelta)
	{
		case 1: Scrivi();
		break;
		case 2: Leggi();
	}
	
	system("pause");
	
	
	
	
}

void Scrivi()
{
	char repeat;
	
	pf=fopen("elenco.txt", "w");
	
	do
	{
		printf("Inserisci un nome: \t");
		scanf("%s",&name);
		fprintf(pf, " %s ", name);
		printf("\n\n Vuoi inserirne un altro? y/n");
		scanf("%c",&repeat);
	}
	while(repeat=='y');
	fflush(stdin);
	
	fclose(pf);
}

void Leggi()
{
	char name2[STR];
	
	pf=fopen("elenco.txt","r");
	
	while(fscanf(pf, " %s ", &name2)!=EOF)
	{
		printf("\n\t %s ",name2);
	}
	fflush(stdin);
	
	fclose(pf);
	
	
}

















