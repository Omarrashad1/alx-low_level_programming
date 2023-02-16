#include <stdio.h>
/**
 * main - print out sizes of data types in c
 * code by omar rashad
 * Return: 0
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("size of a char: %1u byte(s)\n", (unsigned long)sizeof(a));
printf("size of a int: %4u byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %4u byte(s)\n", (unsigned long)sizeof(c));
printf("size of a long long int: %8u byte(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %4u byte(s)\n", (unsigned long)sizeof(f));
}
