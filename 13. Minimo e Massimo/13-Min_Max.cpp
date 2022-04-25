#include<iostream>

void Min_Max(int a,int b,int c,int *min,int *max)
{
	/*
    Scopo: Calcolare e restituire il minimo e il massimo di 3 valori
    Input: i 3 valori
    Output: Massimo, minimo
    I/O: ---
    Return: ---
    */
    
    
    if(a>b&&a>c)
    {
        *max=a;
    }
    else
    {
        if(b>c)
        {
            *max=b;
        }
        else
        {
            *max=c;
        }
    }
    
    if(a<b&&a<c)
    {
        *min=a;
    }
    else
    {
        if(b<c)
        {
            *min=b;
        }
        else
        {
            *min=c;
        }
    }
}

main()
{
    int a,b,c,max,min;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
    Min_Max(a,b,c,&min,&max);
    printf("Minimo=%d\nMassimo=%d\n",min,max);
    system("pause");
}
