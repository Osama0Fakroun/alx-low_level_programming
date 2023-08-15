#include "main.h"

/**
* main - check the code.
* _islower - function to check if
*_islower character is lower
*
*@c: check input of functtiom
*
* Return: Always 1 if `c` is lower
* othor wise always 0 (Success)
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
return (0);
}
