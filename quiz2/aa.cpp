#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int q=0;
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; ++i){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0; i<n; ++i){
        if(a[i]!=a[i+1]-1){
            q++;
        }  
    } cout<<q;
    return 0;
}
// 4
// 6 2 3 8
// 2 3 6 8 \ 2 3 4 5 6 7 8