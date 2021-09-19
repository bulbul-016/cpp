#include <iostream>
#include <set>
#include <map>
using namespace std;
void f(){
    freopen("d.txt", "r", stdin);
    string s;    
    set<string> ad;
    set<string> an;
    map<string, bool> m;
    int i=0;
    while(cin>>s){
        if(i%2==0){
            if(m[s]==false){
                ad.insert(s);
                m[s]=true;
            }
        } else{
            if(m[s]==false){
                an.insert(s);
                m[s]=true;
            }
        }
        i++;
    } 
    cout<<"Aida"<<endl;
    set<string> :: iterator it;
    for(it=ad.begin(); it!=ad.end(); ++it){
        cout<<*it<<endl;
    }
    cout<<"Aizhan"<<endl;
    set<string> :: iterator rit;
    for(rit=an.begin(); rit!=an.end(); ++rit){
        cout<<*rit<<endl;
    }
}
int main(){
    f();
    return 0;
}