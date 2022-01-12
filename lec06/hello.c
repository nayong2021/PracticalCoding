#include <stdio.h>

int sumArray3(int a[3])
{
	return a[0]+a[1]+a[2];
}

void add(int *a, int *b, int *c)
{
	*c = *a + *(a+1);
}

int main()
{
	const int a = 100;
	int b = 200;
	long long c = 999;
	fprintf(stdout, "%d : %lld %llx\n", a, &a, &a);
	fprintf(stdout, "%d : %lld %llx\n", b, &b, &b);
	add(&a, &b, &c);
	fprintf(stdout, "%d : %lld %llx\n", c, &c, &c);
	fprintf(stdout, "%d : %lld %llx\n", c, ((void *)(&c)) + 1, &c);
	fprintf(stdout, "%lld : %lld %llx\n", c, (&c) + 2, &c);
}
