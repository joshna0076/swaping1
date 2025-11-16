#include<stdio.h>
void main()
{
    int a,b,temp;
    printf("enter value of a,b");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("after swaping a and b are %d %d",a,b);
}
