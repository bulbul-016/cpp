#include <iostream>
using namespace std;
void f(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; ++i){
        cin>>a[i];
    } 
    int x;
    cin>>x;
    int y=0;
    for(int i=0; i<n; ++i){
        if(a[i]==x){
            y++;
            break;
        }
    } 
    if(y==0){
        cout<<"NO";
    } else cout<<"YES";
}
int main(){
    f();
    return 0;
}