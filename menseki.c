#include <stdio.h>

double menseki(int);

int main(void){
    int type;
    printf("}Œ`‚Ìí—Ş ");  
    scanf("%d",&type);
    printf("–ÊÏ : %lf",menseki(type));
    return 0;
}

double menseki(type){
    int under,over,high,radius,angle;
    switch (type)
    {
    case 1:
        printf("’ê•ÓA‚‚³ : ");
        scanf("%d,%d",&under ,&high);
        return under * high / 2;
        break;

    case 2:
        printf("cA‰¡ : ");
        scanf("%d,%d",&high ,&under);
        return under * high;
        break;

    case 3:
        printf("ã’êA‰º’êA‚‚³ : ");
        scanf("%d,%d,%d",&over ,&under ,&high);
        return (over + under) / 2 * high;
        break;
    
    case 4:
        printf("’ê•ÓA‚‚³ : ");
        scanf("%d,%d",&under ,&high);
        return under * high;
        break;

    case 5:
        printf("”¼Œa : ");
        scanf("%d",&radius);
        return radius * radius * 3.14;
        break;

    case 6:
        printf("”¼ŒaA’†SŠp : ");
        scanf("%d,%d",&radius ,&angle);
        return radius * radius * 3.14 * angle / 360;
        break;
    }
}
