#include <stdio.h>

#define Dwij 9  //Here 'Dwij' mean MAX VALUE

int array[Dwij];
int top = -1;

int isFull() {
    return top == Dwij - 1;
}

int isEmpty() {
    return top == -1;
}

void push(int value) {
    if (isFull()) {
        printf("Stack is full! Cannot push(Overflow) %d\n", value);
    } else {
        array[++top] = value;
        printf("Pushed %d onto the top of stack\n", value);
    }
}

void pop() {
    if (isEmpty()) {
        printf("Stack is empty! Cannot pop(Underflow)\n");
    } else {
        int value = array[top--];
        printf("Popped %d from the top of stack\n", value);
    }
}

void display() {
    if (isEmpty()) {
        printf("Stack is empty!(Underflow)\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }
}

int main() {
    push(1);
    push(8);
    push(9);
    push(7);
    push(2);
    display();

    pop();
    pop();
    display();

    push(3);
    display();

    return 0;
}