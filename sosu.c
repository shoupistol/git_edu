#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int num,amari;
    bool sosu = true; //true = 素数 false = 素数じゃない
    printf("判定したい数字 ");
    scanf("%d",&num);
    for(int i = 2; i < num; i++) {
        if(num % i == 0) {
            sosu = false;
        }
    }
    if(sosu) {
        printf("素数です");
    } else {
        printf("素数じゃない");
    }
    return 0;
}