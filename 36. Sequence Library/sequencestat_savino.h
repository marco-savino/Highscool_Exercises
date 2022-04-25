#include <stdlib.h>
#include <stdio.h>

#define MAXELEM 100

typedef int info_t;

struct s1
{
	info_t info[MAXELEM];
	int len;
};
typedef struct s1 sequence;




int Crea_Seq(sequence *s)
{
	// 0 --> ok
	
	s->len=0;
	return(0);
}


int Get_Elem_Pos(sequence s,  info_t *x, int pos)
{
	// 0 --> ok
	// 1 --> pos >= len || pos < 0
	
	if(pos<0 || pos>=s.len)
	return(1);
	else
	{
		*x=s.info[pos];
		return(0);
	}
}


int Set_Elem_Pos(sequence *s,  info_t x, int pos)
{
	// 0 --> ok
	// 1 --> pos<0 || pos>=len
	
	if(pos<0 || pos>=s->len)
	return(1);
	else
	{
		s->info[pos]=x;
		return(0);
	}	
}


bool IS_Vuota(sequence s)
{
	if(s.len==0)
	return(true);
	else
	return(false);
}

/*
bool IS_Piena(sequence s)
{
	if(s.len==MAXELEM)
	return(true);
	else
	return(false);
}
*/

int Insert_Seq(sequence *s, info_t x, int pos)
{
	// 0 --> ok
	// 1 --> pos<0 || pos>len
	// 2 --> len=MAXELEM
	
	if(s->len==MAXELEM)
	return(2);
	if(pos<0 || pos>s->len)
	return(1);
	
	
	for(int i=s->len; i>pos; i--)
	{
		s->info[i]=s->info[i-1];
	}
	s->info[pos]=x;
	s->len++;
	return(0);
}


int Append(sequence *s, info_t x)
{
	// 0 --> ok
	// 1 --> len=MAXELEM
	
	if(s->len==MAXELEM)
	return(1);
	
	s->info[s->len]=x;
	s->len++;
	return(0);
}


int Delete_Seq(sequence *s, int pos)
{
	// 0 --> ok
	// 1 --> pos<0 || pos>=len
	
	if(pos<0 || pos>=s->len)
	return(1);
	
	for(int i=pos; i<s->len-1; i++)
	{
		s->info[i]=s->info[i+1];
	}
	s->len--;
	return(0);
}


int Len_Seq(sequence s)
{
	// 0 --> ok
	int len;
	
	len=s.len;
	return(len);
}


bool Find_Seq(sequence s, info_t x)
{	
	for(int i=0; i<s.len; i++)
	{
		if(s.info[i]==x)
		return(true);
	}
	return(false);
}















