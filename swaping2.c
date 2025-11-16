#include<stdio.h>
void main()
{
    int a,b;
    printf("enter a value a,b");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swaping a and b values are%d\t%d\n",a,b);
}
