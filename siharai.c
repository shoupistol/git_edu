#include <stdio.h>

int main(void) {
    int money,hundred,ten,one;

    printf("������H ");
    scanf("%d",&money);

    hundred = money / 100;
    money %= 100;
    ten = money / 10;
    money %= 10;
    one = money;

    printf("100�~ : %d��\n",hundred);
    printf("10�~ : %d��\n",ten);
    printf("1�~ : %d��\n",one);

    return 0;
}