/***************************
 * 打印一千以内的“水仙花数”。*
 * “水仙花数”是一个三位数，  *
 * 其各位数立方和等于该数本身*
 * ************************/

#include <stdio.h>

int main()
{
    int n;
    int a, b, c;
    for(n = 100; n <= 999; n++)
    {
        a = n / 100;
        b = n / 10 - a * 10;
        c = n / 1 - a * 100 - b * 10;
        if(n == (a * a * a + b * b * b + c * c *c))
            printf("%d\n", n);
    }
    return 0;
}

/*

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int a, b, c;
    for(n = 100; n <= 999; n++)
    {
        a = n / 100;
        b = n / 10 - a * 10;
        c = n / 1 - a * 100 - b * 10;
        if( n == ( pow(a,3) + pow(b,3) + pow(c,3) ) )
            printf("%d\n", n);
    }
    return 0;
}

