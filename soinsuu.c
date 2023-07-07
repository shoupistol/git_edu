#include <stdio.h>

int main(void) {
    int num;
    printf("‘fˆö”•ª‰ğ‚µ‚½‚¢”š ");
    scanf("%d",&num);
    for(int i = 2; i <= num; i++) {
        if(num % i == 0) {
            printf("%d\n",i);
            num /= i;
            i--; //‚à‚¤ˆê‰ñ”»’è‚³‚¹‚é
        }
    }
    return 0;
}