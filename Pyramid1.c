#include<stdio.h>
#include<conio.h>
int main()
{
	int s,r,c;
	printf("Enter the value");
	scanf("%d",&s);
	for(r=1;r<=s;r++)
	{
		for(c=1;c<=r;c++)
        {
        	printf("%4d",r);
        	
		}
		printf("\n");		
	}
	getch();
}

output:
1 
2 2
3 3 3
4 4 4 4
5 5 5 5 5
