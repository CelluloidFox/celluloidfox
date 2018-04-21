/*求2+4+6+...+100的和*/

#include <stdio.h>

int main()
{
	int a, n = 1, s = 0;
	while(a < 100)
	{
		a = 2 * n;
		n++;
		s = s + a;
	}
	printf("s = %d\n", s);
	return 0;
}

/*有个简单的方法，就是用数学的等差数列的求和公式*/
/*

#include <stdio.h>
int main()
{
	int s;
	printf("s = %d\n", 50 * ( 2 + 100 ) / 2);
	return 0;
}

*/
