#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANDOM(min , max) min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX))

int main(void) {
    int answer;
    srand((unsigned int)time(NULL)); 
    int num = RANDOM(1,500);
    num = RANDOM(1,500); //Ç±Ç§ÇµÇΩÇÁóêêîÇ™Ç€Ç≠Ç»ÇÈ

    for(int i = 1; ;i++){
        printf("êîÇì¸óÕ ");
        scanf("%d",&answer);
        if(num == answer){
            printf("%dâÒÇ≈ê≥â!\n",i);
            break;
        } else if(num > answer) {
            printf("è¨Ç≥Ç¢!\n");
        } else if(num < answer) {
            printf("ëÂÇ´Ç¢!\n");
        }
    }
    return 0;
}