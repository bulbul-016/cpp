#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(10);
    s.push(2);
    s.push(16);
    s.push(12);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
//12 16 2 10