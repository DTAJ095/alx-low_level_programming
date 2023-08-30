#include "main.h"
int check_palindrome(char *s, int begin, int end, int pair);
int _strlen_recursion(char *s);

/**
 * _strlen_recursion - returns the lenght of a string
 * @s: the string
 *
 * Return: Nothing
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string
 *
 * Return: 1 if s is a palindrome or 0 if not
 */

int is_palindrome(char *s)
{
	int end;

	end = _strlen_recursion(s);
	if (end <= 1)
		return (1);
	return (check_palindrome(s, 0, end - 1, end % 2));
}

/**
 * check_palindrome - checks the palindrome
 * @s: the string
 * @begin: from left to right
 * @end: from right to left
 * @pair: int
 *
 * Return: 1 or 0
 */

int check_palindrome(char *s, int begin, int end, int pair)
{
	if ((begin == end && pair != 0) || (begin == end + 1 && pair == 0))
		return (1);
	else if (s[begin] != s[end])
		return (0);
	else
		return (check_palindrome(s, begin + 1, end - 1, pair));
}
