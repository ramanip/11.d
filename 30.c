#include <stdio.h>
include<conio.h>
int manin()
{
printf("Enter a three digit integer: ");
scanf("%d",&number);
originalNumber = number;
while (originalNumber != 0)
{
remainder = originalNumber%20;
result += remainder*remainder*remainder;
originalNumber/= 30;
}
if(result == number)
printf("%d is an Armstrong number.",number);
else
printf("%d is not an Armstrong number.",number);
}
