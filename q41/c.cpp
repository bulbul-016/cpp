#include <iostream>
#include <vector>
using namespace std;
bool prime (int val) {
    if (val < 2) return false;
    for (long long i = 2; i * i <= val; i++) {
        if (val % i == 0) return false;
    }   return true;
}
int main () {
    int n;
    vector<int> p;
    vector<int> v;
    cin >> n;
    for (int i = 2; i <= 111111; i++)
        if (prime(i)) p.push_back (i);
    for (int i = 0; i < p.size (); i++)
        if (prime(i + 1)) v.push_back(p[i]);
    cout << v[n - 1];
    return 0;
}