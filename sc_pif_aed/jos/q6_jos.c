#include "stdio.h"
#include "stdlib.h"
#define SIZE 10

struct text {
    char value;
};

int items[SIZE];
struct text lista[10][10];
int front = -1;
int rear = -1;

void enQueue(int value) {
//   if (rear == SIZE - 1)
    // printf("\nQueue is Full!!");
//   else {
    if (front == -1)
      front = 0;
    rear++;
    items[rear] = value;
    // printf("\nInserted -> %d", value);
//   }
}

void deQueue() {
//   if (front == -1)
    // printf("\nQueue is Empty!!");
//   else {
    printf("\nDeleted : %d", items[front]);
    front++;
    if (front > rear)
      front = rear = -1;
//   }
}

int main(void){
    int array[SIZE];

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            scanf("%s",  &text[i].value);
        }
    }

}