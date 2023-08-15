#include "main.h"
/**
* print_last_digit - check the code
* @n: input
* Return: Always 0.
*/
int print_last_digit(int n)
{
int lastDigit;
if (n < 0)
last Digit = -1 * (n % 10);
else
lastDigit = n % 10;
_putchar(lastDigit + '0');
return (lastDigit);
}
