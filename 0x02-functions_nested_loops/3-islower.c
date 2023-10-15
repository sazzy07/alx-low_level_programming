#include "main.h"
/**
 * _islower - entry point
 * Description: function that checks for lowercase character
 * @c:character to check if it islowercase
 * Return: 1-if lowercase, 0-if not
 */
int _islower(int x)
{
	if (x >= 'a' && x <= 'z')
	{
		return (1);
	}
		else
		{
			return (0);
	}
}
