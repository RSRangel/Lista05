#include <stdio.h>
#include <conio.h>

int *ptrint()
{
	int i;
	return (&i);
}

void main()
{
	int *p;
	p=ptrint();
	*p=999;
	printf(*p);
}
	
