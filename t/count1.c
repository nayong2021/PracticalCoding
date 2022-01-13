#include <stdio.h>
#define VALUE_ONE 1

// Count number of 1 (binary)
int count_one(unsigned int a)
{
	int static numCalls = 0;
	int count = 0;
	while (a)
	{
		count += a & VALUE_ONE;
		a >>= VALUE_ONE;
	}
	numCalls++;
	fprintf(stderr, "Call : %d\n", numCalls);
	return count;
}


int main()
{
	int i;
	int in_a;
	fscanf(stdin, "%u", &in_a);
	fprintf(stdout, "%u \t : ", in_a);
	for (i = 31; i >= 0; i--)
	{
		fprintf(stdout, "%d", in_a >> i & 1);
		if (i % 4 == 0)
			fprintf(stdout, " ");
	}
	count_one(in_a);
	count_one(in_a);
	count_one(in_a);
	count_one(in_a);
	fprintf(stdout, "\n");
	fprintf(stdout, "count : %d\n", count_one(in_a));
	return 0;
}
