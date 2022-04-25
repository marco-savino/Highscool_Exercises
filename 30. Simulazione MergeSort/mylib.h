// --- LIBRERIA CON TUTTE LE FUNZIONI :3 ---


_________________________________________________________________________

// --- Merge Sort ---

void Merge(int a[], int inf, int center, int sup) 
{
  int i, j, k;
  //vettore di appoggio 
  int b[sup+1];
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

_________________________________________________________________________

// --- Ordinamento a Cicli Fissi ---

void Cicli_Fissi(int v[], int len)
{
	int c;

	for(int i=0; i<len; i++)
	{
		for(int i1=0; i1<len; i1++)
		{
			if(v[i]<v[i1])
			{
				c=v[i];
				v[i]=v[i1];
				v[i1]=c;
			}
		}
	}
}

_________________________________________________________________________

// --- Ricerca Binaria ---

bool Ricerca_Bin(int vet[], int x, int len)
{
	int down=0, up=len-1, mid;
	
	while(down<=up)
	{
		mid=(down+up)/2;
		if(x==vet[mid])
		return(true);	
		
		else
		{
			if(x<vet[mid])
			up=mid-1;
			else
			{
				if(x>vet[mid])
				down=mid+1;	
			}
		}
	}
	return(false);
}
