#include<iostream>
#include<math.h>
main()
{
      int kw_fine,kw_inizio,costo,costo_tot,kw_consumati;
      printf("questo programma calcola il costo della bolletta\n");
      printf("inserisci i kilowatt-ora iniziali\n\t");
      scanf("%d",&kw_inizio);    
                                 printf("inserisci i kilowatt-ora finali\n\t");
                                 scanf("%d",&kw_fine);
      kw_consumati=kw_fine-kw_inizio;
      costo=190;
      if(kw_consumati<7500)
      {
                           costo_tot=((kw_consumati/10)*45)+190;
                           printf("il costo della bolletta e' %d",costo_tot);
                           }
      else
      {
          if(kw_consumati<15000);
          {
                           costo_tot=((kw_consumati/10)*35)+190;
                           printf("il costo della bolletta e' %d",costo_tot);
                           }
          
          else
      {
          if(kw_consumati<15000);
          {
                           costo_tot=((kw_consumati/10)*35)+190;
                           printf("il costo della bolletta e' %d",costo_tot);
                           }
                           
                           }
                           }                    
      system("pause");
}
