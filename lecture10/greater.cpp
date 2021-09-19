#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a[]={1,2,3};
    int l=sizeof(a)/sizeof(int);
    for(int i=0; i<l; i++){
        cout<<a[i]<<" ";
    } cout<<endl;
    sort(a, a+l, greater<int>());
    for(int i=0; i<l; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
