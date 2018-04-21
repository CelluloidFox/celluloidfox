//判断1000以内的数是否为水仙花数
#include <stdio.h>

int main()
{
    int n;
    int a, b, c;
    printf("Please input a number:");
    scanf("%d", &n);
    if(n < 1000)
    {
        a = n / 100;
        b = n / 10 - a * 10;
        c = n / 1 - a * 100 - b * 10;
        if(n == (a * a * a + b * b * b + c * c *c))
            printf("Yes,it is.");
        else
            printf("No,it isn't.");
    }
    else
        printf("Error,please input again!");
    return 0;
}