#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void f(){
    vector<int> v;
    int x;
    int cnt=0;
    while(1){
        cin>>x;
        if(x!=0) v.push_back(x);
        else break;
        cnt++;
    } cout<<cnt<<endl;
    reverse(v.begin(), v.end());

    vector<int> :: iterator i;
    for(i=v.begin(); i!=v.end(); i++){
        cout<<(*i)<<" ";
    }

}
int main(){
    f();
    return 0;
}