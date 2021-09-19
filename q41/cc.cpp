#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(11);
    v.push_back(17);
    v.push_back(31);
    v.push_back(41);
    v.push_back(59);
    v.push_back(67);
    v.push_back(89);
    cout<<v[n-1];
    return 0;
}