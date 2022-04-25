#include <stdlib.h>
#include <stdio.h>


typedef int info_t;

struct s1
{
	info_t info;
	struct s1 *next;
};
typedef struct s1 node;
typedef node* sequence;




int Crea_Seq(sequence *s)
{
	// 0 --> ok
	
	*s=NULL;
	return(0);
}


int Get_Elem_Pos(sequence s, info_t *x, int pos)
{
	// 0 --> ok
	// 1 --> pos<0 || pos>lunghezza
	// 2 --> seq vuota (s=NULL)
	
	node *pnode=s;
	int i=0;
	
	if(s==NULL)
	return(2);
	if(pos<0)
	return(1);
	
	while(pnode->next!=NULL && i<pos)
	{
		pnode=pnode->next;
		i++;
	}
	if(pnode->next==NULL && i<pos)
	return(1);

	*x=pnode->info;
	return(0);
}


int Set_Elem_Pos(sequence *s, info_t x, int pos)
{
	// 0 --> ok
	// 1 --> pos<0 || pos>lunghezza sequence
	// 2 --> seq vuota (s=NULL)
	
	node *pnode=*s;
	int i=0;

	if(*s==NULL)
	return(2);
	if(pos<0)
	return(1);
	
	while(pnode->next!=NULL && i<pos)
	{
		pnode=pnode->next;
		i++;
	}
	if(pnode->next==NULL && i<pos)
	return(1);
	
	pnode->info=x;
	return(0);
}


bool IS_Vuota(sequence s)
{
	if(s==NULL)
	return(true);
	else
	return(false);
}


int Insert_Seq(sequence *s, info_t x, int pos)
{
	// 0 --> ok
	// 1 --> pos<0 
	// 1 --> pos>lunghezza sequence
	// 3 --> full heap
	
	node *new_node=*s, *prev_node;
	int i=0;
	
	if(pos<0)
	return(1);
	
	if(pos==0)
	{
		new_node=(node*)malloc(sizeof(node));
		if(new_node==NULL)
		return(3);
		
		new_node->info=x;
		new_node->next=*s; 
		*s=new_node;
		
		return(0);
	}
	else
	{	
		while(new_node->next!=NULL && i<pos)
		{
			if(i==pos-1)
			prev_node=new_node;
			
			new_node=new_node->next;	
			i++;
		}
		if(new_node->next==NULL && i<pos-1)
		return(1);
		
		/*
		for(int i=0; i<pos; i++)
		{
			if(new_node==NULL && i<pos)
			return(1);
			
			if(i==pos-1)
			prev_node=new_node;
			
			new_node=new_node->next;	
		}
		*/
		
		new_node=(node*)malloc(sizeof(node));
		if(new_node==NULL)
		return(3);
		
		new_node->info=x;
		new_node->next=prev_node->next;
		prev_node->next=new_node;
		
		return(0);
	}
}


int Append(sequence *s, info_t x)
{
	// 0 --> ok
	// 3 --> full heap
	
	node *new_node=*s, *last_node;
	int i=0;
	
	if(*s==NULL)
	{
		new_node=(node*)malloc(sizeof(node));
		if(new_node==NULL)
		return(3);
		
		new_node->info=x;
		new_node->next=NULL; 
		*s=new_node;
		
		return(0);
	}
	else
	{
		while(new_node->next!=NULL)
		{			
			new_node=new_node->next;
		}
		last_node=new_node;

		new_node=(node*)malloc(sizeof(node));
		if(new_node==NULL)
		return(3);
		
		new_node->info=x;
		new_node->next=NULL;
		last_node->next=new_node;
		
		return(0);
	}
}


int Delete_Seq(sequence *s, int pos)
{
	// 0 --> ok
	// 1 --> pos<0 
	// 1 --> pos>lunghezza sequence
	
	node *pnode=*s, *prev_node;
	int i=0;
	
	if(pos<0)
	return(1);
	if(*s==NULL)
	return(1);
	
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
		return(1);
		
		/*
		for(int i=0; i<pos; i++)
		{
			if(i==pos-1)
			prev_node=pnode;
		
			pnode=pnode->next;
		}
		if(pnode==NULL)
		return(1);
		*/
		
		prev_node->next=pnode->next;
		free(pnode);
	}

	return(0);	
}


int Len_Seq(sequence s)
{
	// 0 --> ok
	
	node *pnode=s;
	int lenght=0;
	
	while(pnode!=NULL)
	{
		lenght++;
		pnode=pnode->next;
	}
	return(lenght);
}


bool Find_Seq(sequence s, info_t x)
{	
	node *pnode=s;

	while(pnode!=NULL)
	{
		if(pnode->info==x)
		return(true);
		
		pnode=pnode->next;
	}
	return(false);
}



