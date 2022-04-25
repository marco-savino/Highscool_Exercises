
#include<iostream>
#define LEN 20
using namespace std;


void Stampa_Vet(int v[], int len)
{
	/*
		- Scopo: stampare un vettore
		- Input: vettore da stampare
		- Output: ---
		- I/O: ---
		- Return: ---
	*/
	int i;
	
	for(i=0; i<len; i++)
	{
		printf("%5d",v[i]);
	}
}

void Merge(int a[], int inf, int center, int sup) 
{
  int i, j, k;
  //vettore di appoggio 
  int b[LEN];
  i = inf;
  j = center+1;
  k = 0; // indice per il vettore di appoggio b
  
  //fusione delle 2 meta'
  while ((i<=center) && (j<=sup)) 
  {
    if (a[i] <= a[j]) 
    {
      b[k] = a[i];
      i++;
    } 
    else 
    {
      b[k] = a[j];
      j++;
    }
    k++;
  }
  
  //se i e' minore di center significa che alcuni elementi 
  //della prima meta' non sono stati inseriti nel vettore
  while (i<=center) 
  {
    //allora li aggiungo in coda al vettore
    b[k] = a[i]; 
    i++;
    k++;
  }
 
  //se j a' minore di right significa che alcuni elementi 
  //della seconda meta' non sono stati inseriti nel vettore
  while (j<=sup) 
  {
    //allora li aggiungo in coda al vettore
    b[k] = a[j];
    j++; 
    k++;
  }
 
  //alla fine copio il vettore di appoggio b nel vettore a 
  for (k=inf; k<=sup; k++)
  {
    a[k] = b[k-inf];
  }
}


void Merge_Sort(int a[], int inf, int sup)
{

  int center;
  //PASSO: se ci sono almeno di 2 elementi nel vettore  vado ad ordinare  
  //       ricorsivamente la prima e la seconda metà del vettore
  // (N.B: la BASE è l'else (vuoto) di questo if, cioè se non ho elementi ho un solo elemento 
  //       non faccio niente perchè a[] risulta già ordinato)
  if(inf<sup)
  {
     //divido il vettore in 2 parti
     center = (inf+sup)/2;
     //chiamo la funzione per la prima meta'
     Merge_Sort(a, inf, center);
    //chiamo la funzione di ordinamento per la seconda meta'
     Merge_Sort(a, center+1, sup);
    //chiamo la funzione per la fusione delle 2 meta' ordinate
     Merge(a, inf, center, sup);
  }
}


main() 
{
  //vettore da ordinare
  int vet[LEN];
  int i, nelem;
  
  cout<<endl<<"Quanti elementi vuoi inserire?: ";
 cin>>nelem;
 for(i=0; i<=(nelem-1); i++)
    cin>>vet[i];
  
  //chiamata alla funzione di ordinamento
  Merge_Sort(vet, 0, nelem-1);
  //visita del vettore
  cout<<endl<<"Il vettore ordinato e': "<<endl;
  for(i=0; i<nelem; i++)
  {
    cout<<vet[i];
    cout<<" ";
  }
  cout<<endl;

// legge carattere da tastiera
int nn;
cout<<endl<<"premi un numero per terminare"<<endl;
cin>>nn;
}

/*
main()
{
	int a[LEN], sup, inf=0;
	
	cout <<"\n\n Quanti elementi vuoi inserire nel vettore? \t";
	cin >> sup;
	for(int i=0; i<sup; i++)
	{
		cout <<"\n Inserisci il "<<i+1<<" elemento: \t";
		cin >> a[i];
	}
	cout <<"\n\n";
	Stampa_Vet(a, sup);
	
	cout<<"\n\n";
	system("pause");
		
	Merge_Sort(a, inf, sup-1);
	
	cout <<"\n\n\n\n Vettore Ordinato: \n\n";
	Stampa_Vet(a, sup);
	
	cout<<"\n\n\n\n";
	
	system("pause");

}
*/

/*
void Merge(int a[], int inf, int mid, int sup)
{
	int b[LEN], i=inf, i1=mid+1, i2=0;
	
	while(i<=mid && i1<=sup)
	{
		if(a[i]<=b[i1])
		{
			b[i2]=a[i];
			i++;
		}
		else
		{
			b[i2]=a[i1];
			i1++;
		}	
		i2++;
	}
	
	while(i1<=sup)
	{
		b[i2]=a[i1];
		i1++;
		i2++;
	}
	
	while(i<=mid)
	{
		b[i2]=a[i];
		i++;
		i2++;
	}
	
	for(i2=inf; i2<=sup; i2++)
	{
		a[i2]=b[i2-inf];
	}

}


void Merge_Sort(int a[], int inf, int sup)
{
	int mid;
	
	if(inf<sup)
	{
		mid=(sup+inf)/2;
		
		Merge_Sort(a, inf, mid);
		Merge_Sort(a, mid+1, sup);
		Merge(a, inf, mid, sup);
	}
}
*/
