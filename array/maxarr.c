#include <stdio.h>
#include <math.h>

int main(void)
{
	char ach[80];
	int a;
	double da,dmax;

	gets(ach);
	a = scanf("%lg",&da);
	if (a != 1) return;
	dmax = da;
	while (1) {
		a = scanf("%lg",&da);
		if (a != 1) break;
		if (da > dmax) dmax = da;
		}
	printf("%.17g\n",dmax);
	return 0;
	}







