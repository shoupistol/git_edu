#include <stdio.h>

int main(void){
    int kadai,chukan,teiki;
    int manten1,manten2,manten3;
    int point1,point2,point3;
    int baseA,baseB,baseC;
    int result;

    printf("課題、中間、定期の評価割合 ");
    scanf("%d,%d,%d",&kadai ,&chukan ,&teiki);

    printf("それぞれの満点の点数 ");
    scanf("%d,%d,%d",&manten1 ,&manten2 ,&manten3);

    printf("それぞれの獲得した点数 ");
    scanf("%d,%d,%d",&point1 ,&point2 ,&point3);

    printf("A,B,C,Fの基準値 ");
    scanf("%d,%d,%d",&baseA ,&baseB ,&baseC);

    result = (point1 * kadai / manten1) + (point2 * chukan / manten2) + (point3 * teiki / manten3);

    if(result >= baseA) printf("単位 : A");
    else if(result >= baseB) printf("単位 : B");
    else if(result >= baseC) printf("単位 : C");
    else printf("単位 : F");
    
    return 0;
}