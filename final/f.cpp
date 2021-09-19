#include <bits/stdc++.h>
using namespace std;
set < int > s;
int n, x, y;
int rev(int x){
    int rv = 0;
    while(x > 0){
        rv *= 10;
        rv += (x % 10);
        x /= 10;
    }
    return rv;
}
int main(){
    cin >> n;
    while(n > 0){
        cin >> x >> y;
        x = rev(x), y = rev(y);
        cout << rev(x + y) << endl;
        n--;
    }
}