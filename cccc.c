#include <stdio.h>

int main(void){
    int money = 5000;
    int mark;
    printf("点数を入れて\n");
    scanf("%d" , &mark);
    if (mark >= 80){
        printf("ごほうびだよ\n");
        money += 2000;
    } else {
        printf("次は頑張ってね\n");
        money -= 1000;
    }
    printf("今月のおこづかいは%d円です\n" , money);
    return 0;
}