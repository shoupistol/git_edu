#include <stdio.h>

int plus (int , int);
int minus (int , int);
int asterisk (int , int);
int slash (int , int);

int main(void) {
    int a , n , b , c;
    scanf("%d%d%d", &a , &n , &b); //n = 1 ‚Í + , n = 2 ‚Í - , n = 3 ‚Í * , n = 4 ‚Í /
    switch(n) {
        case 1:
            c = m1(a , b);
            break;
        case 2:
            c = m2(a , b);
            break;
        case 3:
            c = m3(a , b);
            break;
        case 4:
            c = m4(a , b);
            break;
    }
    printf("%d\n", c);
}

int plus (int a , int b) {
    return a + b;
}

int minus (int a , int b) {
    return a - b;
}

int asterisk (int a , int b) {
    return a * b;
}
int slash (int a , int b) {
    return a / b;
}