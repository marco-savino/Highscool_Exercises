
#include<iostream>

struct record
{
	int a;
	int b;
};

bool Is_Eq(struct record *ps1, struct record *ps2)
{
	/*
		Scopo: confrontare le due struct 
		Input: le due struct da confrontare
		Output: ---
		I/O: ---
		Return: true se sono uguali, false se non lo sono
	*/
	
	if((*ps1).a==(*ps2).a && (*ps1).b==(*ps2).b)
	return(true);
	else
	return(false);
}

main()
{
	struct record s1, s2;
	
	printf("\n Inserisci i due valori del primo struct: \t");
	scanf("%d%d",&s1.a,&s1.b);
	printf("\n Inserisci i due valori del secondo struct: \t");
	scanf("%d%d",&s2.a,&s2.b);
	
	if(Is_Eq(&s1, &s2))
	printf("\n Sono uguali :D \n\n\n");
	else
	printf("\n Sono diversi D: \n\n\n");
	
}
