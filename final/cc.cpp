#include <bits/stdc++.h>

using namespace std;

set < int > s;

int fin, a[111111], n;

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = n - 1; i >= 0; i--){
        fin = max(fin, a[i]);
        s.insert(fin);
    }
    cout << s.size();
}
