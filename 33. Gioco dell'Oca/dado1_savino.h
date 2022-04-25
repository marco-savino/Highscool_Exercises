
#include<time.h>
#include<stdlib.h>

/*
struct d
{
       int face;
};
typedef struct d dado;
*/

typedef unsigned int dado;



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
	srand(time(0));
	*d=rand()%6+1;
	//*d=7;
	return;
}


dado Crea_dado()
{
    dado d;
     
	Lancia_dado(&d);
	return(d);
}

void Crea_dado2(int n, dado *d)
{
	SetFaccia(n, d);
	return;
}
