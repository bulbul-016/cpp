#include <iostream>
using namespace std;

int main(){
    string s; cin >> s;
    string k;
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])){
            while(isdigit(s[i])){
                k+=s[i];
                i++;
            }
            cnt+=stoi(k);
            k="";
        }
    }
    cout << cnt;
    return 0;
}