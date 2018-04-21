#include <stdio.h>
#include <math.h>

int main()
{
  float x, y, d;
  printf("Please input x and y:");
  scanf("%f,%f", &x, &y);
  d = sqrt( (x + 1) * (x + 1) + (y - 3) * (y - 3) ) - 1.5;
  if(d == 0)
    printf("on circle");
  if(d < 0)
    printf("circle inside");
  if(d >0)
    printf("circle outside");
  return 0;
}

