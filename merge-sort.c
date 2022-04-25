// Merge Sort
#include<stdio.h>
#include<limits.h>

void Merge();
void MergeSort();

void main()
{
  int vet[]={5,7,3,9,1,6,4,8,2,0};
  int i=0;
	
  printf("\n Helloooo");

  MergeSort(vet, 0, 10);

  for(i=0; i<10; i++)
    printf("\n %d",vet[i]);

  printf("\n\n");
}

// len di un vettore = sup+1
void MergeSort(int vet[], int inf, int sup)
{
  int mid=(sup-inf)/2;
  MergeSort(vet, inf, mid);
  MergeSort(vet, mid+1, sup);
  Merge(vet, inf, mid, sup);

  return;
}

void Merge(int vet[], int inf, int mid, int sup)
{
  int vet1[mid+1-inf+1], vet2[sup-mid+1];
  int i, i1=0, i2=0, len1, len2;
  
  len1=mid+1-inf;
  len2=sup-mid;

  for(i=0; i<len1; i++)
    vet1[i]=vet[inf+i];

  for(i=0; i<len2; i++)
    vet2[i]=vet[mid+i];

  vet1[len1+1]=INT_MAX;
  vet2[len2+1]=INT_MAX;

  for(i=inf; i<sup+1; i++)
  {
    if(vet1[i1]<=vet2[i2])
    {
      vet[i]=vet1[i1];
      i1++;
    }
    else
    {
      vet[i]=vet2[i2];
      i2++;
    }
  }

  return;

}
