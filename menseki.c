#include <stdio.h>

int menseki(int);

int main(void){
    int type;
    printf("�}�`�̎�� ");  
    scanf("%d",type);
    printf("�ʐ� : %d",menseki(type));
}

int menseki(type){
    switch (type)
    {
    case 1:
        int under,high;
        printf("��ӁA���� : ");
        scanf("%d,%d",&under ,&high);
        return under * high / 2;
        break;

    case 2:
        int under,high;
        printf("�c�A�� : ");
        scanf("%d,%d",&high ,&under);
        return under * high;
        break;

    case 3:
        int under,over,high;
        printf("���A����A���� : ");
        scanf("%d,%d,%d",&over ,&under ,&high);
        return (over + under) / 2 * high;
        break;
    
    case 4:
        int under,high;
        printf("��ӁA���� : ");
        scanf("%d,%d",&under ,&high);
        return under * high;
        break;

    case 5:
        int radius;
        printf("���a");

    default:
        printf("error");
        break;
    }
}//oi ugoke
