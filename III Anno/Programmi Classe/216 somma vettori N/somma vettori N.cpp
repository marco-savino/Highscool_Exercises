#include<iostream>
main()
{
      int a[100],i,somm=0,n,max,min;
      float med;
      printf("quanti elementi vuoi inserire?\n");
      scanf("%d",&n);
                     while(i>100)
                     {
                                 printf("reinserisci il vettore\n");
                                 scanf("%d",&n);
                                 }
      min=n;
      for(i=0;i<n;i++)
      {
                        printf("inserisci l'elemento\n");
                        scanf("%d",&a[i]);
                        somm=somm+a[i];
                        max=a[i];
                                 if(max<a[i])
                                 {
                                             max=a[i];
                                             }
                                 if(min>a[i])
                                 {
                                             min=a[i];
                                             }
                        }
                        med=somm/n;
                        printf("la somma e' %d\nla media e' %f\n",somm,med);
                        printf("il valore massimo e' %d\n",max);
                        printf("il valore minimo e' %d\n",min);    
      system("pause");
      
      
      
      }
