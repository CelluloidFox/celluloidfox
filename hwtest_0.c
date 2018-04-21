/*输入一年份和月份，输入这一年份该月的天数。*/
#include <stdio.h>

int main()
{
  int month, year, days, x, y;
  printf("Please input year and month:");
  scanf("%d, %d", &year, &month);
  if(month == 2) //判断二月
  {
    /*闰年的条件是：能被4整除，但不能被100整除，或者能被4整除，又能被400整除*/
    if( (year % 4 == 0) && (year % 100 != 0) || (year % 4 == 0) && (year % 400 == 0) )
      printf("The month has 29 days.\n");
    else
      printf("The month has 28 days.\n");
  }
  else  //除了2月的
  {
    switch(month)
    {
      case 4:
      case 6:
      case 9:
      case 11: printf("The month has 30 days\n"); break;
      default: printf("The month has 31 days\n"); break;
    }
  }
  return 0;
}
