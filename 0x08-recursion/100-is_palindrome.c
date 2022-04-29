#include "main.h"

/**
 * _strlen_recursion - length of string
 * @s: string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}

/**
 * compare - compares head index and tail inde of string
 * @h1: head index
 * @t1: tail index
 * @s: string
 * Return: 1 if palindrome 0 if otherwise
 */
int compare(char *s, int h1, int t1)
{
	if (s[h1] == s[t1])
	{
		if (h1 == t1 || h1 == t1 + 1)
		{
			return (1);
		}
		return (compare(s, h1 + 1, t1 - 1));
	}
	return (0);
}

/**
 * is_palindrome - returns 1 if palindrome
 * @s: string
 * Return: 1 if string is palindrome and 0 if otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	/* check if string is empty*/
	if (*s == '\0')
	{
		return (1);
	}

	return (compare(s, 0, len - 1));
}
