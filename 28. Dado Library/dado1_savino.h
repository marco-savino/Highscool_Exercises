
#include<time.h>

typedef int dado;



int GetFaccia(dado d)
{
	return(d);
}


void SetFaccia(int n, dado *d)
{
	*d=n;
	return;
}


void Lancia_dado(dado *d)
{
	srand(time(NULL));
	*d=rand()%6+1;
	//*d=7;
	return;
}


void Crea_dado1(dado *d)
{
	Lancia_dado(d);
	return;
}

void Crea_dado2(int n, dado *d)
{
	SetFaccia(n, d);
	return;
}
