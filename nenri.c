#include <stdio.h>

int main(void){
    double nenri;
    double money,goal;
    int year = 0;

    printf("�N��(%%) ");
    scanf("%lf",&nenri);
    nenri = nenri / 100 + 1;
    printf("�����l�A����l ");
    scanf("%lf,%lf",&money ,&goal);

    while (money < goal)
    {
        money *= nenri;
        year++;
    }
    
    
    printf("���������N : %d",year);
    
}