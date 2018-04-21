/*求和 s = 1! + 2! + 3! + 4! + 5! */

#include <stdio.h>

int main()
{
	int i, n = 1, s = 0;
	for(i = 1; i <= 5; i++)
	{
		n = n * i;
		s = s + n;
	}
	printf("s = %d\n", s);
	return 0;
}
		
