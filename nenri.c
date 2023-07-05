#include <stdio.h>

int main(void){
    double nenri;
    double money,goal;
    int year = 0;

    printf("年利(%%) ");
    scanf("%lf",&nenri);
    nenri = nenri / 100 + 1;
    printf("初期値、上限値 ");
    scanf("%lf,%lf",&money ,&goal);

    while (money < goal)
    {
        money *= nenri;
        year++;
    }
    
    
    printf("かかった年 : %d",year);
    
}