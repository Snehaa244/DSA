#include<iostream>
#include<stack>
#include<list>
using namespace std;

class Stack {
    list<int> l1;
    public:
     void push(int val) {
        l1.push_front(val);
     }
     void pop() {
        l1.pop_front();
     }
     int top() {
        return l1.front();
     }
     bool empty() {
       return l1.size() == 0;
     }

};
 int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
    }

