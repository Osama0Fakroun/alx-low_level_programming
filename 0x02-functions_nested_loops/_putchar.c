#include <unistd.h>
#include "main.h>

/**
* _putchar - writes the charcter c to student
* @c: the character to print
*
* Return: On success1.
*         On error. -1 is returned, and error is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
