#include <stdio.h>
#define Height 10

int calculate(int Long, int Width);

int main()
{
    int m_long, m_width;

    printf("长方形的高度： %d\n", Height);

    printf("请输入长度\n");
    scanf("%d", &m_long);

    printf("请输入宽度\n");
    scanf("%d", &m_width);

    printf("长方形的体积：%d\n", calculate(m_long, m_width));
    return 0;
} 

int calculate(int Long, int Width)
{
    int result = Long * Width * Height;
    return result;
}