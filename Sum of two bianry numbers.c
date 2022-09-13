#include <stdio.h>
int main()
{
    int long b1,b2;
    int i=0,rem=0,sum[20];
    printf("Enter the first binary number:");
    scanf("%d",&b1);
    printf("Enter the second binary number:");
    scanf("%d",&b2);
    while(b1!=0||b2!=0)
    {
        sum[i++]=(b1%10+b2%10+rem)%2;
        rem=(b1%10+b2%10+rem)/2;
        b1=b1/10;
        b2=b2/10;
    }
    if(rem!=0)
        sum[i++]=rem;
        --i;
        printf("Sum of two binary numbers:");
    while(i>=0)
        printf("%d",sum[i--]);
        return 0;
}
