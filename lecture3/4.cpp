#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (n==0) cout <<"0";
    else{
        while(n>0){
        cout << n%10 << " ";
        n=n/10;
        }

    }
    return 0;
}
// 125
// 5 2 1