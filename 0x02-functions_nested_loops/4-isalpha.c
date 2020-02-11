#include "holberton.h"

/**
  * _isalpha - checks for upper case char
  *  ------------------
  *
  *  @c: takes an int ( ASCII code characters)
  *
  *  Return: return 1 if uppercase OR 0 if not
  *
 **/

int _isalpha(int c)
{

	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
	{
		return (1);
	} return (0);
}
