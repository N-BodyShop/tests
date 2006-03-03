#include <stdio.h>
#include <math.h>

int main(void)
{
	char ach[80];
	int a,n,i;
	double da;
	double *t;

	gets(ach);
	puts(ach);
	sscanf(ach,"%d",&n);
	t = (double *)malloc(n*sizeof(double));
	if (!t) return;
	for (i=0;i<n;++i) {
		a = scanf("%lg",&da);
		if (a != 1) break;
		t[i] = da*da;
		}
	for (i=0;i<n;++i) {
		a = scanf("%lg",&da);
		if (a != 1) break;
		t[i] += da*da;
		}
	for (i=0;i<n;++i) {
		a = scanf("%lg",&da);
		if (a != 1) break;
		t[i] += da*da;
		printf("%.17g\n",sqrt(t[i]));
		}
	return 0;
	}
