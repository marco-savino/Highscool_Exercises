#include<iostream>

#define LIMIT 100

void Stampa_Vet(float v[], int len)
{
	/*
  Scopo: stampare il vettore
  Input: vettore, lunghezza
  Output: ---
  I/O: ---
  return: ---
*/ 
	
	int i;
	
	for(i=0; i<len; i++)
    {
        if(i%5==0)
        printf("\n\n");
        printf("\t %.2f",v[i]);             
    }
    printf("\n\n\n\n");
}

bool Stat(float v[], int len, float *pmax, float *pmin, float *pmed, float *pmod)
{
/*
  Scopo: calcolare il massimo, il minimo, la media e la moda dei valori del vettore
  Input: vettore, lunghezza
  Output: massimo, minimo, media e moda
  I/O: ---
  return: true se e' andata bene, false se il vettore e' vuoto
*/ 
   int i=0, i1=0, cont=0, vcont[len], contmod=0, somma=0;
   float l=len;

   if(len==0)
   return(true);
   
   *pmax=v[0];
   *pmin=v[0];
   
   for(i=0; i<len; i++)
   {
        if(*pmax<v[i])
        *pmax=v[i];
            
        if(*pmin>v[i])
        *pmin=v[i];
            
        somma=somma+v[i];   
			
		vcont[i]=0;
   		for(i1=0; i1<len; i1++)
        {
        	if(v[i]==v[i1])
            vcont[i]++;
        }
        if(vcont[i]>cont)
        {
            *pmod=v[i];
            cont=vcont[i];
		}               
   }
  
   *pmed=somma/l;
   
   return(false);
}

main()
{
      float v[LIMIT], med, max, min, mod;
	  int len, i;
	  
      
      printf("\n\n Digita quanti valori desideri nel vettore :) \t");
      scanf("%d",&len);
      
      for(i=0; i<len; i++)
      {
      		printf("\n inserisci il %d^ valore: \t",i+1);
			scanf("%f",&v[i]);	
      }
      
      Stampa_Vet(v, len);
      system("pause");
      
      if(Stat(v, len, &max, &min, &med, &mod))
      printf("\n Non si puo' fare nulla, il vettore e' vuoto! D: \n\n\n");
      else
      printf("\n\t Il valore massimo e': %.2f \n\t Il valore minimo e': %.2f \n\t La media e': %.2f \n\t La moda e': %.2f \n\n\n\n",max,min,med,mod);
      
      system("pause");
}
      
      
      

