#include "Stack.h"
#include <iostream>

#define INITIAL_CAPACITY 16

using namespace std;
Stack::Stack() {
    capacity = INITIAL_CAPACITY;
    data =(int*)(malloc(capacity * sizeof(int)));
     if(data == NULL){
            cout << "Failed to allocate memory " << endl;
            exit(1);

        }
    size = 0;
}

Stack::~Stack() {
    free(data);
}
Stack::Stack(const Stack& orijinal){
capacity = orijinal.capacity;
data = (int*)malloc(capacity*sizeof(int));
 if(data == NULL){
            cout << "Failed to allocate memory " << endl;
            exit(1);

        }
size = orijinal.size;

for(int i = 0; i < capacity ; i++){
    data[i]= orijinal.data[i];
}


}
Stack& Stack::operator=(const Stack& orijinal){
if ( this == &orijinal){
    return *this;
}
if(capacity < orijinal.size){
    free(this->data);
   this->capacity  = orijinal.size;
   this->data = (int*)(malloc(orijinal.size * sizeof(int)));

}
size = orijinal.size;
for(int i= 0; i< size ; i++){
    data[i]=orijinal.data[i];
}
return *this;

}

void Stack::push(int element) {
    if (isFull()) {
        capacity *= 2;
        data = (int*)(realloc(data ,capacity * sizeof(int)));
        if(data == NULL){
            cout << "Failed to reallocate memory " << endl;
            exit(1);

        }

    }
    data[size++] = element;
}

int Stack::pop() {
    if (isEmpty()) {
        cout << "Error: Cannot pop from an empty stack" << endl;
    }
    return data[--size];
}

bool Stack::isEmpty(){
    return size == 0;

}
bool Stack::isFull(){
    return size == capacity;}

void Stack::printStack(){
Stack tempstack;
while (!isEmpty()){
    int element = pop();
    cout <<element << endl;
    tempstack.push(element);
}
while(!tempstack.isEmpty()){
    int element = tempstack.pop();
    push(element);

}

}
