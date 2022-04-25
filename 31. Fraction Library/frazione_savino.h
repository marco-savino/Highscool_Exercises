
struct fraction
{
	int n;
	int d;
};
typedef struct fraction frazione;


// --- Selettori ---

int GetNum(frazione f)
{
	return(f.n);
}

int GetDen(frazione f)
{
	return(f.d);
}


// --- Modificatori ---

void SetFraction(fraction *f, int n1, int d1)
{
	f->n=n1;
	f->d=d1;
	return;
}


// --- Costruttori ---

frazione Crea_Frazione1()
{
	frazione f;

	f.n=1;
	f.d=0;
	return(f);
}

frazione Crea_Frazione2(int n1, int d1)
{
	frazione f;

	SetFraction(&f, n1, d1);
	return(f);
}


// --- Operazioni Specifiche ---


int Mcd(int x, int x1)
{
	if(x==x1)
	return(x);
	
	if(x>x1)
	{
		for(int i=2; i<=x1; i++)
		{
			if(x%i==0 && x1%i==0)
			return(i);
			
			if(i%2==0 && i!=2)
			i++;
		}
		return(1);
	}
	
	if(x1>x)
	{
		for(int i=2; i<=x; i++)
		{
			if(x%i==0 && x1%i==0)
			return(i);
			
			if(i%2==0 && i!=2)
			i++;
		}
		return(1);
	}
}


int Mcm(int x, int x1)
{
	if(x%x1==0)
	return(x);
	if(x1%x==0)
	return(x1);

	for(int i=1; i<=x1; i++)
	{
		if((x*i)%x1==0)
		return(x*i);
		else
		if((x1*i)%x1==0)
		return(x1*i);
	}
}


frazione Somma(frazione f, frazione f1)
{
	fraction ris;
	
	int mcm=Mcm(f.d, f1.d), mcd;
	
	ris.d=mcm;
	ris.n=((mcm/f.d)*f.n)+((mcm/f1.d)*f1.n);
	
	mcd=Mcd(ris.n, ris.d);
	if(mcd!=1)
	{
		ris.n=ris.n/mcd;
		ris.d=ris.d/mcd;
	}
	
	return(ris);
}

frazione Differenza(frazione f, frazione f1)
{
	fraction ris;
	
	int mcm=Mcm(f.d, f1.d), mcd;
	
	ris.d=mcm;
	ris.n=((mcm/f.d)*f.n)-((mcm/f1.d)*f1.n);
	
	mcd=Mcd(ris.n, ris.d);
	if(mcd!=1)
	{
		ris.n=ris.n/mcd;
		ris.d=ris.d/mcd;
	}
	
	return(ris);
}

frazione Moltiplicazione(frazione f, frazione f1)
{
	fraction ris;
	int mcd;
	
	ris.d=f.d*f1.d;
	ris.n=f.n*f1.n;
	
	mcd=Mcd(ris.n, ris.d);
	if(mcd!=1)
	{
		ris.n=ris.n/mcd;
		ris.d=ris.d/mcd;
	}
	
	return(ris);
}

frazione Divisione(frazione f, frazione f1)
{
	fraction ris;
	int mcd;
	
	ris.d=f.d*f1.n;
	ris.n=f.n*f1.d;
	
	mcd=Mcd(ris.n, ris.d);
	if(mcd!=1)
	{
		ris.n=ris.n/mcd;
		ris.d=ris.d/mcd;
	}
	
	return(ris);
}




