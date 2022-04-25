
#include <stdlib.h>
#include <stdio.h>

#define OK 0
#define ERROR1 -1 // Errore di posizione
#define ERROR2 -2 // Elemento già presente
#define ERROR3 -3 // Errore di memoria, fallimento malloc()
#define ERROR4 -4 // Elemento non trovato nel set


struct s1
{
	int x;
	struct s1 *next;
};
typedef struct s1 node;
typedef node* set;


//------------------------------------------------------


void CreateSet(set *s)
{
	*s=NULL;
}



int GetElem(set s, int pos, int *n)
{
	// 0) Ok
	// 1) Il valore cercato nell'indice specificato non esiste 
	
	node *pnode=s;
	int i=0;
	
	if(s==NULL)
	return(ERROR1);
	if(pos<0)
	return(ERROR1);
	
	while(pnode->next!=NULL && i<pos)
	{
		pnode=pnode->next;
		i++;
	}
	if(pnode->next==NULL && i<pos)
	return(ERROR1);
	
	*n=pnode->x;
	return(OK);
}


int SetElem(set *s, int pos, int n)
{
	node *pnode=*s;
	int i=0;

	if(*s==NULL)
	return(ERROR1);
	if(pos<0)
	return(ERROR1);
	
	while(pnode->next!=NULL && i<pos)
	{
		pnode=pnode->next;
		i++;
	}
	if(pnode->next==NULL && i<pos)
	return(ERROR1);
	
	pnode->x=n;
	return(OK);
}


int AppendElem(set *s, int n)
{
	
	node *new_node=*s, *last_node;
	int i=0;
	
	if(*s==NULL)
	{
		new_node=(node*)malloc(sizeof(node));
		if(new_node==NULL)
		return(ERROR3);
		
		new_node->x=n;
		new_node->next=NULL; 
		*s=new_node;
		
		return(OK);
	}
	else
	{
		while(new_node->next!=NULL)
		{			
			new_node=new_node->next;
			
			if(new_node->x==n)
			return(ERROR2);
		}
		last_node=new_node;

		new_node=(node*)malloc(sizeof(node));
		if(new_node==NULL)
		return(ERROR3);
		
		new_node->x=n;
		new_node->next=NULL;
		last_node->next=new_node;
		
		return(OK);
	}
}


int DelElem(set *s, int n)
{
	// 0) ok
	// 1) Il vettore e' gia' vuoto
	// 2) L'elemento non e' stato trovato
	
	bool found=false;
	int i=0, pos=0;
	node *pnode=*s, *prev_node;
	
	
	if(*s==NULL)
	return(ERROR1);	
	
	while(pnode->next!=NULL && !found)
	{
		if(pnode->x==n)
		found=true;
		
		pos++;
		pnode=pnode->next;
	}
	if(found==false)
	return(ERROR4);
	
	
	if(pos==0)
	{
		*s=(*s)->next;
		free(pnode);
	}
	else
	{
		while(pnode->next!=NULL && i<pos)
		{
			if(i==pos-1)
			prev_node=pnode;
			
			pnode=pnode->next;	
			i++;
		}
		if(pnode->next==NULL && i<pos)
		return(ERROR1);
		
		prev_node->next=pnode->next;
		free(pnode);
	}

	return(OK);
}


bool IsEmpty(set s)
{
	if(s==NULL)
	return(true);
	else
	return(false);
}


bool IsInSet(set s, int n)
{
	
	bool found=false;
	
	while(s->next!=NULL && !found)
	{
		if(s->x==n)
		found=true;
		
		s=s->next;
	}
	
	return(found);
}


// --- Operazioni Specifiche ---


