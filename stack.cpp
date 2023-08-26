#include <cstdio>

enum {
    PUSH = 1,
    POP,
    PEEK,
    SIZE,
    EXIT
};

int *stack;
int *stackcpy;
int count = 0;

void push() {
    stackcpy = new int[count + 1];
    for(int i = 0; i < count; i++) {
        stackcpy[i] = stack[i];
    }
    stack = new int[count + 1];
    count++;
    scanf("%d",&stackcpy[count - 1]);
    for(int i = 0; i < count; i++) {
        stack[i] = stackcpy[i];
    }
}
void pop() {
    if(count > 0) {
        printf("%d\n",stack[count - 1]);
        count--;
        stackcpy = new int[count];
        for(int i = 0; i < count; i++) {
            stackcpy[i] = stack[i];
        }
        stack = new int[count];
        for(int i = 0; i < count; i++) {
            stack[i] = stackcpy[i];
        }
    } else {
        printf("this stack is empty!\n");
    }
}

int main() {
    int select;
    while (true)
    {
        printf("push:1 pop:2 peek:3 size:4 exit:5\n");
        scanf("%d",&select);
        switch (select)
        {
        case PUSH:
            push();
            break;
        case POP:
            pop();
            break;
        case PEEK:
            if(count > 0) {
                printf("%d\n",stack[count - 1]);
            } else {
                printf("this stack is empty!\n");
            }
            break;
        case SIZE:
            printf("%d\n",count);
            break;
        case EXIT:
            delete stack;
            delete stackcpy;
            return 0;
            break;
        default:
            printf("error\n");
            break;
        }
    }

}