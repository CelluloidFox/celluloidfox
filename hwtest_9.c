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

//        for( i = 10; i <= 100; i = pow(i, i + 1) )