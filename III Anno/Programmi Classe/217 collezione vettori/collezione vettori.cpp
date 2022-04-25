//Dare in input un vettore di 30 elementi (float), dare in output la quantità di numeri minori di 15.3;
//Dare in input un vettore di tot elementi (float), dare in output la quantità di numeri minori di x;

#include<iostream>
main()
{ float a[30],i,n,nc;
  int cont_num=0,cont_min=0,cont;
  for(cont=0;cont<=30;cont++)
{
  printf("inserisci il %d elemento\n",cont_num);
      scanf("%f",&i);
 cont_num++;
           if(i<15.3)
           {
                    cont_min++;
                    }
      }
  cont_min=0;
  cont_num=0;
  i=0;
  printf("quanti elementi vuoi inserire adesso?\n");
  scanf("%f",&i);
  printf("qual'e' il numero di confronto?\n");
  scanf("%f",&nc);
  for(cont=0;cont<=i;cont++)
  {
   printf("inserisci il %d elemento\n",cont_num);                         
       scanf("%f",&n);                   
           cont_num++;
           if(n<nc)
           {
                  cont_min++; 
                   }                 
                            }  
    printf("la quantita' di numeri minori di 15.3 e' %d",cont_min);
    printf("la quantita' di numeri minori di %f e' %f",nc,n);
    system("pause");  
      }
