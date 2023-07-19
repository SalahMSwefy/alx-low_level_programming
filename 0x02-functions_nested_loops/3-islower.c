#include "main.h"
/*_islower - check if c is lowercase or not
 *Return: return 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
