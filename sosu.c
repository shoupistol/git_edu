#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int num,amari;
    bool sosu = true; //true = �f�� false = �f������Ȃ�
    printf("���肵�������� ");
    scanf("%d",&num);
    for(int i = 2; i < num; i++) {
        if(num % i == 0) {
            sosu = false;
        }
    }
    if(sosu) {
        printf("�f���ł�");
    } else {
        printf("�f������Ȃ�");
    }
}