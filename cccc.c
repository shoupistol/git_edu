#include <stdio.h>

int main(void){
    int money = 5000;
    int mark;
    printf("�_��������\n");
    scanf("%d" , &mark);
    if (mark >= 80){
        printf("���ق��т���\n");
        money += 2000;
    } else {
        printf("���͊撣���Ă�\n");
        money -= 1000;
    }
    printf("�����̂����Â�����%d�~�ł�\n" , money);
    return 0;
}