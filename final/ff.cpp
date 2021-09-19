#include <iostream>
#include <vector>
using namespace std;
int a, b, d;
int counter;
vector <int> arr;
int func(int c);
int main(){
    cin >> counter;
    while (counter--){
        cin >> a >> b;
        d = func(a) + func(b);
        arr.push_back(func(d));
    }
    for (auto &&i : arr) cout << i << endl;
    return 0;
}
int func(int c){
    int ww = 0;
    while(c != 0){
        ww *= 10;
        ww += c % 10;
        c /= 10;
    }
    return ww;
}