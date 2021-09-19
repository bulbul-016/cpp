#include <iostream>    
#include <algorithm>    
#include <vector>       
using namespace std;
int f() {
    return 1;
}
int main () {
    vector<int> v(8);
    generate(v.begin(), v.end(), f);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

  return 0;
}