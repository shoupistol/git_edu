#include <stdio.h>

int main(void) {
    int num;
    printf("素因数分解したい数字 ");
    scanf("%d",&num);
    for(int i = 2; i <= num; i++) {
        if(num % i == 0) {
            printf("%d\n",i);
            num /= i;
            i--; //もう一回判定させる
        }
    }
    return 0;
}