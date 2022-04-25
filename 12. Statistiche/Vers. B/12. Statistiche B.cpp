#include<iostream>
#define MAX 100

void Init(int v[],int *len)
{
	/*
    Scopo:Far inserire i valori all'utente
    Input: vettore, puntatore alla lunghezza del vettore
    Output: Numero di valori, i valori
    I/O: ---
    Return: ---
    */
    
    int i;
    printf("Numero elementi:");
    scanf("%d",&*len);
    for(i=0;i<*len;i++)
    {
        printf("valore %d:",i);
        scanf("%d",&v[i]);
    }
}

void Process(int v[],int len,int *max,int *min,int *med,int *num_mode,int mode[])
{
    /*
	Scopo: Calcolare e restituire varie informazioni sul vettore ricevuto
    Inpunt: Vettore, lunghezza
    Output: Massimo, minimo, media, numero mode, mode
    I/O: ---
    Return: ---
    */
    
    int i;
    *max=v[0];
    for(i=0;i<len;i++)
    {
        if(v[i]>*max)
        {
            *max=v[i];
        }
    }
    *min=v[0];
    for(i=0;i<len;i++)
    {
        if(v[i]<*min)
        {
            *min=v[i];
        }
    }
    *med=0;
    for(i=0;i<len;i++)
    {
        *med=*med+v[i];
    }
    *med=*med/len;
    
    int j;
    int maxx=0,moda;
    for(i=0;i<len-1;i++)
    {
        moda=0;
        for(j=i+1;j<len;j++)
        {
            if(v[i]==v[j])
            {
                moda++;
            }
        }
        if( (moda>maxx) && (moda!=0) )
        {
            *num_mode=0;
            maxx=moda;
            mode[*num_mode]=v[i];
            *num_mode=*num_mode+1;
        }
        else
        {
            if (moda==maxx)
            {
                mode[*num_mode] = v[i];
                *num_mode=*num_mode+1;
            }
        }
    }

    return;
}

main()
{
    int v[MAX],len=0,i;
    int max,min,mod,med,mode[MAX],num_mode=0;
    Init(v,&len);
    system("cls");
    for(int i=0;i<len;i++)
    {
        printf("%d\n",v[i]);
    }
    Process(v,len,&max,&min,&med,&num_mode,mode);
    printf("Massimo = %d\nMinimo = %d\nMedia = %d\n",max,min,med);

    int valori=1;
    for(i=0;i<len;i++)
    {
        if(v[i]==mode[i])
            valori++;
    }
    if (valori==len)
        printf("Nessuna moda");
    else
    {
        printf("Moda= ");
        for(i=0;i<num_mode;i++)
            printf("%d ",mode[i]);
    }

    printf("\n");
    system("pause");
}
