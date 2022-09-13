#include<stdio.h>
#include<conio.h>
int main()
{
	int s,r,count,c;
	printf("Enter the s value");
	scanf("%d",&s);
	for(r=1;r<=s;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("%4d",count++);
		}
		printf("\n");
	}
	getch();
}

Output:

27
28 29
30 31 32
33 34 35 36
37 38 39 40 41
