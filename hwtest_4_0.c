/******************************
 * 有一个函数：				          *
 * y = { x - 1  , -5 < x < 0  *
 * 		 x		, x = 0		        *
 * 		 x + 1  , 0 < x < 8 }   *
 * 分别用以下语句编写一程序，要   *
 * 求输入x的值，输出y的值。	    *
 *****************************/

//不嵌套的if语句 
#include <stdio.h>

int main()
{
	float x;
	printf("Please input x:");
	scanf("%f", &x);
	if(x > -5 && x < 0)
		printf("y = %f\n", x - 1);
	else if(x == 0)
		printf("y = 0\n");
	else if(x > 0 && x < 8)
		printf("y = %f\n", x + 1);
	else
		printf("Error,please input again!\n");
	return 0;
}
