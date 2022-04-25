
#include<math.h>

struct p
{
	float x;
	float y;
};
typedef struct p point;


// --- Selettori ---

float GetX(point p)
{
	return(p.x);
}

float GetY(point p)
{
	return(p.y);
}


// --- Modificatori ---

void SetPoint(point *p, float x1, float y1)
{
	p->x=x1;
	p->y=y1;
	return;
}


// --- Predicati ---

bool Is_Point_0(point p)
{
	if(p.x==0 && p.y==0)
	return(true);
	else
	return(false);
}


char Spot_Point(point p)
{
	if(Is_Point_0(p))
	return('o'); //Origine
	if(p.x==0)
	return('y');
	if(p.y==0)
	return('x');
	
	// N. del quadrante in cui si trova
	if(p.x>0 && p.y>0)
	return('1');
	if(p.x>0 && p.y<0)
	return('2');
	if(p.x<0 && p.y<0)
	return('3');
	if(p.x<0 && p.y>0)
	return('4');
}


// --- Op. Specifiche ---

float Distanza_Due_Punti(point a, point b)
{
	float d;
	d=pow(b.x-a.x, 2)+pow(b.y-a.y, 2);
	d=sqrt(d);
	return(d);
}

point Punto_Medio(point a, point b)
{
	point m;
	
	m.x=(a.x+b.x)/2;
	m.y=(a.y+b.y)/2;
	return(m);
}


// --- Costruttori ---

void Crea_Punto1(point *p)
{
	p->x=0;
	p->y=0;
	return;
}

void Crea_Punto2(point *p, float x1, float y1)
{
	SetPoint(p, x1, y1);
	return;
}
	
	








