
//dato un numero N stampare i valori pari da 0 ad N e sommarli in maniera alternata.:.:.:.:.:.:.:.:.:.:.:.:.:.:.:.:.:.:.:.:.

#include<iostream>

#include<math.h>

main()

{

  int n,cont,somm,cont_somm;

      printf("quante volte vuoi sommare i numeri pari?");    

      scanf("%d",&n);

      cont=0;

      somm=0;
if(n>0)
{
      while(cont<n)

      {

                    cont++;
                    if(cont%2!=0)

      {

      cont++;

      printf("%d\t",cont);

                    }
        
else

{

printf("t%d\t",cont);
}
}
}
 else
      {n=n*-1;
      while(cont<n)

      {

                    cont++;

                    if(cont%2!=0)

      {

      cont++;

      printf("-%d\t",cont);

                    }
        
else

{

printf("-%d\t",cont);
}
}
}

                   

system("pause");
}














             
