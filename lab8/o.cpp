#include<iostream>
#include<set>
using namespace std;
int main(){
	string s;
	set<char> st;
	cin>>s;
	string ans = "";
	for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z'){
            if(st.count(s[i]) != 1){
			st.insert(s[i]);
		    }
        }else{
            s[i]=char(int(s[i])+32);
            if(st.count(s[i]) != 1){
			st.insert(s[i]);
            }
        }
		
	}
    cout<<st.size()<<endl;
    set<char> :: iterator it;
    for(it=st.begin(); it!=st.end(); ++it){
        cout<<*it<<" ";
    } 
	return 0;
}
