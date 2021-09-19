#include<iostream>
#include<map>
#include<set>
using namespace std;
int main(){
	int n;
	cin>>n;
	map<string, int> m;
    set<string> st;
	for(int i=0;i<n;i++){
		int x;
        string s;
		cin>>s>>x;
        m[s]+=1;
		st.insert(s);
	} bool f=false;
	set<string> :: iterator it;
	for(it=st.begin(); it!=st.end(); it++){
        if(m[(*it)]>1){ 
        cout<<(*it)<<endl;
        f=true;
        }
	}
    if(f!=1) cout<<"No";
	return 0;
}
