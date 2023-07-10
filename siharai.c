#include <stdio.h>

int main(void) {
    int money,hundred,ten,one;

    printf("Ç¢Ç≠ÇÁÅH ");
    scanf("%d",&money);

    hundred = money / 100;
    money %= 100;
    ten = money / 10;
    money %= 10;
    one = money;

    printf("100â~ : %dñá\n",hundred);
    printf("10â~ : %dñá\n",ten);
    printf("1â~ : %dñá\n",one);

    return 0;
}