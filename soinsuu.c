#include <stdio.h>

int main(void) {
    int num;
    printf("�f������������������ ");
    scanf("%d",&num);
    for(int i = 2; i <= num; i++) {
        if(num % i == 0) {
            printf("%d\n",i);
            num /= i;
            i--; //������񔻒肳����
        }
    }
    return 0;
}