#include <stdio.h>
#include <stdlib.h>

int main(void) //main‚ÍÅ‰‚ÉÀs‚³‚ê‚é
    
{
    int n;
    scanf("%d" , &n);
    if (n == 0)
    {
    float a , b;
    scanf("%f%f", &a, &b); //a‚Æb‚ğ“ü—Í
    printf("%1.0f + %1.0f = %1.0f\n", a, b, a + b);
    printf("%1.0f - %1.0f = %1.0f\n", a, b, a - b);
    printf("%1.0f * %1.0f = %1.0f\n", a, b, a * b);
    printf("%1.0f / %1.0f = %f\n", a, b, a / b);
    printf("%1.0f / %1.0f = %1.0f ... %d\n", a, b, a / b , (int)a % (int)b);
    }
    return 0;
}