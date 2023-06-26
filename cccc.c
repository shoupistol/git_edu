#include <stdio.h>

int main(void){
    int money = 5000;
    int mark;
    printf("“_”‚ğ“ü‚ê‚Ä\n");
    scanf("%d" , &mark);
    if (mark >= 80){
        printf("‚²‚Ù‚¤‚Ñ‚¾‚æ\n");
        money += 2000;
    } else {
        printf("Ÿ‚ÍŠæ’£‚Á‚Ä‚Ë\n");
        money -= 1000;
    }
    printf("¡Œ‚Ì‚¨‚±‚Ã‚©‚¢‚Í%d‰~‚Å‚·\n" , money);
    return 0;
}