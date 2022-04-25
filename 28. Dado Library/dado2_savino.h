
#include<time.h>

struct dd
{
	int faces[6];
	int i;
};
typedef struct dd dado;


int GetFaccia(dado d)
{
	int n=d.faces[d.i-1];
	
	return(n);
}


void SetFaccia(int n, dado *d)
{
	d->i=n;
	return;
}


void Lancia_dado(dado *d)
{
	srand(time(NULL));
	d->i=rand()%6+1;
	//d->i=5;
	return;
}


void Crea_dado1(dado *d)
{
	for(int i=0; i<6; i++)
	d->faces[i]=i+1;
	
	Lancia_dado(d);
	return;
}

void Crea_dado2(int n, dado *d)
{
	for(int i=0; i<6; i++)
	d->faces[i]=i+1;
	
	SetFaccia(n, d);
	return;
}
