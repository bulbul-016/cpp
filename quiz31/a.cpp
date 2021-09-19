#include <iostream>
using namespace std;

bool f(int n){
    int m = 0;
    for (int i = 2; i < n; i++){
        if (n%i== 0){
            m++; break;
        }
    }
    if (m!= 0) return false;
    else return true;
}

void ff(){
    int n;
    cin >> n;
    int k = 1, c = 0;
    while (true){
        k++;
        if(f(k)==true){
            c++;
        }
        if( c==n){
            cout << k;
            break;
        }
    }
}

int main(){
    ff();
    return 0;
}
