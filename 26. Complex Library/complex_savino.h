struct imm
{
	float pr;
	float pi;
};
typedef struct imm complex;

complex Crea_complex(float n, float n1)
{
	complex val;
	val.pr=n;
	val.pi=n1;
	return(val);
}

float GetReal(complex value)
{
	return(value.pr);
}
	
float GetImm(complex value)
{
	return(value.pi);
}

complex SetReal(float n, complex value)
{
	value.pr=n;
	return(value);
}
	
complex SetImm(float n, complex value)
{
	value.pi=n;
	return(value);
}

bool ISReal(complex value)
{
	if(value.pi==0)
	return(true);
	return(false);
}
	
complex RtoC(float n)
{
	complex value;
	value.pr=n;
	value.pi=0;
	return(value);
}
	
complex Som_complex(complex value, complex value1)
{
	complex ris;
	ris.pr=value.pr+value1.pr;
	ris.pi=value.pi+value1.pi;
	return(ris);
}

complex Diff_complex(complex value, complex value1)
{
	complex ris;
	ris.pr=value.pr-value1.pr;
	ris.pi=value.pi-value1.pi;
	return(ris);
}

complex Prod_complex(complex value, complex value1)
{
	complex ris;
	ris.pr=((value.pr*value1.pr)-(value.pi*value1.pi));
	ris.pi=((value.pi*value1.pr)+(value.pr*value1.pi));
	return(ris);
}
	
complex Coniugato(complex value)
{
	value.pi=value.pi*-1;
	return(value);
}
