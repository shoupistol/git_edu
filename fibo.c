#include <stdio.h>

int main (void)
{
    int count;
    int beforebefore = 0; //�Q�O
    int before = 0; //�P�O
    int answer = 1; //����
    printf("����H\n");
    scanf("%d", &count);
    for(int i = 1 ; i <= count ; i++){
        printf("%10d\n" , answer);
        before = beforebefore;
        beforebefore = answer;
        answer = beforebefore + before;
    }
    return 0;
}