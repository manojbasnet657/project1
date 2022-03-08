#include<stdio.h>
#include<stdlib.h>
int mutex=1,full=0,empty=3,x=0;
int main(){
    void producer();
    void consumer();
    int wait(int);
    int single(int);
    printf("\n1.producer\n2.consumer\n3.exit");
    while(1){
        printf("\nEnter your choice:");
        scanf("%d",&n);
        switch(n){
            case 1:if((mutex==1)&&(empty!=0))
            producer();
            else
            printf("Buffer is full!!");
            break;
            case 2:if((multex==1)&&(full!=0))
            consumer();
            else
            printf("Buffer is empty!!");
            break;
            case 3:
            exit(0);
            break;
        }
    }
    return 0;
}
int wait(int s)
{
    return(--s);
}
int single(ints)
{
    return(++s);
}
void producer()
{
    metex=wait(mutex);
    full=single(full);
    empty=wait(empty);
    x++;
    printf("\nproducer produces the item %d",x);
    mutex=single(mutex)
} void consumer()
{
    metex=wait(metex);
    full=wait(full);
    empty=single(empty);
    printf("\nconsumer consumes item %d",x);
    x--;
    mutex=single(mutex);
}
