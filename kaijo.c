#include <stdio.h>

int main(void){
    int count , answer;
    answer = 1;
    printf("‰½‰ñH\n");
    scanf("%d",&count);
    for(int i = 1; i <= count; i++){
        answer *= i;
        printf("%2d! : %10d\n" , i , answer);
    }
    return 0;
}