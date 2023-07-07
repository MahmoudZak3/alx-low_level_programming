#include "main.h"
/**
 * _strspn - code enter
 * @cxc: entering
 * @accept: entering
 * Return:  0 (Success) , else 1
 */
unsigned int _strspn(char *cxc, char *accept)
{
	unsigned int mm = 0;
	int hh;

	while (*cxc)
	{
		for (hh = 0; accept[hh]; hh++)
		{
			if (*cxc == accept[hh])
			{
				mm++;
				break;
			}
			else if (accept[hh + 1] == '\0')
				return (mm);
		}
		cxc++;
	}
	return (mm);
}
