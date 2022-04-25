
#include<iostream>
#include<math.h>

using namespace std;


struct retta_esplicita
{
    float m;
    float q;
};
typedef struct retta_esplicita r_esp;


struct retta_implicicta
{
	float a;
    float b;
    float c;
};
typedef struct retta_implicicta r_imp;


struct p
{
    float x;
    float y;
};
typedef struct p point;




r_esp Crea_Retta_Esp()
{
    r_esp r;
    
    cout<<"Inserisci la m della retta\t";
    cin>>r.m;
    cout<<"Inserisci la q della retta\t";
    cin>>r.q;
    
    return(r);
}

r_imp Crea_Retta_Imp()
{
    r_imp r;
    
    cout<<"Inserisci la a della retta\t";
    cin>>r.a;
    cout<<"Inserisci la b della retta\t";
	cin>>r.b;
    cout<<"Inserisci la c della retta\t";
    cin>>r.c;
    
    return(r);
}
     
float Len_Seg(point a, point b)
{
    float d, diffx, diffy;
    
    diffx=(b.x)-(a.x);
	diffy=(b.y)-(a.y);
    d=sqrt(pow(diffx,2)+pow(diffy,2));
    
    return(d);
}
      
bool ARE_Parrarele_Esp(r_esp a, r_esp b)
{
    if(a.m==b.m)
    return(true);
    else
    return(false);
}
     
bool ARE_Parrarele_Imp(r_imp a, r_imp b)
{
    float ma, mb;
    
    ma=a.a*b.b;
    mb=b.a*a.b;
    
    if(ma==mb)
    return(true);
    else
    return(false);
}
     
bool ARE_Perpendicolari_Esp(r_esp a, r_esp b)
{
    if((a.m*b.m)==-1)
    return(true);
    else
    return(false);
}
     
bool ARE_Perpendiculari_Imp(r_imp a, r_imp b)
{
    float ma,mb;
    
    ma=a.a*b.a;
    mb=a.b*b.b;
    
    if((ma+mb)==0)
    return(true);
    else
    return(false);
}
     
float Dist_Punto_Retta_Esp(point p, r_esp r)
{
    float n, d, dist;
    
    n=p.y-((r.m*p.x)+r.q);
    d=(pow(r.m,2))+1;
    d=sqrt(d);
    dist=n/d;
    
	return(dist);
}
      
      
float Distanza_Punto_Retta_Imp(point p, r_imp r)
{
    float n, d, dist;
    
    n=(r.a*p.x)+(r.b*p.y)+r.c;
    d=pow(r.a,2)+pow(r.b,2);
    d=sqrt(d);
    dist=n/d;
    
    return(dist);
}
