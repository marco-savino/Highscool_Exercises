#include<iostream>
main()
{
int y;
printf("dato l'anno,inserito dall'utente,stabilire se esso e' bisestile oppure no\t");
scanf("%d",&y);
if((y%400==0)or(y%4==0 and y%100!=0))
{
printf("\n l'anno e' bisestile\n");
}
else
{
printf("\n l'anno non e' bisestile\n");
}
system("pause");




}

