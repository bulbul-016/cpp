#include <iostream>
#include <map>
using namespace std;
int main(){
	map<string,int> m;
	int n; cin>>n; int c=0;
	for (int i=0;i<n;i++){
		string s; cin>>s; 
        m[s]++;
	}
    map<string,int> :: iterator it;
    for(it=m.begin(); it!=m.end(); ++it){
        if((*it).second==3){
            c++;
        }
    }
    cout<<c;
}