#include <iostream>
#include "Stack.h"
using namespace std;
void testAssignmentOperator(Stack &s1, Stack &s3);
void LargerToSmaller(const Stack &s3);
void SmallerToLarger(Stack &s1);
void OneIsEmpty(const Stack &s1);
void EqualSize();
void AssignToItself();

int main()
{
     Stack s1;
     s1.push(1);
     s1.push(2);
     s1.push(3);
     cout << "Stack s1 :" << endl;
     s1.printStack();

     Stack s2(s1);
     cout << "Stack s2 :" << endl;
     s2.printStack();

     Stack s3;
     s3.push(1);
     s3.push(2);
     s3.push(3);
     s3.push(4);
     s3.push(5);
     s3.push(6);
     cout << "Stack s3 :" << endl;
     s3.printStack();

     testAssignmentOperator(s1, s3);

     return 0;
}
void testAssignmentOperator(Stack &s1, Stack &s3)
{
     LargerToSmaller(s3);
     SmallerToLarger(s1);
     OneIsEmpty(s1);
     EqualSize();
     AssignToItself();
}
void LargerToSmaller(const Stack &s3)
{
     Stack s4;
     s4.push(10);
     cout << "s4 before assignment :" << endl;
     s4.printStack();
     s4 = s3;
     cout << "s4 after assignment s4 = s3:" << endl;
     s4.printStack();
}
void SmallerToLarger(Stack &s1)
{
     Stack s5;
     s5.push(10);
     cout << "s1 before assignment :" << endl;
     s1.printStack();
     s1 = s5;
     cout << "s1 after assignment s1 = s5 :" << endl;
     s1.printStack();
}
void OneIsEmpty(const Stack &s1)
{
     Stack s6;
     cout << "s6 before assignment :" << endl;
     s6.printStack();
     s6 = s1;
     cout << "s6 after assignment s6 = s1:" << endl;
     s6.printStack();
}
void EqualSize()
{
     Stack s7, s8;
     s7.push(1);
     s7.push(2);
     s8.push(3);
     s8.push(4);
     cout << "s8 before assignment :" << endl;
     s8.printStack();
     s8 = s7;
     cout << "s8 after assignment s8 = s8:" << endl;
     s8.printStack();
}
void AssignToItself()
{
     Stack s9;
     s9.push(1);
     s9.push(2);
     cout << "s9 before assignment :" << endl;
     s9.printStack();
     s9 = s9;
     cout << "s9 after assignment s9 = s9:" << endl;
     s9.printStack();
}