#include <iostream>
using namespace std;
int main(){
    long long w;
    cin>>w;
    int a[w];
    for(int i=1; i<=w; i++){
        cin>>a[i];
    }
    long long s=0;
    for(int i=1; i<=w; i++){
        s=s+a[i];
        } cout<<s;
    return 0;
}