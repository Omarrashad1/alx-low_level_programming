#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: write a program that prints all possiple
 * combination of digits
 *Numbers must be separated by ,, followed by a space
 * The three digits must be different
 * 012, 120, 102, 021, 201, 210 are considered
 * the same combination of the three digits 0, 1 and 2
 * Print only the smallest combination of three digits
 *Numbers should be printed in ascending order, with three digits
 *You can only use the putchar function
 *(every other function(printf, puts, etc…) is forbidden)
 *You can only use putchar six times maximum in your code
 *You are not allowed to use any variable of type char
 *All your code should be in the main function
 * Return : 0
*/
    int main(void)
{
int c;
int d = 0;
while (d < 10)
{
c = 0;
while (c < 10)
{
if (d != c && d < c)
{
putchar('0' + d);
putchar('0' + c);
if (c + d != 17)
{
putchar(',');
putchar(' ');
}
}
c++;
}
d++;
}
putchar('\n');
return (0);
}
