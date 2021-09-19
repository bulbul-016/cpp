#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v;
    for(int i=0; i<10; i++){
        v.push_back(i);
    }
    rotate(v.begin(),v.begin()+3, v.end());
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
// 3 4 5 6 7 8 9 0 1 2