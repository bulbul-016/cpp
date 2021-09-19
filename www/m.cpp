#include <iostream>
#include <map>
using namespace std;
int main(){
    map<char,int>m;
    string s; cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z'){
            m[s[i]]++;
        }
        //else continue;
    }
    map<char,int> :: iterator it;
    for(it=m.begin(); it!=m.end(); it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    return 0;
}
// adafdgfdadad5621554%vfh#sjvdsaax
// a 6
// d 6
// f 3
// g 1
// h 1
// j 1
// s 2
// v 2
// x 1
