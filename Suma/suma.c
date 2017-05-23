#include <stdio.h>

int main ()
{
	int a, b;
	scanf ("%d%d",&a,&b);
	if ((a >= -1000 && a <= 1000) && (b >= -1000 && b <= 1000))
		printf("%d\n", (a+b));
	else
		return 0;
	return 0;
}