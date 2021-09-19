#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void print(vector<int> v){
     vector<int> :: reverse_iterator it;
    for(it=v.rbegin(); it!=v.rend(); ++it){
        cout<<*it<<" ";
    }
}
void f(){
    int n,x;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; ++i){
        cin>>x;
        v.push_back(x); 
        
    }
     print(v);  
     cout<<endl<<*v.begin(); //выводит 1-й элемент
}

int main(){
    f();
    return 0;
}