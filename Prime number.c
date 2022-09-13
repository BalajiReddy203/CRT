#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2,n,i,flag=0;
	printf("Enter the n1 and n2 values");
	scanf("%d",&n);
	for(n=n1;n<n2;n++)
	{
		flag=0;
		for(i=2;i<n/2;i++)
		if(n%i==0)
		{
			flag=1;
			break;
		}
		if(flag==0)
		printf("%d\n",n);
		
		}
		getch();
}
