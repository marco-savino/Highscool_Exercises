#include<iostream>
#include<stdio.h>

#define STR 30

main()
{
      FILE *pf;
      char student[STR];
      int i, len=0, age, max=-1, min=1000;
      float med=0;
      
      pf=fopen("Elenco.txt","w");
      
      printf("\n\n Elencare i nomi e le eta' degli studenti; digitare # quando si termina :) \n\n");
      
      do
      {
          printf("\n\n Inserisci il nome del %d^ studente: \t",len+1);
          gets(student);
          fprintf(pf, "\n %s", student);
          if(student[0]!='#')
          {
               printf("\n Inserisci l'eta' del %d^ studente: \t",len+1);
               scanf("%d",&age);
               fprintf(pf, "\t %d \n", age);
               
               if(max<age)
               max=age;
               if(min>age)
               min=age;
               med=med+age;
               len++;     
          }  
          fflush(stdin);
      }
      while(student[0]!='#');
      
      med=med/len;
      
      fprintf(pf, "\n\n L'eta' massima e': \t %d \n", max);
      fprintf(pf, "\n L'eta' minima e': \t %d \n", min);
      fprintf(pf, "\n L'eta' media e': \t %.2f \n\n\n", med);
      
      fclose(pf);
      system("pause");
}
      
      
      
      
      
      
      
