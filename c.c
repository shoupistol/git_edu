#include <stdio.h>
#include <stdlib.h>

int main(void) //main�͍ŏ��Ɏ��s�����
    
{
    int n;
    scanf("%d" , &n);
    if (n == 0)
    {
    float a , b;
    scanf("%f%f", &a, &b); //a��b�����
    printf("%1.0f + %1.0f = %1.0f\n", a, b, a + b);
    printf("%1.0f - %1.0f = %1.0f\n", a, b, a - b);
    printf("%1.0f * %1.0f = %1.0f\n", a, b, a * b);
    printf("%1.0f / %1.0f = %f\n", a, b, a / b);
    printf("%1.0f / %1.0f = %1.0f ... %d\n", a, b, a / b , (int)a % (int)b);
    }
    return 0;
}