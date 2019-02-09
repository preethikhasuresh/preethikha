#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	if(n==0)
	{
		printf("zero");
	}
	else if(n<0)
	{
		printf("Negative");
	}
	else
	{
		printf("Positive");
	}
	return 0;
}


