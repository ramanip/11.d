#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,temp;
    printf("before swapping two numbers",a,b);
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping two numbers %d %d",a,b);
}
