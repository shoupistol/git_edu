#include <stdio.h>

int main(void) {
    int count;

    printf("âΩî‘Ç‹Ç≈ï\é¶Ç∑ÇÈÅH ");
    scanf("%d",&count);

    for (int i = 1; i <= count; i++) {
        if(i % 15 == 0){
            printf("hogefuga\n");
        } else if(i % 5 == 0) {
            printf("fuga\n");
        } else if(i % 3 == 0) {
            printf("hoge\n");
        } else {
            printf("%d\n",i);
        }
    }

    return 0;
}