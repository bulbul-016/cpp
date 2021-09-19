#include <iostream>
using namespace std;
void f(int *a, int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}
string s(int *a, int x, int n){
    for(int i=0; i<n; i++){
        if(a[i]==x){
            return"Yes";
        }
    }
    return"No";
}
int main(){
    int n;
    cin>>n;
    int a[n];
    f(a,n);
    int x;
    cin>>x;
    string w = s(a,x,n);
    cout<<w;
    return 0;
}