#include<stdio.h>
#include<conio.h>
int main()
{
	int n,sum=0,temp,rem;
	printf("Enter the number");
	scanf("%d",&n);
	temp=n;
	while(temp>0)
	{
		rem=temp%10;
		sum=sum+rem;
		temp=temp/10;
	}
	printf("%d",sum);
}


Output:
1+2+3+4
10
