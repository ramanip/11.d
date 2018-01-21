#include<stdio.h> 
int main()
{
 int m1,m2,rem,i;
 printf("   Give the First number for the Range :   \n");
 scanf("%d",&m1);
 printf("   Give the Final number for the Range :   \n");           
scanf("%d",&m2);
printf("\n The Even numbers between %d and %d are ",m1,m2); 
for(i=f1; i<=f2; ++i)
{
rem = i % 2;
if(rem == 0)
printf("\n  %d",i);
}
