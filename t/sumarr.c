#include <stdio.h>

int sumArray3(int a[3], int sum)
{
	sum = *a;
	a[3] = a[0]+a[1]+a[2];
	sum = a[3];
	fprintf(stdout, "%d : %lld %llx\n", sum, &sum, &sum);
	return a[3];	
}

int main()
{
	int a = 100;
	int b = 200;
	int c = 999;
	const int arr[4] = {100, 200, 300, 400};
	c = sumArray3(arr, b);
	fprintf(stdout, "%d : %lld %llx\n", b, &b, &b);
	fprintf(stdout, "%d : %lld %llx\n", arr, arr, arr);
	fprintf(stdout, "%d : %lld %llx\n", *arr, *arr, *arr);
	fprintf(stdout, "%d : %lld %llx\n", &arr, &arr, &arr);
	fprintf(stdout, "%d : %lld %llx\n", arr[2], &arr[2], &arr[2]);
	fprintf(stdout, "%d : %lld %llx\n", arr[3], &arr[3], &arr[3]);
	fprintf(stdout, "%d : %lld %llx\n", arr[4], &arr[4], &arr[4]);
}
