
typedef unsigned int counter;


//----------------------------------------------------------------------

int Get_counter(counter i)
{
	return(i);
}

//----------------------------------------------------------------------

counter Reset_counter(counter i)
{
	i=0;
	return(i);
}

counter Set_counter(int n, counter i)
{
	i=n;
	return(i);
}

counter Crea_counter()
{
	int i;
	i=Reset_counter(i);
	return(i);
}



//----------------------------------------------------------------------

bool IS_count_zero(counter i)
{
	if(i==0)
	return(true);
	else
	return(false);
}

bool IS_count_Greater(counter i, int n)
{
	if(i>n)
	return(true);
	else
	return(false);	
}

bool IS_count_Lower(counter i, int n)
{
	if(i<n)
	return(true);
	else
	return(false);	
}

bool IS_count_Eq(counter i, int n)
{
	if(i==n)
	return(true);
	else
	return(false);	
}

//----------------------------------------------------------------------

counter Inc_counter(counter i)
{
	return(i+1);
}

counter Dec_counter(counter i)
{
	return(i-1);
}	
















