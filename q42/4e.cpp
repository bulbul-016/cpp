#include <iostream>
#include <set>
#include <map>
using namespace std;
int n;
multiset<string> ms;
map<string, string> m;
string s;

int main () {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s;
        string a = s.substr(0, 2); //күн
        string b = s.substr(2, 3); //ай
        string c = s.substr(4, 6); //жыл
        m[c+b+a] = s;
        ms.insert(c+b+a);
    }
    multiset<string>::iterator i;
    for (i = ms.begin(); i != ms.end(); i++) 
        cout << m[*i] << endl;
    

    return 0;
}







// 3
// 01-12-2000
// 01-11-2000
// 31-10-2000

// 31-10-2000
// 01-11-2000
// 01-12-2000
