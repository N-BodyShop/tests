#include <stdio.h>
#include <math.h>

int main(void)
{
	char ach[80];
	int a,cnt;
	double da,dsum;

	gets(ach);
	dsum = 0.0;
	cnt = 0;
	while (1) {
		a = scanf("%lg",&da);
		if (a != 1) break;
		dsum += da*da;
		++cnt;
		}
	if (cnt) printf("%.17g\n",sqrt(dsum/cnt));
	return 0;
	}







