#include <stdio.h>

int m1 (int , int);
int m2 (int , int);
int m3 (int , int);
int m4 (int , int);

int main(void) {
    int a , n , b , c;
    scanf("%d%d%d", &a , &n , &b); //n = 1 �� + , n = 2 �� - , n = 3 �� * , n = 4 �� /
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

int m1 (int a , int b) {
    return a + b;
}

int m2 (int a , int b) {
    return a - b;
}

int m3 (int a , int b) {
    return a * b;
}
int m4 (int a , int b) {
    return a / b;
}