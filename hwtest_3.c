/*******************************
 * 输入两个字符，若这两个字符的序号*
 * （ASCⅡ编码值）之差为偶数，则输 *
 * 出它们的后继字符，否则输出它们的*
 * 前趋字符。					*
 * ****************************/

#include <stdio.h>
#include <math.h>

int main()
{
	char a, b;
	int c;
	printf("Please input two char:");
	scanf("%c,%c", &a, &b);
	c = abs(a - b) % 2;
	if(c == 0)
		printf("a = %c, b = %c\n", a + 1, b + 1);
	else
		printf("a = %c, b = %c\n", a - 1, b - 1);
	return 0; 
}
