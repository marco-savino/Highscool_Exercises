
#include<iostream>
#include"set_savino.h"

using namespace std;


void StampaSet(set s)
{
	node* pnode=s;
	
	while(pnode!=NULL)
	{
		cout<<"\t "<<pnode->x;
		pnode=pnode->next;
	}
}


main()
{
	int choice, n;
	char check;
	bool is;
	set s, s1, s2, pnode;
	
	
	CreateSet(&s);
	cout<<"\n\n Inserire gli elementi in s? y/n \t";
	cin>>check;
	if(check=='y')
	{
		cout<<"\n\n Digitare gli elementi. Inserire 0 per terminare \n";
		do
		{
			cin>>n;
			if(n==0)
			{
				cout<<"\n\n Vuoi terminare l'inserimento? Premere 'e' per farlo o un qualsiasi \n altro tasto per continuare \t";
				cin>>check;
				if(check!='e')
				{
					AppendElem(&s, n);
				}
			}
			else
			AppendElem(&s, n);
		}
		while(check!='e');	
	}
	
	
	CreateSet(&s1);
	cout<<"\n\n Inserire gli elementi in s1? y/n \t";
	cin>>check;
	if(check=='y')
	{
		cout<<"\n\n Digitare gli elementi. Inserire 0 per terminare \n";
		do
		{
			cin>>n;
			if(n==0)
			{
				cout<<"\n\n Vuoi terminare l'inserimento? Premere 'e' per farlo o un qualsiasi \n altro tasto per continuare \t";
				cin>>check;
				if(check!='e')
				{
					AppendElem(&s1, n);
				}
			}
			else
			AppendElem(&s1, n);
		}
		while(check!='e');	
	}
	
	CreateSet(&s2);
	
	do
	{
		cout<<"\n\n\n Seleziona un'operazione: \n\t 1- Union(set a, set b, set *c) \n\t 2- Inters(set a, set b, set *c) \n\t 3- Compl(set a, set b, set *c)\n\t 0- Esci dal Programma  \n\n\t";
		cin>>choice;
		if(choice!=0)
		{
			switch(choice)
			{
				case 1:
				{
					Union(s, s1, &s2);
					cout<<"\n";
					StampaSet(s);
					cout<<"\n";
					StampaSet(s1);
					cout<<"\n\n";
					StampaSet(s2);
					cout<<"\n\n\n";
				}
				break;
				
				case 2:
				{
					Inters(s, s1, &s2);
					cout<<"\n";
					StampaSet(s);
					cout<<"\n";
					StampaSet(s1);
					cout<<"\n\n";
					StampaSet(s2);
					cout<<"\n\n\n";
				}
				break;
				
				case 3:
				{
					Compl(s, s1, &s2);
					cout<<"\n";
					StampaSet(s);
					cout<<"\n";
					StampaSet(s1);
					cout<<"\n\n";
					StampaSet(s2);
					cout<<"\n\n\n";
				}
				break;
			}
		}
	}
	while(choice!=0);
	
}
