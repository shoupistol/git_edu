#include <stdio.h>

double menseki(int);

int main(void){
    int type;
    printf("�}�`�̎�� ");  
    scanf("%d",&type);
    printf("�ʐ� : %lf",menseki(type));
    return 0;
}

double menseki(type){
    int under,over,high,radius,angle;
    switch (type)
    {
    case 1:
        printf("��ӁA���� : ");
        scanf("%d,%d",&under ,&high);
        return under * high / 2;
        break;

    case 2:
        printf("�c�A�� : ");
        scanf("%d,%d",&high ,&under);
        return under * high;
        break;

    case 3:
        printf("���A����A���� : ");
        scanf("%d,%d,%d",&over ,&under ,&high);
        return (over + under) / 2 * high;
        break;
    
    case 4:
        printf("��ӁA���� : ");
        scanf("%d,%d",&under ,&high);
        return under * high;
        break;

    case 5:
        printf("���a : ");
        scanf("%d",&radius);
        return radius * radius * 3.14;
        break;

    case 6:
        printf("���a�A���S�p : ");
        scanf("%d,%d",&radius ,&angle);
        return radius * radius * 3.14 * angle / 360;
        break;
    }
}
