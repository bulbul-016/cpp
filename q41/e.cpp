#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int n;
bool ok;
int main () {
    cin >> n;
    ok = true;
    while (ok) {
        ++n;
        string s = to_string (n);
        set<char> st;
        for (char c : s) 
            st.insert (c);
        if (st.size () == s.size ()) {
            cout << n;
            ok = false;
        }
    }
    return 0;
}