#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
class Stack {
public:
     Stack();
    ~Stack();
     Stack(const Stack& orijinal);
    Stack& operator=(const Stack& orijinal);
    void push(int element);
    int pop();
    bool isEmpty();
    bool isFull();
    void printStack();

private:
    int* data;
    int size;
    int capacity;
};


#endif // STACK_H_INCLUDED
