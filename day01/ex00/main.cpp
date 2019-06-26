#include <iostream>
#include <cstdlib>
#include "Pony.hpp"

void ponyOnTheHeap() {
    const Pony *heapPony = new Pony("Great", "Vasya", true);
    delete heapPony;
}

void ponyOnTheStack() {
    const Pony StackPony("Beauty", "Gregoty", false);
}

int main() {
    ponyOnTheHeap();
    ponyOnTheStack();
    system("leaks -q a.out");
    return 0;
}