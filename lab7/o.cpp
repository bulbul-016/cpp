#include <bits/stdc++.h>
using namespace std; 

string kth(int i, int k, int n, string s)
{
    if(n<=0) return s;
    int y = n%k;
    n = n/k;
    if(y>9) {
        char x = 55 + char(y);
        y = char(x);
        s+=y;
        return kth(i+1,k,n,s);
    }
    else 
    {
        s = s + char(y+'0');
        return kth(i+1,k,n,s);
    }
}

int main() {
    int n, k, y;
    cin >> n >> k;
    string s ="";
    s = kth(0,k,n,"");
    reverse(s.begin(), s.end());
    cout << s;
}