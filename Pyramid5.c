#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	printf("Enter the n value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}

Output:

1
22
333
4444
55555
