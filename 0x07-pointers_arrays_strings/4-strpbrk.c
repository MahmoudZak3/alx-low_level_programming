#include "main.h"
/**
 * _strpbrk - code enter
 * @cxc: entering
 * @accept: entering
 * Return: 0 (Success) , else 1
 */
char *_strpbrk(char *cxc, char *accept)
{
		int k;

		while (*cxc)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*cxc == accept[k])
			return (cxc);
			}
		cxc++;
		}

	return ('\0');
}
