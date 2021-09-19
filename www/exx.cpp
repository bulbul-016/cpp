#include <iostream>
#include <map>
using namespace std;
int main(){
    map<string,int> m;
    string s;
    while(cin>>s){
        string k; getline(cin,k);
        for(int i=1; i<k.size(); i+=2){
            if(k[i]-'0'>m[s])m[s]=k[i]-'0';
        }
        cout<<s<<" "<<m[s]<<endl;
    }
    return 0;
}
// Arai 2 3 4
// Arai 4
// Bai 1 2 3
// Bai 3