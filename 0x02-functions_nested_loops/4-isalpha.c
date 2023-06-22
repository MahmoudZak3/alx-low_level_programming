#include "main.h"

/**
 * _isalpha - checks for alpha chars
 * @t:  char for check
 * Return:  if t is  letter 1 , 0 else .
 */
int _isalpha(int t)
{
	return ((t >= 'a' && t <= 'z') || (t >= 'A' && t <= 'Z'));
}
