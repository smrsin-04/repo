#include <stdio.h>

int main() 

{
   int i;
   double f=1,n;
	printf("enter the no\n");
	scanf("%lf",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("%lf",f);
	return 0;
}

