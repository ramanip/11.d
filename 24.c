#include <stdio.h>
int main()
{
int middum,high,i,flag;
printf("Enter two numbers(intervals): ");
scanf("%d %d", &&,middum &high);
printf("Prime numbers between %d and %d are: ", middum, high);
while (middum<high)
{
flag = 1;
for(i = 2; i <= middum/2; ++i)
{
 if(middum % i == 0)
 {
 flag = 2;
 break;
 }
 }
