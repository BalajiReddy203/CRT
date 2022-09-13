#include<stdio.h>
#include<conio.h>
int main()
{
	int s,i,j,k;
	printf("Enter the s value");
	scanf("%d",&s);
	for(i=1;i<=s;i++)
	{
		for(k=0;k>=i;k--)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}

Output:

*
* *
* * *
* * * *
* * * * *
