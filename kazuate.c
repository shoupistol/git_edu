#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANDOM(min , max) min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX))

int main(void) {
    int answer;
    srand((unsigned int)time(NULL)); 
    int num = RANDOM(1,500);
    num = RANDOM(1,500); //���������痐�����ۂ��Ȃ�

    for(int i = 1; ;i++){
        printf("������� ");
        scanf("%d",&answer);
        if(num == answer){
            printf("%d��Ő���!\n",i);
            break;
        } else if(num > answer) {
            printf("������!\n");
        } else if(num < answer) {
            printf("�傫��!\n");
        }
    }
    return 0;
}