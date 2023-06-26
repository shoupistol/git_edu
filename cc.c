#include <stdio.h>

int main(void)
{
    int age;
    scanf("%d" , &age);
    if (age <= 3) {
        printf("–³—¿\n");
    } else if (age <= 12){
        printf("150‰~\n");
    } else {
        printf("200000‰~\n");
    }
    return 0;
}