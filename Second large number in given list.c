#include<stdio.h>
int main()
{
int num,rem,Large=0,Slarge=0;
printf("Enter the Number :");
scanf("%d",&num);
while(num>0)
{
     rem=num%10;
if(Large<rem)
 {
        Slarge=Large;
       Large=rem;
 }
 else if(rem>=Slarge)
        Slarge=rem;
        num=num/10;
    }
printf("The Second Largest Digit is %d",Slarge);
return 0;
}
