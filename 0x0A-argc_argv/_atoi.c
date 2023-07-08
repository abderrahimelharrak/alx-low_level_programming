#include "main.h"

/**
 * _atoi - Entry point
 * @s: input
 * Return: Always 0 (Success)
 */
int _atoi(char *s)
{
        int sg = 1, i = 0;
        unsigned int r = 0;

        while (!(s[i] <= '9' && s[i] >= '0' && s[i] != '\0'))
        {
                if (s[i] == '-')
                        sg *= -1;
                i++;
        }
        while (s[i] <= '9' && s[i] >= '0' && s[i] != '\0')
        {
                r = (r * 10) + (s[i] - '0');
                i++;
        }
        r *= sg;
        return (r);
}
