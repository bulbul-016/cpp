#include <iostream>
using namespace std;
int main(){
    string a, t;
    cin >> a >> t;
    int j = 0;
    for(int i = t.size(); i < a.size(); i++){
        t += t[j];
        j++;
    }
    string s;
    for(int i = 0; i < a.size(); i++){
        int n = int(a[i]) + int(t[i]) % 97;
        if (n > 122) {
            n -= 26;
        }
        s += char(n);
    }
    cout << s;
    return 0;
}