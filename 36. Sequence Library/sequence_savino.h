#include <stdlib.h>
#include <stdio.h>

#define OK 0
#define ERROR1 -1
#define ERROR2 -2


typedef int info_t;

struct s1
{
	info_t info;
	struct s1 *next;
};
typedef struct s1 node;
typedef node* sequence;




void CreaSeq(sequence *s)
{
	*s=NULL;
}


int GetElemPos(sequence s, int pos, info_t *x)
{
	
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
	
	*x=pnode->info;
	return(OK);
}


int SetElemPos(sequence *s, int pos, info_t x)
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
	
	pnode->info=x;
	return(OK);
}


bool IsEmpty(sequence s)
{
	if(s==NULL)
	return(true);
	else
	return(false);
}


int Insert_Seq(sequence *s, info_t x, int pos)
{
	node *new_node=*s, *prev_node;
	int i=0;
	
	if(pos<0)
	return(ERROR1);
	
	if(pos==0)
	{
		new_node=(node*)malloc(sizeof(node));
		if(new_node==NULL)
		return(ERROR2);
		
		new_node->info=x;
		new_node->next=*s; 
		*s=new_node;
		
		return(OK);
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
		
		new_node=(node*)malloc(sizeof(node));
		if(new_node==NULL)
		return(ERROR2);
		
		new_node->info=x;
		new_node->next=prev_node->next;
		prev_node->next=new_node;
		
		return(OK);
	}
}


int Append(sequence *s, info_t x)
{
	
	node *new_node=*s, *last_node;
	int i=0;
	
	if(*s==NULL)
	{
		new_node=(node*)malloc(sizeof(node));
		if(new_node==NULL)
		return(ERROR1);
		
		new_node->info=x;
		new_node->next=NULL; 
		*s=new_node;
		
		return(OK);
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
		return(ERROR1);
		
		new_node->info=x;
		new_node->next=NULL;
		last_node->next=new_node;
		
		return(OK);
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
	return(ERROR1);
	if(*s==NULL)
	return(ERROR2);	
	
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


int Len_Seq(sequence s)
{	
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



