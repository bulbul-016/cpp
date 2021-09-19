#include <iostream>
using namespace std;
bool p(int x);
int main(){
    int n;
    cin >> n;
    for (int i = 2; i < n; i++){
        bool q = 0;
        if (p(i) && p(n - i)){
            cout << i << " " << n - i << endl;
            q = 1;
        }
        if(q){
            break;
        }
    }
    return 0;
}
bool p(int x){
    if (x <= 1) return 0;
    for (int i = 2; i < x; i++){
        if (x % i == 0) return 0;
    }
    return 1;
}







// 686

// 3 683