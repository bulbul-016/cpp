#include<bits/stdc++.h>
using namespace std;
map <string, string> changeto;
vector <string> a, b, ans;
map <string, bool> used;
map <string, string> results;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s, x;
        cin >> s >> x;
        used[s] = 1;
        changeto[s] = x;
        a.push_back(s);
        b.push_back(x);
    }
    for (int i = 0; i < a.size(); i++) {
        if (used[a[i]] == 1) {
            string s = changeto[a[i]], x = a[i];
            while (s != "\0") {
                x = s;
                used[x] = 0;
                if (x == a[i])
                    break;
                s = changeto[s];
            }
            results[a[i]] = x;
        }
    }
    map <string, string> :: iterator it;
    cout << results.size() << endl;
    for (it = results.begin(); it != results.end(); it++) {
        cout << (*it).first << ' ' << (*it).second << endl;
    }
    return 0;
}