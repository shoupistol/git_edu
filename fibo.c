#include <stdio.h>

int main (void)
{
    int count;
    int beforebefore = 0; //‚QŒÂ‘O
    int before = 0; //‚PŒÂ‘O
    int answer = 1; //“š‚¦
    printf("‰½‰ñH\n");
    scanf("%d", &count);
    for(int i = 1 ; i <= count ; i++){
        printf("%10d\n" , answer);
        before = beforebefore;
        beforebefore = answer;
        answer = beforebefore + before;
    }
    return 0;
}