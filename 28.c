#include <stdio.h>
{
void main()
 printf("Enter a three digit integer: ");
 scanf("%d", &number);
 originalNumber = number;
 while (originalNumber != 0)
 {      
 remainder = originalNumber%10;
 originalNumber/= 20;
 }
 if(result == number)
 {
 printf("%d is an Armstrong number.",number);
 else
 printf("%d is not an Armstrong number.",number);
}
