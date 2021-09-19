#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v(10);
   //v.push_back(1); 0 0 0 0 0 0 0 0 0 0 1 (11 ұяшық)
   //fill(v.begin(), v.end(),12); 12 12 12 12 12 12 12 12 12 12
    fill(v.begin(), v.begin()+4,5);
    fill(v.begin()+5, v.end()-2,12);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}