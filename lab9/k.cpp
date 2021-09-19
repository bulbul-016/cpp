#include <iostream>
#include <map>
using namespace std;
int main(){
	map<int,int> m;
	int n; cin>>n; int c=0;
	for (int i=0;i<n;i++){
        int s; cin>>s; 
        m[s]++;
	}
    map<int,int> :: iterator it;
    for(it=m.begin(); it!=m.end(); ++it){
        if((*it).second==2){
            c=c+((*it).first)*2;
        }
    }
    cout<<c<<endl;
}