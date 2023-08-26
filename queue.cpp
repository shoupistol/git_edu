#include <cstdio>

enum {
    ENQUEUE = 1,
    DEQUEUE,
    PEEK,
    SIZE,
    EXIT
};

int *queue;
int *queuecpy;
int count = 0;

void enq() {
    queuecpy = new int[count + 1];
    for(int i = 0; i < count; i++) {
        queuecpy[i] = queue[i];
    }
    queue = new int[count + 1];
    count++;
    scanf("%d",&queuecpy[count - 1]);
    for(int i = 0; i < count; i++) {
        queue[i] = queuecpy[i];
    }
}
void deq() {
    if(count > 0) {
        printf("%d\n",queue[0]);
        count--;
        queuecpy = new int[count];
        for(int i = 0; i < count; i++) {
            queuecpy[i] = queue[i + 1];
        }
        queue = new int[count];
        for(int i = 0; i < count; i++) {
            queue[i] = queuecpy[i];
        }
    } else {
        printf("this queue is empty!\n");
    }
}

int main() {
    int select;
    while (true)
    {
        printf("enqueue:1 dequeue:2 peek:3 size:4 exit:5\n");
        scanf("%d",&select);
        switch (select)
        {
        case ENQUEUE:
            enq();
            break;
        case DEQUEUE:
            deq();
            break;
        case PEEK:
            if(count > 0) {
                printf("%d\n",queue[0]);
            } else {
                printf("this queue is empty!\n");
            }
            break;
        case SIZE:
            printf("%d\n",count);
            break;
        case EXIT:
            delete queue;
            delete queuecpy;
            return 0;
            break;
        default:
            printf("error\n");
            break;
        }
    }
}