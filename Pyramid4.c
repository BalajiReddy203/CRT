#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	printf("Enter the n value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}
Output:
11111
2222
333
44
5
