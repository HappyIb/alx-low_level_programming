#include <stdio>
/**
 * main - A program that codes for the printing of the size of various computer types
 * Return 0
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int d;
	float f;
printf("size of a chart: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
