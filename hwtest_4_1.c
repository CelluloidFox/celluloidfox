//嵌套的if语句

#include <stdio.h>

int main()
{
	float x;
	printf("Please input x:");
	scanf("%f", &x);
	if(x > -5 && x < 8)
	{
		if(x > -5 && x < 0)
			printf("y = %f\n", x - 1);
		else if(x > 0 && x < 8)
			printf("y = %f\n", x + 1);
		else
			printf("y = 0\n");
	}
	else
		printf("Error,please input again!\n");
	return 0;
}
