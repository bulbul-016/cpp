#include <iostream>
#include <vector>
using namespace std;
void f(){
    vector<int> v;
    int x;
    int cnt=-1;
    while(x!=0){
        cin>>x;
        v.push_back(x);
        cnt++;
    }
    cout<<cnt<<endl;
    for(int i=0; i<cnt; i++){
        cout<<v[i]<<" ";
    }

}
int main(){
    f();
    return 0;
}