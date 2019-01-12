#include"calc.h"

int add(int i, int j)
{
	return i+j;
}

int minus(int i, int j)
{
	return i-j;
}

int multiply(int i, int j)
{
	return i*j;
}

int divide(int i, int j)
{
	if(j!=0)
	{
		return i/j;
	}	
	return 0;
}
