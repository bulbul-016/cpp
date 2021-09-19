#include <iostream>
#include <set>
using namespace std;
int a, b;
int main(){
    cin>>a>>b;
    while(a<=b){
        int cur=a; int cnt=0;
        set<int>s;
        while(cur){
            s.insert(cur%10);
            cur/=10; cnt++;
        }
        if(s.size()==cnt){
            cout<<a;
            return 0;
        } ++a;
    } cout << "Understandable, have a great day";
    return 0;
}





// 1000 1030

// 1023