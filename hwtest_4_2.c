//switch语句

#include <stdio.h>

int main()
{
	float x;
	int a;
	printf("Please input x:");
	scanf("%f", &x);
	if(x > -5 && x < 0 || x > 0 && x < 8)
	{
		a = x > 0 ? 1 : 0;
		switch(a)
		{
			case 0: printf("y = %f\n", x - 1); break;
			default: printf("y = %f\n", x + 1); break;
		}
	}
	else if(x == 0)
		printf("y = 0\n");
	else
		printf("Error,please input again!\n");
	return 0;
}
		
