#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @str: the string to capitilizes
 * Return: the string capitalized
 */

char *cap_string(char *str)
{
	int i = 0

	while (str[i])
	{

		while (!(str[i] >= 'a' && str[i] <= 'z')
				i++;
		if (str[i - 1] == ' ')
			str[i] = str[i] - 32;
		if (str[i - 1] == '\n')
			str[i] = str[i] - 32;
		if (str[i - 1] == ',')
			str[i] = str[i] - 32;
		if (str[i - 1] == '(')
			str[i] = str[i] - 32;
		if (str[i - 1] == ')')
			str[i] = str[i] - 32;
		if (str[i - 1] == '\t')
			str[i] = str[i] - 32;
		if (str[i - 1] == '.')
			str[i] = str[i] - 32;
		if (str[i - 1] == ';')
			str[i] = str[i] - 32;
		if (str[i - 1] == '!')
			str[i] = str[i] - 32;
		if (str[i - 1] == '?')
			str[i] = str[i] - 32;
		if (str[i - 1] == '{')
			str[i] = str[i] - 32;
		if (str[i - 1] == '}')
			str[i] = str[i] - 32;
		if (str[i - 1] == '"')
			str[i] = str[i] - 32;
		if (i == 0)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
