#include <stdio.h>
#include <math.h>

int main(void){
    int n1, n2;
    char kigo;
    printf("数字を入力して\n");
    scanf("%d%d",&n1 , &n2);
    printf("記号を入力して\n");
    scanf("%c",&kigo);
    scanf("%c",&kigo);
    switch (kigo)
    {
        case'+':
            printf("%d", n1 + n2);
            break;
        case'-':
            printf("%d", n1 - n2);
            break;
        case'*':
            printf("%d", n1 * n2);
            break;
        case'/':
            printf("%d", n1 / n2);
            break;
        case'%':
            printf("%d", n1 % n2);
            break;
        case'^':
            printf("%d", (int)pow((int)n1 , (int)n2));
            break;
    }
    return 0;
}