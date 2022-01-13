#include <stdio.h>

void add(int *a, int *b, int *c)
{
	*c =  *a + *b;
}
void sub(int *a, int *b, int *c)
{
	*c =  *a - *b;
}
void mul(int *a, int *b, int *c)
{
	*c =  *a * *b;
}
void div(int *a, int *b, int *c)
{
	*c =  *a / *b;
}

int main()
{
	int a = 100;
	int b = 200;
	int c = 999;
	void (*f[4])(int *, int *, int ) = {add,sub,mul,div};
	fprintf(stdout, "a,b,c:%d %d %d\n", a, b, c); 
	f[2](&a,&b,&c); 
	fprintf(stdout, "a,b,c:%d %d %d\n", a, b, c); 
}

