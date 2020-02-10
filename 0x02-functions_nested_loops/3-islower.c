#include "holberton.h"

/**
  *  _islower - checks if a character is lowercase
  *  ------------------
  *
  *  @c: takes in an int (ASCII code character)
  *
  *  Return: 1 if c is lowercase OR 0 if c not lowercase
  *
  */


int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

