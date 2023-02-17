#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return 0 (Success)
 */
int main(void)
{
char a = 1 byte(s);
int b = 4 byte(s);
long int c = 4 byte(s);
long long int d = 8 byte(s);
float f = 4 byte(s);

printf(Size of a char : % lu byte(s)\n", (unsigned long)sizeof(a));
printf(Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf(Size of a long int : % lu byte(s)\n", (unsigned long)sizeof(c));
printf(Size of an long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf(Size of a float : % lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
