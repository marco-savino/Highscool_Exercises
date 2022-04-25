/*
while(fscanf(fp, "%c", &ch)!=EOF)
{
    ---
}
*/

#include<stdio.h>
#include<iostream>
#define LIMIT 30

main()
{
      FILE *pf;
      int n, i=0;
      float med=0; 
      
                
      pf=fopen("Elenco Voti.txt", "r");
      
      while(fscanf(pf, "%d", &n)!=EOF)
      {
             med=med+n;   
             i++;                 
      }
      fclose(pf);
      
      med=med/i;
      
      printf("\n %.2f \n\n\n",med);
      
      system("pause");
}
      
      
      
      
