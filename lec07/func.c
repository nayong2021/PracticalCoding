#include "func.h"

#if FUNCTION_NEGATIVE == 1

int func1(int a)
{
	return a*10;
}

#else

int func1(int a)
{
	return DF(a+1) * 20;
}

#endif
