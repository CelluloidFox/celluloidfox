/**************************************************
*输入一个不多于5位的正整数，要求：                       *
*1）求出它是几位数。                                  *
*2）分别输出每一位数字。                               *
*3）按逆序输出各位数字，例如原数为123，应输出321。         *
*提示：应分别测试1，2，3，4，5位数的整数，并且在程序中      *
*还应当对不合法的输入做必要的处理，                      *
*例如输入的数为负数，输入的数超过5位。                   *
**************************************************/

#include <stdio.h>

int main()
{
  int n, n_1;
  int a, b, c, d, e;
  a = b = c = d = e = 0;
  printf("Please input an int number:");
  scanf("%d", &n);
  if(n >= 1 && n <= 99999)
  {
    n_1 = n;
    if(n >= 10000 && n <= 99999)
      printf("It has five median.\n");
    if(n >= 1000 && n <= 9999)
      printf("It has four median.\n");
    if(n >= 100 && n <= 999)
      printf("It has three median.\n");
    if(n >= 10 && n <= 99)
      printf("It has two median.\n");
    if(n >= 1 && n <= 9)
      printf("It has one median.\n");
  }
  else
    printf("Error,please input again!\n");

  a = n_1 / 10000;
  b = n_1 / 1000 - a * 10;
  c = n_1 / 100 - a * 100 - b * 10;
  d = n_1 / 10 - a * 1000 - b * 100 - c * 10;
  e = n_1 / 1 - a * 10000 - b * 1000 - c * 100 - d * 10;
  if(a != 0)
  {
    printf("%d,%d,%d,%d,%d\n", a, b, c, d, e);
    printf("%d%d%d%d%d\n", e, d, c, b, a);
  }
  if(a == 0 && b != 0)
  {
    printf("%d,%d,%d,%d\n", b, c, d, e);
    printf("%d%d%d%d\n", e, d, c, b);
  }
  if(a == 0 && b == 0 && c != 0)
  {
    printf("%d,%d,%d\n", c, d, e);
    printf("%d%d%d\n", e, d, c);
  }
  if(a == 0 && b == 0 && c == 0 && d != 0)
  {
    printf("%d,%d\n", d, e);
    printf("%d%d\n", e, d);
  }
  if(a == 0 && b == 0 && c == 0 && d == 0 && e != 0)
  {
    printf("%d\n", e);
    printf("%d\n", e);
  }

  return 0;
}
