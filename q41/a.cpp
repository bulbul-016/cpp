#include <iostream>
#include <set>
using namespace std;
int n;
multiset<pair<int, int>> m; 
int main (){
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int a, b; 
            cin >> a >> b;
        if (a > b)
            swap (a, b);
        cout << m.count ({a, b}) << endl;
        m.insert ({a, b});
    }

    return 0;
}