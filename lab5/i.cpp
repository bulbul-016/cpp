#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string a;
    cin>>a;
    string b;
    cin>>b;
    for(int i=0; i<a.size(); i++){
        for(int j=0; j<b.size(); j++){
            if(a[i]==b[j]){
                b.erase(j,1);
                a.erase(i,1);
                i--;
                break;
            }
        }
    }
    if(a.size()!=0 || b.size()!=0){
        cout<<"NO";
    }
    else cout<<"YES";
    return 0;
}