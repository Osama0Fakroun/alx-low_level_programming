#include "main.h"
/**
*_islower - character is lower
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
