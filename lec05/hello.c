#include <stdio.h>

int main()
{
	signed int siA;
	unsigned int unA;
	signed int siSum;
	unsigned int unSum;

	signed short shortSum;
	unsigned short unshortSum;
	fscanf(stdin, "%d", &siA);
	fprintf(stdout, "Signed Integer :  %d\n", siA);
	unA = siA;
	fprintf(stdout, "Unsigned Integer :  %u\n", unA);
	fprintf(stdout, "Unsigned Integer %%d:  %d\n", unA);
	fprintf(stdout, "Signed Integer %%u:  %u\n", siA);

	siSum = siA + (signed int)unA;
	unSum = (unsigned int) siA + unA;
	fprintf(stdout, "siSum %%d %d\n", siSum);
	fprintf(stdout, "siSum %%u %u\n", siSum);
	fprintf(stdout, "unSum %%d %d\n", unSum);
	fprintf(stdout, "unSum %%u %u\n", unSum);
	
	shortSum = siA + unA;
	unshortSum = siA + unA;
	fprintf(stdout, "shortSum %%h %hd\n", shortSum);
	fprintf(stdout, "shortSum %%uh %hu\n", shortSum);
	fprintf(stdout, "unshortSum %%h %hd\n", unshortSum);
	fprintf(stdout, "unshortSum %%uh %hu\n", unshortSum);

	shortSum = siA + unA;
	unshortSum = siA + unA;
	fprintf(stdout, "shortSum %%h %hd\n", shortSum);
	fprintf(stdout, "shortSum %%uh %hu\n", shortSum);
	fprintf(stdout, "unshortSum %%h %hd\n", unshortSum);
	fprintf(stdout, "unshortSum %%uh %hu\n", unshortSum);
	return 0;
}
