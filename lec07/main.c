#include <stdio.h>

#define FUNCTION_NEGATIVE 0
#include "func.h"

int main()
{
	printf("Func1 %d %d\n", func1(100), DF(10));
	printf("Func2 %d %d\n", func1(100), DF(10));
}
