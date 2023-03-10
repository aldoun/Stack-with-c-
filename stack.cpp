#include "iostream"
#include "stack.h"
using namespace std;

stack::stack(int s):sizeOfS(s), S(new int[s]), top(-1){}
void stack::push(int e){
    S[++top] = e;
}
void stack::pop(){
    top--;
}
const int& stack::Top() const{
    return S[top];
}
int stack::size() const{
    return top + 1;
}
bool stack::empty() const{
    return (top==-1);
}
void stack::print() const{
    for(int i = top; i>=0 ; i--){
        cout<<S[i]<<endl;
    }

}

int main()
{
    stack s1(5);
    s1.push(8);
    s1.push(9);
    s1.push(4);
    s1.push(3);
    s1.push(5);

    s1.print();

    return 0;
}