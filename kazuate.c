#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANDOM(min , max) min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX))

int main(void) {
    int answer;
    srand((unsigned int)time(NULL)); 
    int num = RANDOM(1,500);
    num = RANDOM(1,500); //二回やったら乱数がぽくなる

    for(int i = 1; ;i++){
        printf("数を入力 ");
        scanf("%d",&answer);
        if(num == answer){
            printf("%d回で正解!\n",i);
            break;
        } else if(num > answer) {
            printf("小さい!\n");
        } else if(num < answer) {
            printf("大きい!\n");
        }
    }
    return 0;
}