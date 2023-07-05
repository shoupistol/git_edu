#include <stdio.h>

int menseki(int);

int main(void){
    int type;
    printf("図形の種類 ");  
    scanf("%d",type);
    printf("面積 : %d",menseki(type));
}

int menseki(type){
    switch (type)
    {
    case 1:
        int under,high;
        printf("底辺、高さ : ");
        scanf("%d,%d",&under ,&high);
        return under * high / 2;
        break;

    case 2:
        int under,high;
        printf("縦、横 : ");
        scanf("%d,%d",&high ,&under);
        return under * high;
        break;

    case 3:
        int under,over,high;
        printf("上底、下底、高さ : ");
        scanf("%d,%d,%d",&over ,&under ,&high);
        return (over + under) / 2 * high;
        break;
    
    case 4:
        int under,high;
        printf("底辺、高さ : ");
        scanf("%d,%d",&under ,&high);
        return under * high;
        break;

    case 5:
        int radius;
        printf("半径");

    default:
        printf("error");
        break;
    }
}//oi ugoke
