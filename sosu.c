#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int num,amari;
    bool sosu = true; //true = ‘f” false = ‘f”‚¶‚á‚È‚¢
    printf("”»’è‚µ‚½‚¢”š ");
    scanf("%d",&num);
    for(int i = 2; i < num; i++) {
        if(num % i == 0) {
            sosu = false;
        }
    }
    if(sosu) {
        printf("‘f”‚Å‚·");
    } else {
        printf("‘f”‚¶‚á‚È‚¢");
    }
}