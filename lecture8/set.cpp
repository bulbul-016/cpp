#include <iostream>
#include <set>
using namespace std;
void f(){
    set<int> s;
    int x;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        s.insert(x);
    }
    set<int> :: iterator it;
    for(it=s.begin(); it!=s.end(); ++it){
        cout<<*it<<" ";
    } 
    cout<<endl<<*s.begin()<<" "<<*s.rbegin(); //самый первый и последний
    cout<<endl<<s.size(); //размер
}
int main(){
    f();
    return 0;
}
// 5
// 1 1 2 3 2 cin
// 1 2 3 cout
// 1 3 first and last
// 3