#include <stdio.h>

int main(void){
    int kadai,chukan,teiki;
    int manten1,manten2,manten3;
    int point1,point2,point3;
    int baseA,baseB,baseC;
    int result;

    printf("�ۑ�A���ԁA����̕]������ ");
    scanf("%d,%d,%d",&kadai ,&chukan ,&teiki);

    printf("���ꂼ��̖��_�̓_�� ");
    scanf("%d,%d,%d",&manten1 ,&manten2 ,&manten3);

    printf("���ꂼ��̊l�������_�� ");
    scanf("%d,%d,%d",&point1 ,&point2 ,&point3);

    printf("A,B,C,F�̊�l ");
    scanf("%d,%d,%d",&baseA ,&baseB ,&baseC);

    result = (point1 * kadai / manten1) + (point2 * chukan / manten2) + (point3 * teiki / manten3);

    if(result >= baseA) printf("�P�� : A");
    else if(result >= baseB) printf("�P�� : B");
    else if(result >= baseC) printf("�P�� : C");
    else printf("�P�� : F");
    
    return 0;
}