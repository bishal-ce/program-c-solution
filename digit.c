#include<stdio.h>
int main()
{
    int num, sum=0;
    printf("enter the number whose  digits are more than 1\n");
    scanf("%d",&num);
    while (num!=0)
    {
        sum=sum+num%10;
        num=num/10;
    }
 printf("the sum of the digit is %d",sum);
 return 0;
}