#include<stdio.h>
int main()
{
    int num,reverse=0;
    printf("enter the number which you want to reverse :");
    scanf("%d",&num);
    while(num!=0)
    {
      reverse=reverse*10+num%10;
      num=num/10;

    }
    printf("the reverse of the number is %d",reverse);
    return 0;
}
