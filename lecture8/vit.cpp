#include <iostream>
#include <vector>
using namespace std;
void f(){
    vector<int> v;
    for(int i=0; i<10; ++i){
        v.push_back(i);
    }
    vector<int> :: iterator it;
    for(it=v.begin(); it!=v.end(); ++it){
        cout<<*it<<" ";
    }
}
int main(){
    f();
    return 0;
}