int Union(set a, set b, set *c)
{
	node *new_node, *prev_node;
	bool found=false;
	
	// Allocamento primo elemento di a in c
	new_node=(node*)malloc(sizeof(node));
	if(new_node==NULL)
	return(ERROR3);
	
	new_node->x=a->x;
	new_node->next=NULL;
	*c=new_node;
	//---
	
	// Allocamento del resto di a in c	
	while(a->next!=NULL)
	{
		prev_node=new_node;
		
		new_node=(node*)malloc(sizeof(node));
		if(new_node==NULL)
		return(ERROR3);
	
		new_node->x=a->x;
		new_node->next=NULL;
		prev_node->next=new_node;
		
		a=a->next;
	}
	//---
	
	// Allocamento di b in c
	a=*c;
	
	while(b->next!=NULL)
	{
		found=false;
		
		// Controllo presenza di b->x in c
		while(a->next!=NULL && !found)
		{
			if(b->x==a->x)
			found=true;
			
			a=a->next;
		}
		//---
		
		// Allocamento di b->x in c se non gia' presente
		if(!found)
		{
			prev_node=new_node;
		
			new_node=(node*)malloc(sizeof(node));
			if(new_node==NULL)
			return(ERROR3);
	
			new_node->x=b->x;
			new_node->next=NULL;
			prev_node->next=new_node;
		}
		//---	
		
		b=b->next;
	}
	//---
	
	return(OK);
}


int Inters(set a, set b, set *c)
{
	node *new_node, *prev_node, *pnodeb=b;
	bool found=false;
	
	*c=NULL;
	
	if(IsEmpty(a) || IsEmpty(b))
	return(OK);
	
	while(b!=NULL)
	{
		if(IsInSet(a, b->x))
		AppendElem(&(*c), b->x);

		b=b->next;
	}
	
	/*
	while(a->next!=NULL)
	{
		found=false;
		pnodeb=b;
		
		// Controllo della presenza di a->x in b
		while(pnodeb->next!=NULL && !found)
		{
			if(a->x==pnodeb->x)
			found=true;
			
			pnodeb=pnodeb->next;
		}
		//---
		
		// Se e' presente ed e' il primo elemento, inserimento di x->a in c in testa
		if(found && *c==NULL)
		{
			new_node=(node*)malloc(sizeof(node));
			if(new_node==NULL)
			return(ERROR3);
	
			new_node->x=a->x;
			new_node->next=NULL;
			*c=new_node;
		}
		//---
		else
		{
			// Se e' presente anche se non e' il primo, inserimento di x->a in c in coda
			if(found)
			{
				prev_node=new_node;
			
				new_node=(node*)malloc(sizeof(node));
				if(new_node==NULL)
				return(ERROR3);
		
				new_node->x=a->x;
				new_node->next=NULL;
				prev_node->next=new_node;
			}
			//---
		}
		
		a=a->next;
	}
	*/
	return(OK);
}


int Compl(set a, set b, set *c)
{
	node *new_node, *prev_node, *pnodeb=b;
	bool found=false;
	
	*c=NULL;
	
	while(a->next!=NULL)
	{
		found=false;
		pnodeb=b;
		
		// Controllo della presenza di a->x in b
		while(pnodeb->next!=NULL && !found)
		{
			if(a->x==pnodeb->x)
			found=true;
			
			pnodeb=pnodeb->next;
		}
		//---
		
		// Se non e' presente in b ed e' il primo elemento di c, inserimento di x->a in c in testa
		if(!found && *c==NULL)
		{
			new_node=(node*)malloc(sizeof(node));
			if(new_node==NULL)
			return(ERROR3);
	
			new_node->x=a->x;
			new_node->next=NULL;
			*c=new_node;
		}
		//---
		else
		{
			// Se non e' presente in b e non e' il primo in c, inserimento di x->a in c in coda
			if(!found)
			{
				prev_node=new_node;
			
				new_node=(node*)malloc(sizeof(node));
				if(new_node==NULL)
				return(ERROR3);
		
				new_node->x=a->x;
				new_node->next=NULL;
				prev_node->next=new_node;
			}
			//---
		}
		
		a=a->next;
	}
	
	return(OK);
}
