#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    long long s=0;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        s=s+a[i];
    }
     cout <<"Average: "<<(double)s/(double)n <<endl;
     cout <<"Sum: "<<s;
    return 0;
}