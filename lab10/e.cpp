#include <iostream>
#include <map>
using namespace std;
int main(){
    int n; cin>>n; int c=0;
    map<string,int> m;
    for(int i=0; i<n; i++){
        int w; cin>>w;
        for(int j=0; j<w; j++){
            string s; cin>>s;
            int z; cin>>z; c=c+z;
            m[s]=z; 
        }
    }
    map<string,int> :: iterator it;
    for(it=m.begin(); it!=m.end(); it++){
        int v=((double)((*it).second)/(double)(c))*100;
        cout<<(*it).first<<" "<<v<<endl;
    }
    return 0;
}