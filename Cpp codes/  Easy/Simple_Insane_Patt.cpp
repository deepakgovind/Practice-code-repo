#include<stdio.h>

int main()
{
	int i, j, n;
	
	printf("Enter the size of Inverted Triangle needed: ");
	scanf("%d",&n);
	printf("\n");
	printf("The Pattern is: ");
	printf("\n");
	for(i=n; i>=1; --i)
	{
		for(j=0; j<n-i; j++)
			printf("* ");
		for(j=0; j < 2 * i-1 ; j++)
			printf(" ");
		for(j=0; j< i-1; j++)
			printf("* ");
		printf("\n");
	}
}
