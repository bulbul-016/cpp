#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n;++i){
        cin>>a[i];
    }
    int s=0;
    for(int i=0; i<n; i++){
        if(a[i]==a[n-i-1]){
            s++;
        }
    } if(s>0){
        cout<<"YES";
    } else cout<<"NO";
    return 0;
}