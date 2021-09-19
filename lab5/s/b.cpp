#include <iostream>
using namespace std;
void s(int *a, int m){
    for(int i=1; i<=m; i++)
    cin>>a[i];
}
void d(int *a, int n){
    for(int j=1; i<=n; j++)
    cin>>a[j];
}
cout<<endl;
void v(int *a, int *b, int *c )

int main(){
    int n;
    cin>>n;
    int a[n], b[n];
    cin>>a[n]>>b[n];
    for(int i=1; i<=n; i++){
         cout<<v(a[i],b[i]);
    }
   
    return 0;
}