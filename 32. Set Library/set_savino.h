
#define NMAX 10

struct s
{
	int elem[NMAX];
	int len;
};
typedef struct s set;

//------------------------------------------------------


int Crea_Set(set *s)
{
	s->len=0;
	return(0);
}


int GetElem(set s, unsigned int i, int *n)
{
	// 0) Ok
	// 1) Il valore cercato nell'indice specificato non esiste 
	
	if(s.len<i)
	return(1);
	
	*n=s.elem[i];
	return(0);
}


int SetElem(set *s, unsigned int i, int n)
{
	// 0) Ok
	// 1) L'indice e' maggiore della lunghezza attuale dell'insieme
	
	if(i>=s->len)
	return(1);
	
	s->elem[i]=n;
	return(0);
}


int Insert_Elem(set *s, int n)
{
	// 0) ok
	// 1) Il vettore e' gia' pieno
	// 2) L'elemento e' gia' presente
	
	int i;
	
	if(s->len>=NMAX)
	return(1);
	
	for(i=0; i<s->len; i++)
	if(n==s->elem[i])
	return(2);	
	
	s->elem[s->len]=n;
	s->len++;
	return(0);
}


int Del_Elem(set *s, int n)
{
	// 0) ok
	// 1) Il vettore e' gia' vuoto
	// 2) L'elemento non e' stato trovato
	
	bool found=false;
	int i=0, pos;
	
	if(s->len<=0)
	return(1);
	
	do
	{
		if(s->elem[i]==n)
		{
			found=true;
			pos=i;
		}
		else
		i++;
	}
	while(i<s->len && !found);

	if(found)
	{
		for(i=pos; i<s->len; i++)
		{
			s->elem[i]=s->elem[i+1];
		}
		s->len--;
		return(0);
	}
	else
	return(2);
}


bool IS_Empty(set s)
{
	int i=0;

	for(int i=0; i<s.len; i++)
	{
		if(s.elem[i]!=0)
		return(false);
	}

	return(true);
}


bool IS_Full(set s)
{
	if(s.len==NMAX)
	return(true);
	else
	return(false);
}


bool IS_In_Set(set s, int n)
{
	for(int i=0; i<s.len; i++)
	if(s.elem[i]==n)
	return(true);
	
	return(false);
}


// --- Operazioni Specifiche ---


int Union(set a, set b, set *c)
{
	// 0) ok
	// 1) la lunghezza di c sfora NMAX
	
	*c=a;
	
	for(int i=0; i<b.len; i++)
	{
		for(int i1=0; i1<a.len; i1++)
		{
			if(b.elem[i]!=a.elem[i1])
			{
				c->elem[i]==b.elem[i];
				c->len++;
			}
		}
	}
	
	if(c->len>NMAX)
	return(1);
	else
	return(0);
}


int Inters(set a, set b, set *c)
{
	// 0) ok 
	
	for(int i=0; i<a.len; i++)
	{
		for(int i1=0; i1<b.len; i1++)
		{
			if(a.elem[i]==b.elem[i1])
			{
				c->elem[i]==a.elem[i];
				c->len++;
			}
		}
	}
	
	return(0);
}

int Compl(set a, set b, set *c)
{
	// 0) ok	
	
	for(int i=0; i<a.len; i++)
	{
		for(int i1=0; i1<b.len; i1++)
		{
			if(a.elem[i]!=b.elem[i1])
			{
				c->elem[i]==a.elem[i];
				c->len++;
			}
		}
	}
}









	

		


