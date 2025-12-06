/*program to print the roots of the quadratic equation 
if they are real and distint and print error if the roots are imaginary*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    printf("enter the a ,b and c of the quadratic equation\n");
    scanf("%d%d%d",&a,&b,&c);
    d=(pow(b,2)-4*a*c);
    if(d<0)
    {
        printf("error");
    }
    else if(d>0)
    {
       printf("the root are real and distint\n");
       int x1=(-b-sqrt(d)/2*a);
       int x2=(-b+sqrt(d)/2*a);
       printf("the roots are x1=%d\n and x2=%d",x1,x2); 
    }
    else {
        printf("the value for a,b,c are invalid");

    }
    return 0;
}