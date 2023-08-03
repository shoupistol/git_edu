#include <stdio.h>
#include <math.h>

int main(void) {
    double a,b,c,x1,x2;
    printf("ax^2 + bx + c\n");
    printf("a = ");
    scanf("%lf",&a);
    printf("b = ");
    scanf("%lf",&b);
    printf("c = ");
    scanf("%lf",&c);

    x1 = (-b + sqrt(pow(b , 2) - 4 * a *c)) / 2 * a;  //‰ð‚ÌŒöŽ®
    x2 = (-b - sqrt(pow(b , 2) - 4 * a *c)) / 2 * a;  //‰ð‚ÌŒöŽ®
    
    if(pow(b,2)-4*a*c < 0) {
        printf("‹•”‰ð‚Å‚·");
    } else if (pow(b,2)-4*a*c == 0) {
        if(x1 > 0) {
            printf("(x - %f)^2",x1);
        } else {
            printf("(x + %f)^2",x1 * -1);
        }
    } else {
        if(x1 > 0) {
            printf("(x - %f)",x1);
        } else {
            printf("(x + %f)",x1 * -1);
        }
        if(x2 > 0) {
            printf("(x - %f)",x2);
        } else {
            printf("(x + %f)",x2 * -1);
        }
    }
    
    return 0;
}