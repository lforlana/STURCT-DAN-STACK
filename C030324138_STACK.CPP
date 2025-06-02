#include <iostream>
#include <string>
using namespace std;

#define MAXSTACK 10

typedef int ItemType;

typedef struct {
    ItemType Item[MAXSTACK];
    int Count;
} Stack;

void awal(Stack *S) {
    S->Count = 0;
}

int penuh(Stack *S) {
    return (S->Count == MAXSTACK);
}

int kosong(Stack *S) {
    return (S->Count == 0);
}

void pop(Stack *S, ItemType *x) {
    if (kosong(S)) {
        cout << "Stack kosong!" << endl;
    } else {
        --(S->Count);
        *x = S->Item[S->Count];
    }
}

void push(ItemType x, Stack *S) {
    if (penuh(S)) {
        cout << "Stack penuh!" << endl;
    } else {
        S->Item[S->Count] = x;
        ++(S->Count);
    }
}

int main() {
    Stack Lana;
    awal(&Lana);

    ItemType Alan;  

    pop(&Lana, &Alan);
    push(99, &Lana);
    push(73, &Lana);
    push(23, &Lana);
    push(88, &Lana);
    pop(&Lana, &Alan);
    push(12, &Lana);
    push(65, &Lana);
    push(53, &Lana);
    push(45, &Lana);
    push(34, &Lana);
    push(78, &Lana);
    push(90, &Lana);
    pop(&Lana, &Alan);
    push(100, &Lana);
    push(101, &Lana);
    push(102, &Lana);

    return 0;
}
