#include <iostream>
#include <iostream>
#include <map>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;
map<int, vector<string>> m;
map<string, int> cnt;
set<string> ss;
int main () {
    string s, cur = "";
    getline(cin,s);
    for(int i=0;i<s.size();i++) {
        if(s[i]!=' ')cur+=s[i];
        else{
            if(!cur.empty()){
                cnt[cur]++;
                ss.insert(cur);
                cur.clear();
            }
        }
        if (i==s.size()-1){
            if(!cur.empty()){
                cnt[cur]++;
                ss.insert(cur);
            }
        }
    }
    set<string>::iterator i;
    for(i=ss.begin();i!=ss.end();i++)
        m[-cnt[(*i)]].push_back(*i);
    map<int, vector<string>>::iterator j;
    for(j=m.begin(); j!=m.end();j++){
        pair<int, vector<string>> pr=*j;
        for(int k=0; k<pr.second.size();k++) {
            cout<<pr.second[k]<<" : "<<-pr.first<<endl;
        }
    }
    return 0;
}








// some repeating words words words but

// words : 3
// but : 1
// repeating : 1
// some : 1
