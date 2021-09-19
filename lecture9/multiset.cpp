#include <iostream>
#include <set>
using namespace std;
int main(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(16);
    ms.insert(12);
    ms.insert(1);
    ms.insert(2);
    multiset<int> :: iterator it;
    for(it=ms.begin(); it!=ms.end(); ++it){
        cout<<*it<<" ";
    } 
    return 0;
}